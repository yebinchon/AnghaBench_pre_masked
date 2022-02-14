
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rds_iw_recv_work {TYPE_3__* r_frag; int r_sge; TYPE_1__* r_iwinc; } ;
struct TYPE_8__ {scalar_t__ f_offset; int * f_page; } ;
struct rds_iw_connection {TYPE_4__ i_frag; struct rds_iw_recv_work* i_recvs; void* i_recv_hdrs_dma; TYPE_2__* i_cm_id; } ;
struct rds_header {int dummy; } ;
struct rds_connection {int c_faddr; struct rds_iw_connection* c_transport_data; } ;
struct ib_sge {int length; void* addr; } ;
typedef int gfp_t ;
typedef void* dma_addr_t ;
struct TYPE_7__ {scalar_t__ f_offset; int * f_page; void* f_mapped; int f_item; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {int ii_inc; int ii_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ,int *,scalar_t__,int,int ) ;
 scalar_t__ FUNC_6 (int ,void*) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct rds_connection*,int ) ;
 int VAR_4 ;
 struct ib_sge* FUNC_10 (struct rds_iw_connection*,int ) ;
 int VAR_5 ;
 struct ib_sge* FUNC_11 (struct rds_iw_connection*,int ) ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(struct rds_connection *VAR_9,
      struct rds_iw_recv_work *VAR_10,
      gfp_t VAR_11, gfp_t VAR_12)
{
 struct rds_iw_connection *VAR_13 = VAR_9->c_transport_data;
 dma_addr_t VAR_14;
 struct ib_sge *VAR_15;
 int VAR_16 = -VAR_1;

 if (!VAR_10->r_iwinc) {
  if (!FUNC_2(&VAR_4, 1, VAR_7)) {
   FUNC_12(VAR_8);
   goto out;
  }
  VAR_10->r_iwinc = FUNC_7(VAR_6,
       VAR_11);
  if (!VAR_10->r_iwinc) {
   FUNC_3(&VAR_4);
   goto out;
  }
  FUNC_0(&VAR_10->r_iwinc->ii_frags);
  FUNC_9(&VAR_10->r_iwinc->ii_inc, VAR_9, VAR_9->c_faddr);
 }

 if (!VAR_10->r_frag) {
  VAR_10->r_frag = FUNC_7(VAR_5, VAR_11);
  if (!VAR_10->r_frag)
   goto out;
  FUNC_0(&VAR_10->r_frag->f_item);
  VAR_10->r_frag->f_page = ((void*)0);
 }

 if (!VAR_13->i_frag.f_page) {
  VAR_13->i_frag.f_page = FUNC_1(VAR_12);
  if (!VAR_13->i_frag.f_page)
   goto out;
  VAR_13->i_frag.f_offset = 0;
 }

 VAR_14 = FUNC_5(VAR_13->i_cm_id->device,
      VAR_13->i_frag.f_page,
      VAR_13->i_frag.f_offset,
      VAR_2,
      VAR_0);
 if (FUNC_6(VAR_13->i_cm_id->device, VAR_14))
  goto out;






 VAR_10->r_frag->f_page = VAR_13->i_frag.f_page;
 VAR_10->r_frag->f_offset = VAR_13->i_frag.f_offset;
 VAR_10->r_frag->f_mapped = VAR_14;

 VAR_15 = FUNC_10(VAR_13, VAR_10->r_sge);
 VAR_15->addr = VAR_14;
 VAR_15->length = VAR_2;

 VAR_15 = FUNC_11(VAR_13, VAR_10->r_sge);
 VAR_15->addr = VAR_13->i_recv_hdrs_dma + (VAR_10 - VAR_13->i_recvs) * sizeof(struct rds_header);
 VAR_15->length = sizeof(struct rds_header);

 FUNC_4(VAR_10->r_frag->f_page);

 if (VAR_13->i_frag.f_offset < VAR_3) {
  VAR_13->i_frag.f_offset += VAR_2;
 } else {
  FUNC_8(VAR_13->i_frag.f_page);
  VAR_13->i_frag.f_page = ((void*)0);
  VAR_13->i_frag.f_offset = 0;
 }

 VAR_16 = 0;
out:
 return VAR_16;
}
