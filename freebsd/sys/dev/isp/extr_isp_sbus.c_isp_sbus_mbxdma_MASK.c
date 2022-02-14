
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint32_t ;
struct isp_pcmd {struct isp_pcmd* next; int wdog; int dmap; } ;
struct imush {int error; scalar_t__ maddr; } ;
struct TYPE_12__ {struct isp_pcmd* pcmd_pool; struct isp_pcmd* pcmd_free; int dmat; int respmap; int respdmat; int reqmap; int reqdmat; } ;
struct TYPE_13__ {int isp_maxcmds; TYPE_3__* isp_xflist; TYPE_3__* isp_xffree; TYPE_1__ isp_osinfo; int isp_lock; scalar_t__ isp_result_dma; void* isp_result; scalar_t__ isp_rquest_dma; int * isp_rquest; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_14__ {struct TYPE_14__* cmd; } ;
typedef TYPE_3__ isp_hdl_t ;
typedef void* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int ,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,void*,int,int ,struct imush*,int ) ;
 scalar_t__ FUNC_11 (int ,void**,int ,int *) ;
 int FUNC_12 (int ) ;
 int VAR_12 ;
 int FUNC_13 (int *,int *,int ) ;
 int VAR_13 ;
 int FUNC_14 (TYPE_2__*,int ,char*,...) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (int,int ,int) ;

