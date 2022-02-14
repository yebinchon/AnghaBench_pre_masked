
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int reqdmat; int reqmap; int respdmat; int respmap; TYPE_4__* pcmd_pool; int dmat; } ;
struct TYPE_6__ {int isp_maxcmds; scalar_t__ isp_result_dma; scalar_t__ isp_rquest_dma; int * isp_rquest; TYPE_1__ isp_osinfo; int * isp_result; TYPE_4__* isp_xflist; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_7__ {int dmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_5(ispsoftc_t *VAR_1)
{
 int VAR_2;

 if (VAR_1->isp_xflist != ((void*)0)) {
  FUNC_4(VAR_1->isp_xflist, VAR_0);
  VAR_1->isp_xflist = ((void*)0);
 }
 if (VAR_1->isp_osinfo.pcmd_pool != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->isp_maxcmds; VAR_2++) {
   FUNC_1(VAR_1->isp_osinfo.dmat,
       VAR_1->isp_osinfo.pcmd_pool[VAR_2].dmap);
  }
  FUNC_4(VAR_1->isp_osinfo.pcmd_pool, VAR_0);
  VAR_1->isp_osinfo.pcmd_pool = ((void*)0);
 }
 if (VAR_1->isp_result_dma != 0) {
  FUNC_2(VAR_1->isp_osinfo.respdmat,
      VAR_1->isp_osinfo.respmap);
  VAR_1->isp_result_dma = 0;
 }
 if (VAR_1->isp_result != ((void*)0)) {
  FUNC_3(VAR_1->isp_osinfo.respdmat, VAR_1->isp_result,
      VAR_1->isp_osinfo.respmap);
  FUNC_0(VAR_1->isp_osinfo.respdmat);
  VAR_1->isp_result = ((void*)0);
 }
 if (VAR_1->isp_rquest_dma != 0) {
  FUNC_2(VAR_1->isp_osinfo.reqdmat,
      VAR_1->isp_osinfo.reqmap);
  VAR_1->isp_rquest_dma = 0;
 }
 if (VAR_1->isp_rquest != ((void*)0)) {
  FUNC_3(VAR_1->isp_osinfo.reqdmat, VAR_1->isp_rquest,
      VAR_1->isp_osinfo.reqmap);
  FUNC_0(VAR_1->isp_osinfo.reqdmat);
  VAR_1->isp_rquest = ((void*)0);
 }
}
