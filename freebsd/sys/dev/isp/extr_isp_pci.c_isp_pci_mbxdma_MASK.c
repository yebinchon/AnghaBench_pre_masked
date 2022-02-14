
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


typedef int uintmax_t ;
typedef size_t uint32_t ;
struct isp_pcmd {struct isp_pcmd* next; int wdog; int dmap; } ;
struct isp_nexus {struct isp_nexus* next; } ;
struct isp_fc {struct isp_nexus* nexus_free_list; int scmap; } ;
struct imush {int error; scalar_t__ maddr; } ;
struct TYPE_22__ {struct isp_pcmd* pcmd_pool; struct isp_pcmd* pcmd_free; int dmat; int scdmat; int iocbmap; int iocbdmat; int atiomap; int atiodmat; int respmap; int respdmat; TYPE_4__* ecmd_free; TYPE_4__* ecmd_base; scalar_t__ ecmd_dma; int reqmap; int reqdmat; } ;
struct TYPE_23__ {int isp_maxcmds; scalar_t__ isp_type; int isp_nchan; TYPE_3__* isp_xflist; TYPE_3__* isp_xffree; TYPE_1__ isp_osinfo; int isp_lock; scalar_t__ isp_iocb_dma; void* isp_iocb; scalar_t__ isp_atioq_dma; void* isp_atioq; scalar_t__ isp_result_dma; void* isp_result; scalar_t__ isp_rquest_dma; int * isp_rquest; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_24__ {struct TYPE_24__* cmd; } ;
typedef TYPE_3__ isp_hdl_t ;
struct TYPE_25__ {struct TYPE_25__* next; } ;
typedef TYPE_4__ isp_ecmd_t ;
typedef void* caddr_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;
struct TYPE_21__ {scalar_t__ isp_scdma; int * isp_scratch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_19__* FUNC_0 (TYPE_2__*,int) ;
 int VAR_4 ;
 struct isp_fc* FUNC_1 (TYPE_2__*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 size_t VAR_17 ;
 scalar_t__ FUNC_13 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int ,int *,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ,int ,void*,int,int ,struct imush*,int ) ;
 scalar_t__ FUNC_18 (int ,void**,int ,int *) ;
 int FUNC_19 (int ,void*,int ) ;
 int FUNC_20 (int ) ;
 int VAR_18 ;
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (struct isp_nexus*,int ) ;
 int VAR_19 ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,int ,char*,...) ;
 struct isp_nexus* FUNC_25 (size_t,int ,int) ;

__attribute__((used)) static int
FUNC_26(ispsoftc_t *VAR_20)
{
 caddr_t VAR_21;
 uint32_t VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26 = 0;
 bus_size_t VAR_27;
 bus_addr_t VAR_28;
 bus_addr_t VAR_29;
 struct imush VAR_30;
 isp_ecmd_t *VAR_31;


 if (VAR_20->isp_xflist != ((void*)0))
  return (0);
 if (VAR_20->isp_rquest != ((void*)0) && VAR_20->isp_maxcmds == 0)
  return (0);
 FUNC_5(VAR_20);
 if (VAR_20->isp_rquest != ((void*)0))
  goto gotmaxcmds;

 VAR_29 = VAR_1;
 if (FUNC_10(VAR_20) || FUNC_9(VAR_20) || FUNC_6(VAR_20)) {
  if (sizeof (bus_size_t) > 4)
   VAR_27 = (bus_size_t) (1ULL << 32);
  else
   VAR_27 = (bus_size_t) (1UL << 31);
  VAR_28 = VAR_1;
 } else {
  VAR_27 = (1UL << 24);
  VAR_28 = VAR_2;
 }
 if (sizeof (bus_size_t) > 4)
  VAR_23 = VAR_9;
 else
  VAR_23 = VAR_10;

 if (FUNC_13(FUNC_20(FUNC_3(VAR_20)), 1,
     VAR_27, VAR_28, VAR_29, ((void*)0), ((void*)0), VAR_3, VAR_23, VAR_27, 0,
     VAR_18, &VAR_20->isp_lock, &VAR_20->isp_osinfo.dmat)) {
  FUNC_2(VAR_20);
  FUNC_24(VAR_20, VAR_8, "could not create master dma tag");
  return (1);
 }





 VAR_22 = FUNC_4(FUNC_12(VAR_20));
 if (VAR_20->isp_type >= VAR_6)
  VAR_22 += (VAR_15 * VAR_17);
 if (FUNC_13(VAR_20->isp_osinfo.dmat, VAR_16, VAR_27,
     VAR_2, VAR_1, ((void*)0), ((void*)0),
     VAR_22, 1, VAR_22, 0, VAR_18, &VAR_20->isp_lock,
     &VAR_20->isp_osinfo.reqdmat)) {
  FUNC_24(VAR_20, VAR_8, "cannot create request DMA tag");
  goto bad;
 }
 if (FUNC_18(VAR_20->isp_osinfo.reqdmat, (void **)&VAR_21,
     VAR_0, &VAR_20->isp_osinfo.reqmap) != 0) {
  FUNC_24(VAR_20, VAR_8, "cannot allocate request DMA memory");
  FUNC_14(VAR_20->isp_osinfo.reqdmat);
  goto bad;
 }
 VAR_20->isp_rquest = VAR_21;
 VAR_30.error = 0;
 if (FUNC_17(VAR_20->isp_osinfo.reqdmat, VAR_20->isp_osinfo.reqmap,
     VAR_21, VAR_22, VAR_19, &VAR_30, 0) || VAR_30.error) {
  FUNC_24(VAR_20, VAR_8, "error loading request DMA map %d", VAR_30.error);
  goto bad;
 }
 FUNC_24(VAR_20, VAR_7, "request area @ 0x%jx/0x%jx",
     (uintmax_t)VAR_30.maddr, (uintmax_t)VAR_22);
 VAR_20->isp_rquest_dma = VAR_30.maddr;
 VAR_21 += FUNC_4(FUNC_12(VAR_20));
 VAR_30.maddr += FUNC_4(FUNC_12(VAR_20));
 if (VAR_20->isp_type >= VAR_6) {
  VAR_20->isp_osinfo.ecmd_dma = VAR_30.maddr;
  VAR_20->isp_osinfo.ecmd_free = (isp_ecmd_t *)VAR_21;
  VAR_20->isp_osinfo.ecmd_base = VAR_20->isp_osinfo.ecmd_free;
  for (VAR_31 = VAR_20->isp_osinfo.ecmd_free;
      VAR_31 < &VAR_20->isp_osinfo.ecmd_free[VAR_15]; VAR_31++) {
   if (VAR_31 == &VAR_20->isp_osinfo.ecmd_free[VAR_15 - 1])
    VAR_31->next = ((void*)0);
   else
    VAR_31->next = VAR_31 + 1;
  }
 }




 VAR_22 = FUNC_4(FUNC_11(VAR_20));
 if (FUNC_13(VAR_20->isp_osinfo.dmat, VAR_16, VAR_27,
     VAR_2, VAR_1, ((void*)0), ((void*)0),
     VAR_22, 1, VAR_22, 0, VAR_18, &VAR_20->isp_lock,
     &VAR_20->isp_osinfo.respdmat)) {
  FUNC_24(VAR_20, VAR_8, "cannot create response DMA tag");
  goto bad;
 }
 if (FUNC_18(VAR_20->isp_osinfo.respdmat, (void **)&VAR_21,
     VAR_0, &VAR_20->isp_osinfo.respmap) != 0) {
  FUNC_24(VAR_20, VAR_8, "cannot allocate response DMA memory");
  FUNC_14(VAR_20->isp_osinfo.respdmat);
  goto bad;
 }
 VAR_20->isp_result = VAR_21;
 VAR_30.error = 0;
 if (FUNC_17(VAR_20->isp_osinfo.respdmat, VAR_20->isp_osinfo.respmap,
     VAR_21, VAR_22, VAR_19, &VAR_30, 0) || VAR_30.error) {
  FUNC_24(VAR_20, VAR_8, "error loading response DMA map %d", VAR_30.error);
  goto bad;
 }
 FUNC_24(VAR_20, VAR_7, "response area @ 0x%jx/0x%jx",
     (uintmax_t)VAR_30.maddr, (uintmax_t)VAR_22);
 VAR_20->isp_result_dma = VAR_30.maddr;
 if (FUNC_9(VAR_20)) {
  if (FUNC_13(VAR_20->isp_osinfo.dmat, 64, VAR_27,
      VAR_1, VAR_1, ((void*)0), ((void*)0),
      2*VAR_16, 1, 2*VAR_16, 0, VAR_18,
      &VAR_20->isp_lock, &VAR_20->isp_osinfo.iocbdmat)) {
   goto bad;
  }
  if (FUNC_18(VAR_20->isp_osinfo.iocbdmat,
      (void **)&VAR_21, VAR_0, &VAR_20->isp_osinfo.iocbmap) != 0)
   goto bad;
  VAR_20->isp_iocb = VAR_21;
  VAR_30.error = 0;
  if (FUNC_17(VAR_20->isp_osinfo.iocbdmat, VAR_20->isp_osinfo.iocbmap,
      VAR_21, 2*VAR_16, VAR_19, &VAR_30, 0) || VAR_30.error)
   goto bad;
  VAR_20->isp_iocb_dma = VAR_30.maddr;

  if (FUNC_13(VAR_20->isp_osinfo.dmat, 64, VAR_27,
      VAR_1, VAR_1, ((void*)0), ((void*)0),
      VAR_5, 1, VAR_5, 0, VAR_18,
      &VAR_20->isp_lock, &VAR_20->isp_osinfo.scdmat))
   goto bad;
  for (VAR_26 = 0; VAR_26 < VAR_20->isp_nchan; VAR_26++) {
   struct isp_fc *VAR_32 = FUNC_1(VAR_20, VAR_26);
   if (FUNC_18(VAR_20->isp_osinfo.scdmat,
       (void **)&VAR_21, VAR_0, &VAR_32->scmap) != 0)
    goto bad;
   FUNC_0(VAR_20, VAR_26)->isp_scratch = VAR_21;
   VAR_30.error = 0;
   if (FUNC_17(VAR_20->isp_osinfo.scdmat, VAR_32->scmap,
       VAR_21, VAR_5, VAR_19, &VAR_30, 0) || VAR_30.error) {
    FUNC_19(VAR_20->isp_osinfo.scdmat,
        VAR_21, VAR_32->scmap);
    FUNC_0(VAR_20, VAR_26)->isp_scratch = ((void*)0);
    goto bad;
   }
   FUNC_0(VAR_20, VAR_26)->isp_scdma = VAR_30.maddr;
   if (!FUNC_7(VAR_20)) {
    for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++) {
     struct isp_nexus *VAR_33 = FUNC_25(sizeof (struct isp_nexus), VAR_11, VAR_12 | VAR_14);
     if (VAR_33 == ((void*)0)) {
      while (VAR_32->nexus_free_list) {
       VAR_33 = VAR_32->nexus_free_list;
       VAR_32->nexus_free_list = VAR_33->next;
       FUNC_22(VAR_33, VAR_11);
      }
      goto bad;
     }
     VAR_33->next = VAR_32->nexus_free_list;
     VAR_32->nexus_free_list = VAR_33;
    }
   }
  }
 }