__attribute__((used)) static int
FUNC_17(ispsoftc_t *VAR_14)
{
 caddr_t VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18;
 struct imush VAR_19;


 if (VAR_14->isp_xflist != ((void*)0))
  return (0);
 if (VAR_14->isp_rquest != ((void*)0) && VAR_14->isp_maxcmds == 0)
  return (0);
 FUNC_3(VAR_14);
 if (VAR_14->isp_rquest != ((void*)0))
  goto gotmaxcmds;

 if (FUNC_6(FUNC_12(FUNC_2(VAR_14)), 1,
     VAR_2+1, VAR_3,
     VAR_3, ((void*)0), ((void*)0), VAR_4,
     VAR_7, VAR_2, 0,
     VAR_12, &VAR_14->isp_lock, &VAR_14->isp_osinfo.dmat)) {
  FUNC_14(VAR_14, VAR_6, "could not create master dma tag");
  goto bad;
 }




 VAR_16 = FUNC_1(FUNC_5(VAR_14));
 if (FUNC_6(VAR_14->isp_osinfo.dmat, VAR_11, VAR_2+1,
     VAR_3, VAR_1, ((void*)0), ((void*)0),
     VAR_16, 1, VAR_16, 0, VAR_12, &VAR_14->isp_lock,
     &VAR_14->isp_osinfo.reqdmat)) {
  FUNC_14(VAR_14, VAR_6, "cannot create request DMA tag");
  goto bad;
 }
 if (FUNC_11(VAR_14->isp_osinfo.reqdmat, (void **)&VAR_15,
     VAR_0, &VAR_14->isp_osinfo.reqmap) != 0) {
  FUNC_14(VAR_14, VAR_6, "cannot allocate request DMA memory");
  FUNC_7(VAR_14->isp_osinfo.reqdmat);
  goto bad;
 }
 VAR_14->isp_rquest = VAR_15;
 VAR_19.error = 0;
 if (FUNC_10(VAR_14->isp_osinfo.reqdmat, VAR_14->isp_osinfo.reqmap,
     VAR_15, VAR_16, VAR_13, &VAR_19, 0) || VAR_19.error) {
  FUNC_14(VAR_14, VAR_6, "error loading request DMA map %d", VAR_19.error);
  goto bad;
 }
 FUNC_14(VAR_14, VAR_5, "request area @ 0x%jx/0x%jx",
     (uintmax_t)VAR_19.maddr, (uintmax_t)VAR_16);
 VAR_14->isp_rquest_dma = VAR_19.maddr;




 VAR_16 = FUNC_1(FUNC_4(VAR_14));
 if (FUNC_6(VAR_14->isp_osinfo.dmat, VAR_11, VAR_2+1,
     VAR_3, VAR_1, ((void*)0), ((void*)0),
     VAR_16, 1, VAR_16, 0, VAR_12, &VAR_14->isp_lock,
     &VAR_14->isp_osinfo.respdmat)) {
  FUNC_14(VAR_14, VAR_6, "cannot create response DMA tag");
  goto bad;
 }
 if (FUNC_11(VAR_14->isp_osinfo.respdmat, (void **)&VAR_15,
     VAR_0, &VAR_14->isp_osinfo.respmap) != 0) {
  FUNC_14(VAR_14, VAR_6, "cannot allocate response DMA memory");
  FUNC_7(VAR_14->isp_osinfo.respdmat);
  goto bad;
 }
 VAR_14->isp_result = VAR_15;
 VAR_19.error = 0;
 if (FUNC_10(VAR_14->isp_osinfo.respdmat, VAR_14->isp_osinfo.respmap,
     VAR_15, VAR_16, VAR_13, &VAR_19, 0) || VAR_19.error) {
  FUNC_14(VAR_14, VAR_6, "error loading response DMA map %d", VAR_19.error);
  goto bad;
 }
 FUNC_14(VAR_14, VAR_5, "response area @ 0x%jx/0x%jx",
     (uintmax_t)VAR_19.maddr, (uintmax_t)VAR_16);
 VAR_14->isp_result_dma = VAR_19.maddr;

 if (VAR_14->isp_maxcmds == 0) {
  FUNC_0(VAR_14);
  return (0);
 }

gotmaxcmds:
 VAR_16 = sizeof (struct isp_pcmd) * VAR_14->isp_maxcmds;
 VAR_14->isp_osinfo.pcmd_pool = (struct isp_pcmd *)
     FUNC_16(VAR_16, VAR_8, VAR_9 | VAR_10);
 for (VAR_17 = 0; VAR_17 < VAR_14->isp_maxcmds; VAR_17++) {
  struct isp_pcmd *VAR_20 = &VAR_14->isp_osinfo.pcmd_pool[VAR_17];
  VAR_18 = FUNC_8(VAR_14->isp_osinfo.dmat, 0, &VAR_20->dmap);
  if (VAR_18) {
   FUNC_14(VAR_14, VAR_6,
       "error %d creating per-cmd DMA maps", VAR_18);
   while (--VAR_17 >= 0) {
    FUNC_9(VAR_14->isp_osinfo.dmat,
        VAR_14->isp_osinfo.pcmd_pool[VAR_17].dmap);
   }
   goto bad;
  }
  FUNC_13(&VAR_20->wdog, &VAR_14->isp_lock, 0);
  if (VAR_17 == VAR_14->isp_maxcmds-1) {
   VAR_20->next = ((void*)0);
  } else {
   VAR_20->next = &VAR_14->isp_osinfo.pcmd_pool[VAR_17+1];
  }
 }
 VAR_14->isp_osinfo.pcmd_free = &VAR_14->isp_osinfo.pcmd_pool[0];

 VAR_16 = sizeof (isp_hdl_t *) * VAR_14->isp_maxcmds;
 VAR_14->isp_xflist = (isp_hdl_t *) FUNC_16(VAR_16, VAR_8, VAR_9 | VAR_10);
 for (VAR_16 = 0; VAR_16 < VAR_14->isp_maxcmds - 1; VAR_16++)
  VAR_14->isp_xflist[VAR_16].cmd = &VAR_14->isp_xflist[VAR_16+1];
 VAR_14->isp_xffree = VAR_14->isp_xflist;

 FUNC_0(VAR_14);
 return (0);

bad:
 FUNC_15(VAR_14);
 FUNC_0(VAR_14);
 return (1);
}
