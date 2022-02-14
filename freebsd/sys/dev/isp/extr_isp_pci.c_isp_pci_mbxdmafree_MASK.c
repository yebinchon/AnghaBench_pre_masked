
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct isp_nexus {struct isp_nexus* next; int dmap; } ;
struct isp_fc {struct isp_nexus* nexus_free_list; int scmap; } ;
struct TYPE_9__ {int reqdmat; int reqmap; int respdmat; int respmap; int atiodmat; int atiomap; int iocbdmat; int iocbmap; int scdmat; struct isp_nexus* pcmd_pool; int dmat; } ;
struct TYPE_10__ {int isp_maxcmds; int isp_nchan; scalar_t__ isp_iocb_dma; scalar_t__ isp_atioq_dma; scalar_t__ isp_result_dma; scalar_t__ isp_rquest_dma; int * isp_rquest; TYPE_1__ isp_osinfo; int * isp_result; int * isp_atioq; int * isp_iocb; struct isp_nexus* isp_xflist; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_11__ {scalar_t__ isp_scdma; int * isp_scratch; } ;


 TYPE_7__* FUNC_0 (TYPE_2__*,int) ;
 struct isp_fc* FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct isp_nexus*,int ) ;

__attribute__((used)) static void
FUNC_9(ispsoftc_t *VAR_1)
{
 int VAR_2;

 if (VAR_1->isp_xflist != ((void*)0)) {
  FUNC_8(VAR_1->isp_xflist, VAR_0);
  VAR_1->isp_xflist = ((void*)0);
 }
 if (VAR_1->isp_osinfo.pcmd_pool != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->isp_maxcmds; VAR_2++) {
   FUNC_5(VAR_1->isp_osinfo.dmat,
       VAR_1->isp_osinfo.pcmd_pool[VAR_2].dmap);
  }
  FUNC_8(VAR_1->isp_osinfo.pcmd_pool, VAR_0);
  VAR_1->isp_osinfo.pcmd_pool = ((void*)0);
 }
 if (FUNC_3(VAR_1)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->isp_nchan; VAR_2++) {
   struct isp_fc *VAR_3 = FUNC_1(VAR_1, VAR_2);
   if (FUNC_0(VAR_1, VAR_2)->isp_scdma != 0) {
    FUNC_6(VAR_1->isp_osinfo.scdmat,
        VAR_3->scmap);
    FUNC_0(VAR_1, VAR_2)->isp_scdma = 0;
   }
   if (FUNC_0(VAR_1, VAR_2)->isp_scratch != ((void*)0)) {
    FUNC_7(VAR_1->isp_osinfo.scdmat,
        FUNC_0(VAR_1, VAR_2)->isp_scratch, VAR_3->scmap);
    FUNC_0(VAR_1, VAR_2)->isp_scratch = ((void*)0);
   }
   while (VAR_3->nexus_free_list) {
    struct isp_nexus *VAR_4 = VAR_3->nexus_free_list;
    VAR_3->nexus_free_list = VAR_4->next;
    FUNC_8(VAR_4, VAR_0);
   }
  }
  if (VAR_1->isp_iocb_dma != 0) {
   FUNC_4(VAR_1->isp_osinfo.scdmat);
   FUNC_6(VAR_1->isp_osinfo.iocbdmat,
       VAR_1->isp_osinfo.iocbmap);
   VAR_1->isp_iocb_dma = 0;
  }
  if (VAR_1->isp_iocb != ((void*)0)) {
   FUNC_7(VAR_1->isp_osinfo.iocbdmat,
       VAR_1->isp_iocb, VAR_1->isp_osinfo.iocbmap);
   FUNC_4(VAR_1->isp_osinfo.iocbdmat);
  }
 }
 if (VAR_1->isp_result_dma != 0) {
  FUNC_6(VAR_1->isp_osinfo.respdmat,
      VAR_1->isp_osinfo.respmap);
  VAR_1->isp_result_dma = 0;
 }
 if (VAR_1->isp_result != ((void*)0)) {
  FUNC_7(VAR_1->isp_osinfo.respdmat, VAR_1->isp_result,
      VAR_1->isp_osinfo.respmap);
  FUNC_4(VAR_1->isp_osinfo.respdmat);
  VAR_1->isp_result = ((void*)0);
 }
 if (VAR_1->isp_rquest_dma != 0) {
  FUNC_6(VAR_1->isp_osinfo.reqdmat,
      VAR_1->isp_osinfo.reqmap);
  VAR_1->isp_rquest_dma = 0;
 }
 if (VAR_1->isp_rquest != ((void*)0)) {
  FUNC_7(VAR_1->isp_osinfo.reqdmat, VAR_1->isp_rquest,
      VAR_1->isp_osinfo.reqmap);
  FUNC_4(VAR_1->isp_osinfo.reqdmat);
  VAR_1->isp_rquest = ((void*)0);
 }
}
