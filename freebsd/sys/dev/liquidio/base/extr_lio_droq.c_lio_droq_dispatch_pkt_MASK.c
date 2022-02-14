
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ subcode; scalar_t__ opcode; } ;
union octeon_rh {TYPE_2__ r; } ;
typedef int uint32_t ;
typedef int uint16_t ;
struct octeon_device {int dummy; } ;
struct lio_recv_info {TYPE_1__* recv_pkt; struct __dispatch* rsvd; } ;
struct lio_droq_info {scalar_t__ length; } ;
struct TYPE_6__ {int dropped_nodispatch; int dropped_nomem; } ;
struct lio_droq {TYPE_3__ stats; int dispatch_stq_head; int read_idx; int buffer_size; } ;
struct __dispatch {int node; scalar_t__ disp_fn; struct lio_recv_info* rinfo; } ;
typedef scalar_t__ lio_dispatch_fn_t ;
struct TYPE_4__ {union octeon_rh rh; } ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 struct lio_recv_info* FUNC_1 (struct octeon_device*,struct lio_droq*,int,int ) ;
 int FUNC_2 (struct octeon_device*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct octeon_device*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct octeon_device *VAR_1, struct lio_droq *VAR_2,
        union octeon_rh *VAR_3, struct lio_droq_info *VAR_4)
{
 struct lio_recv_info *VAR_5;
 lio_dispatch_fn_t VAR_6;
 uint32_t VAR_7;

 VAR_7 = FUNC_3(VAR_2->buffer_size, (uint32_t)VAR_4->length);

 VAR_6 = FUNC_4(VAR_1, (uint16_t)VAR_3->r.opcode,
       (uint16_t)VAR_3->r.subcode);
 if (VAR_6) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_7, VAR_2->read_idx);
  if (VAR_5 != ((void*)0)) {
   struct __dispatch *VAR_8 = VAR_5->rsvd;

   VAR_8->rinfo = VAR_5;
   VAR_8->disp_fn = VAR_6;
   VAR_5->recv_pkt->rh = *VAR_3;
   FUNC_0(&VAR_2->dispatch_stq_head,
        &VAR_8->node, VAR_0);
  } else {
   VAR_2->stats.dropped_nomem++;
  }
 } else {
  FUNC_2(VAR_1, "DROQ: No dispatch function (opcode %u/%u)\n",
       (unsigned int)VAR_3->r.opcode,
       (unsigned int)VAR_3->r.subcode);
  VAR_2->stats.dropped_nodispatch++;
 }

 return (VAR_7);
}
