
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct malo_hal {scalar_t__ mh_dmat; int mh_dmamap; int * mh_cmdbuf; int mh_cmdaddr; int mh_mtxname; int mh_mtx; int mh_iot; int mh_ioh; int mh_dev; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int *,int ,int ,int *,int) ;
 int FUNC_3 (scalar_t__,void**,int,int *) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct malo_hal*,int ) ;
 struct malo_hal* FUNC_8 (int,int ,int) ;
 int VAR_11 ;
 int FUNC_9 (int *,int ,int *,int ) ;
 int FUNC_10 (int ,int,char*,char*) ;

struct malo_hal *
FUNC_11(device_t VAR_12, uint16_t VAR_13,
    bus_space_handle_t VAR_14, bus_space_tag_t VAR_15, bus_dma_tag_t VAR_16)
{
 int VAR_17;
 struct malo_hal *VAR_18;

 VAR_18 = FUNC_8(sizeof(struct malo_hal), VAR_7, VAR_8 | VAR_9);
 if (VAR_18 == ((void*)0))
  return ((void*)0);

 VAR_18->mh_dev = VAR_12;
 VAR_18->mh_ioh = VAR_14;
 VAR_18->mh_iot = VAR_15;

 FUNC_10(VAR_18->mh_mtxname, sizeof(VAR_18->mh_mtxname),
     "%s_hal", FUNC_5(VAR_12));
 FUNC_9(&VAR_18->mh_mtx, VAR_18->mh_mtxname, ((void*)0), VAR_6);






 VAR_17 = FUNC_0(VAR_16,
         VAR_10, 0,
         VAR_4,
         VAR_3,
         ((void*)0), ((void*)0),
         VAR_5,
         1,
         VAR_5,
         VAR_0,
         ((void*)0),
         ((void*)0),
         &VAR_18->mh_dmat);
 if (VAR_17 != 0) {
  FUNC_6(VAR_12, "unable to allocate memory for cmd tag, "
   "error %u\n", VAR_17);
  goto fail;
 }


 VAR_17 = FUNC_3(VAR_18->mh_dmat, (void**) &VAR_18->mh_cmdbuf,
     VAR_2 | VAR_1,
     &VAR_18->mh_dmamap);
 if (VAR_17 != 0) {
  FUNC_6(VAR_12, "unable to allocate memory for cmd buffer, "
   "error %u\n", VAR_17);
  goto fail;
 }

 VAR_17 = FUNC_2(VAR_18->mh_dmat, VAR_18->mh_dmamap,
    VAR_18->mh_cmdbuf, VAR_5,
    VAR_11, &VAR_18->mh_cmdaddr,
    VAR_2);
 if (VAR_17 != 0) {
  FUNC_6(VAR_12, "unable to load cmd buffer, error %u\n",
   VAR_17);
  goto fail;
 }

 return (VAR_18);

fail:
 if (VAR_18->mh_cmdbuf != ((void*)0))
  FUNC_4(VAR_18->mh_dmat, VAR_18->mh_cmdbuf,
      VAR_18->mh_dmamap);
 if (VAR_18->mh_dmat)
  FUNC_1(VAR_18->mh_dmat);
 FUNC_7(VAR_18, VAR_7);

 return (((void*)0));
}
