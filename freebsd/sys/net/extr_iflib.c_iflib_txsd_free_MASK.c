
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef TYPE_2__* iflib_txq_t ;
typedef int if_ctx_t ;
struct TYPE_4__ {int * ifsd_tso_map; int * ifsd_map; struct mbuf** ifsd_m; } ;
struct TYPE_5__ {TYPE_1__ ift_sds; int ift_tso_buf_tag; int ift_buf_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mbuf*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_2, iflib_txq_t VAR_3, int VAR_4)
{
 struct mbuf **VAR_5;

 VAR_5 = &VAR_3->ift_sds.ifsd_m[VAR_4];
 if (*VAR_5 == ((void*)0))
  return;

 if (VAR_3->ift_sds.ifsd_map != ((void*)0)) {
  FUNC_1(VAR_3->ift_buf_tag,
      VAR_3->ift_sds.ifsd_map[VAR_4], VAR_0);
  FUNC_2(VAR_3->ift_buf_tag, VAR_3->ift_sds.ifsd_map[VAR_4]);
 }
 if (VAR_3->ift_sds.ifsd_tso_map != ((void*)0)) {
  FUNC_1(VAR_3->ift_tso_buf_tag,
      VAR_3->ift_sds.ifsd_tso_map[VAR_4], VAR_0);
  FUNC_2(VAR_3->ift_tso_buf_tag,
      VAR_3->ift_sds.ifsd_tso_map[VAR_4]);
 }
 FUNC_3(*VAR_5);
 FUNC_0(VAR_1);
 *VAR_5 = ((void*)0);
}
