
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* iflib_txq_t ;
typedef int if_ctx_t ;
typedef int * bus_dmamap_t ;
struct TYPE_4__ {int ** ifsd_tso_map; int ** ifsd_map; } ;
struct TYPE_5__ {TYPE_1__ ift_sds; int ift_tso_buf_tag; int ift_buf_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_1, iflib_txq_t VAR_2, int VAR_3)
{
 bus_dmamap_t VAR_4;

 if (VAR_2->ift_sds.ifsd_map != ((void*)0)) {
  VAR_4 = VAR_2->ift_sds.ifsd_map[VAR_3];
  FUNC_1(VAR_2->ift_buf_tag, VAR_4, VAR_0);
  FUNC_2(VAR_2->ift_buf_tag, VAR_4);
  FUNC_0(VAR_2->ift_buf_tag, VAR_4);
  VAR_2->ift_sds.ifsd_map[VAR_3] = ((void*)0);
 }

 if (VAR_2->ift_sds.ifsd_tso_map != ((void*)0)) {
  VAR_4 = VAR_2->ift_sds.ifsd_tso_map[VAR_3];
  FUNC_1(VAR_2->ift_tso_buf_tag, VAR_4,
      VAR_0);
  FUNC_2(VAR_2->ift_tso_buf_tag, VAR_4);
  FUNC_0(VAR_2->ift_tso_buf_tag, VAR_4);
  VAR_2->ift_sds.ifsd_tso_map[VAR_3] = ((void*)0);
 }
}