 if (VAR_20->isp_maxcmds == 0) {
  FUNC_2(VAR_20);
  return (0);
 }

gotmaxcmds:
 VAR_22 = VAR_20->isp_maxcmds * sizeof (struct isp_pcmd);
 VAR_20->isp_osinfo.pcmd_pool = (struct isp_pcmd *)
     FUNC_25(VAR_22, VAR_11, VAR_13 | VAR_14);
 for (VAR_24 = 0; VAR_24 < VAR_20->isp_maxcmds; VAR_24++) {
  struct isp_pcmd *VAR_34 = &VAR_20->isp_osinfo.pcmd_pool[VAR_24];
  VAR_25 = FUNC_15(VAR_20->isp_osinfo.dmat, 0, &VAR_34->dmap);
  if (VAR_25) {
   FUNC_24(VAR_20, VAR_8, "error %d creating per-cmd DMA maps", VAR_25);
   while (--VAR_24 >= 0) {
    FUNC_16(VAR_20->isp_osinfo.dmat,
        VAR_20->isp_osinfo.pcmd_pool[VAR_24].dmap);
   }
   goto bad;
  }
  FUNC_21(&VAR_34->wdog, &VAR_20->isp_lock, 0);
  if (VAR_24 == VAR_20->isp_maxcmds-1)
   VAR_34->next = ((void*)0);
  else
   VAR_34->next = &VAR_20->isp_osinfo.pcmd_pool[VAR_24+1];
 }
 VAR_20->isp_osinfo.pcmd_free = &VAR_20->isp_osinfo.pcmd_pool[0];

 VAR_22 = sizeof (isp_hdl_t) * VAR_20->isp_maxcmds;
 VAR_20->isp_xflist = (isp_hdl_t *) FUNC_25(VAR_22, VAR_11, VAR_13 | VAR_14);
 for (VAR_22 = 0; VAR_22 < VAR_20->isp_maxcmds - 1; VAR_22++)
  VAR_20->isp_xflist[VAR_22].cmd = &VAR_20->isp_xflist[VAR_22+1];
 VAR_20->isp_xffree = VAR_20->isp_xflist;

 FUNC_2(VAR_20);
 return (0);

bad:
 FUNC_23(VAR_20);
 FUNC_2(VAR_20);
 return (1);
}
