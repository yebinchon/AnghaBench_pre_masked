
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* iflib_txq_t ;
typedef int if_ctx_t ;
struct TYPE_5__ {int * ifsd_m; int * ifsd_tso_map; int * ifsd_map; } ;
struct TYPE_6__ {int ift_size; int * ift_ifdi; int * ift_tso_buf_tag; int * ift_buf_tag; TYPE_1__ ift_sds; int ift_mtx; int * ift_br; int ift_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(iflib_txq_t VAR_1)
{
 if_ctx_t VAR_2 = VAR_1->ift_ctx;

 for (int VAR_3 = 0; VAR_3 < VAR_1->ift_size; VAR_3++)
  FUNC_2(VAR_2, VAR_1, VAR_3);

 if (VAR_1->ift_br != ((void*)0)) {
  FUNC_3(VAR_1->ift_br);
  VAR_1->ift_br = ((void*)0);
 }

 FUNC_4(&VAR_1->ift_mtx);

 if (VAR_1->ift_sds.ifsd_map != ((void*)0)) {
  FUNC_1(VAR_1->ift_sds.ifsd_map, VAR_0);
  VAR_1->ift_sds.ifsd_map = ((void*)0);
 }
 if (VAR_1->ift_sds.ifsd_tso_map != ((void*)0)) {
  FUNC_1(VAR_1->ift_sds.ifsd_tso_map, VAR_0);
  VAR_1->ift_sds.ifsd_tso_map = ((void*)0);
 }
 if (VAR_1->ift_sds.ifsd_m != ((void*)0)) {
  FUNC_1(VAR_1->ift_sds.ifsd_m, VAR_0);
  VAR_1->ift_sds.ifsd_m = ((void*)0);
 }
 if (VAR_1->ift_buf_tag != ((void*)0)) {
  FUNC_0(VAR_1->ift_buf_tag);
  VAR_1->ift_buf_tag = ((void*)0);
 }
 if (VAR_1->ift_tso_buf_tag != ((void*)0)) {
  FUNC_0(VAR_1->ift_tso_buf_tag);
  VAR_1->ift_tso_buf_tag = ((void*)0);
 }
 if (VAR_1->ift_ifdi != ((void*)0)) {
  FUNC_1(VAR_1->ift_ifdi, VAR_0);
 }
}
