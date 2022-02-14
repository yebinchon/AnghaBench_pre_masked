
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct mwl_hal_vap {int macid; void* bss_type; void* vap_type; } ;
struct mwl_hal {int mh_iot; int mh_ioh; } ;
struct TYPE_6__ {int mh_devid; } ;
struct mwl_hal_priv {int mh_SDRAMSIZE_Addr; int mh_mtx; int mh_dmat; int mh_dmamap; int mh_cmdbuf; struct mwl_hal public; int mh_cmdaddr; int mh_mtxname; TYPE_3__ mh_revs; struct mwl_hal_vap* mh_vaps; TYPE_2__* mh_streams; int mh_dev; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_dma_tag_t ;
struct TYPE_4__ {size_t txq; } ;
struct TYPE_5__ {int stream; TYPE_1__ public; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t* VAR_21 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct mwl_hal_priv*,int ) ;
 void* FUNC_8 (int ) ;
 struct mwl_hal_priv* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int *,int ) ;
 int VAR_22 ;
 int* VAR_23 ;
 int FUNC_12 (int ,int,char*,char*) ;

struct mwl_hal *
FUNC_13(device_t VAR_24, uint16_t VAR_25,
    bus_space_handle_t VAR_26, bus_space_tag_t VAR_27, bus_dma_tag_t VAR_28)
{
 struct mwl_hal_priv *VAR_29;
 struct mwl_hal_vap *VAR_30;
 int VAR_31, VAR_32;

 VAR_29 = FUNC_9(sizeof(struct mwl_hal_priv), VAR_13, VAR_14 | VAR_15);
 if (VAR_29 == ((void*)0))
  return ((void*)0);
 VAR_29->mh_dev = VAR_24;
 VAR_29->public.mh_ioh = VAR_26;
 VAR_29->public.mh_iot = VAR_27;
 for (VAR_32 = 0; VAR_32 < VAR_7; VAR_32++) {
  VAR_29->mh_streams[VAR_32].public.txq = VAR_21[VAR_32];
  VAR_29->mh_streams[VAR_32].stream = VAR_32;

  if (VAR_29->mh_streams[VAR_32].public.txq < VAR_6)
   VAR_23[VAR_29->mh_streams[VAR_32].public.txq] = VAR_32;
  else
   FUNC_6(VAR_24, "unexpected BA tx qid %d for "
       "stream %d\n", VAR_29->mh_streams[VAR_32].public.txq, VAR_32);
 }


 VAR_32 = 0;
 VAR_30 = &VAR_29->mh_vaps[VAR_32];
 VAR_30->vap_type = VAR_9;
 VAR_30->bss_type = FUNC_8(VAR_17);
 VAR_30->macid = 0;
 for (VAR_32++; VAR_32 < VAR_11; VAR_32++) {
  VAR_30 = &VAR_29->mh_vaps[VAR_32];
  VAR_30->vap_type = VAR_9;
  VAR_30->bss_type = FUNC_8(VAR_19);
  VAR_30->macid = VAR_32;
 }
 VAR_30 = &VAR_29->mh_vaps[VAR_32];
 VAR_30->vap_type = VAR_10;
 VAR_30->bss_type = FUNC_8(VAR_18);
 VAR_30->macid = VAR_32;
 for (VAR_32++; VAR_32 < VAR_12; VAR_32++) {
  VAR_30 = &VAR_29->mh_vaps[VAR_32];
  VAR_30->vap_type = VAR_10;
  VAR_30->bss_type = FUNC_8(VAR_20);
  VAR_30->macid = VAR_32;
 }
 VAR_29->mh_revs.mh_devid = VAR_25;
 FUNC_12(VAR_29->mh_mtxname, sizeof(VAR_29->mh_mtxname),
     "%s_hal", FUNC_5(VAR_24));
 FUNC_11(&VAR_29->mh_mtx, VAR_29->mh_mtxname, ((void*)0), VAR_5);






 VAR_31 = FUNC_0(VAR_28,
         VAR_16, 0,
         VAR_4,
         VAR_3,
         ((void*)0), ((void*)0),
         VAR_8,
         1,
         VAR_8,
         VAR_0,
         ((void*)0),
         ((void*)0),
         &VAR_29->mh_dmat);
 if (VAR_31 != 0) {
  FUNC_6(VAR_24, "unable to allocate memory for cmd tag, "
   "error %u\n", VAR_31);
  goto fail0;
 }


 VAR_31 = FUNC_3(VAR_29->mh_dmat, (void**) &VAR_29->mh_cmdbuf,
     VAR_2 | VAR_1,
     &VAR_29->mh_dmamap);
 if (VAR_31 != 0) {
  FUNC_6(VAR_24, "unable to allocate memory for cmd buffer, "
   "error %u\n", VAR_31);
  goto fail1;
 }

 VAR_31 = FUNC_2(VAR_29->mh_dmat, VAR_29->mh_dmamap,
    VAR_29->mh_cmdbuf, VAR_8,
    VAR_22, &VAR_29->mh_cmdaddr,
    VAR_2);
 if (VAR_31 != 0) {
  FUNC_6(VAR_24, "unable to load cmd buffer, error %u\n",
   VAR_31);
  goto fail2;
 }







 switch (VAR_25) {
 case 0x2a02:
 case 0x2a03:
 case 0x2a08:
 case 0x2a0b:
 case 0x2a24:
  VAR_29->mh_SDRAMSIZE_Addr = 0x40fe70b7;
  break;
 case 0x2a04:
  VAR_29->mh_SDRAMSIZE_Addr = 0x40fc70b7;
  break;
 default:
  break;
 }
 return &VAR_29->public;
fail2:
 FUNC_4(VAR_29->mh_dmat, VAR_29->mh_cmdbuf, VAR_29->mh_dmamap);
fail1:
 FUNC_1(VAR_29->mh_dmat);
fail0:
 FUNC_10(&VAR_29->mh_mtx);
 FUNC_7(VAR_29, VAR_13);
 return ((void*)0);
}
