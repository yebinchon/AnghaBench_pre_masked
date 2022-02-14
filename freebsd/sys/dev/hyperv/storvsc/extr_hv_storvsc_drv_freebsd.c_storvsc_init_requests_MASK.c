
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct storvsc_softc {int storvsc_req_dtag; int hs_free_list; TYPE_1__* hs_drv_props; } ;
struct hv_storvsc_request {int data_dmap; struct storvsc_softc* softc; } ;
typedef int device_t ;
struct TYPE_2__ {int drv_max_ios_per_target; } ;


 int VAR_0 ;
 struct hv_storvsc_request* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct hv_storvsc_request*,int ) ;
 int FUNC_3 (struct hv_storvsc_request*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 struct storvsc_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct hv_storvsc_request*,int ) ;
 int VAR_8 ;
 struct hv_storvsc_request* FUNC_11 (int,int ,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_9)
{
 struct storvsc_softc *VAR_10 = FUNC_8(VAR_9);
 struct hv_storvsc_request *VAR_11;
 int VAR_12, VAR_13;

 FUNC_1(&VAR_10->hs_free_list);

 VAR_12 = FUNC_4(
  FUNC_7(VAR_9),
  1,
  VAR_4,
  VAR_0,
  VAR_0,
  ((void*)0), ((void*)0),
  VAR_7,
  VAR_5,
  VAR_6,
  0,
  ((void*)0),
  ((void*)0),
  &VAR_10->storvsc_req_dtag);
 if (VAR_12) {
  FUNC_9(VAR_9, "failed to create storvsc dma tag\n");
  return (VAR_12);
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->hs_drv_props->drv_max_ios_per_target; ++VAR_13) {
  VAR_11 = FUNC_11(sizeof(struct hv_storvsc_request),
     VAR_1, VAR_2|VAR_3);
  VAR_11->softc = VAR_10;
  VAR_12 = FUNC_5(VAR_10->storvsc_req_dtag, 0,
    &VAR_11->data_dmap);
  if (VAR_12) {
   FUNC_9(VAR_9, "failed to allocate storvsc "
       "data dmamap\n");
   goto cleanup;
  }
  FUNC_2(&VAR_10->hs_free_list, VAR_11, VAR_8);
 }
 return (0);

cleanup:
 while ((VAR_11 = FUNC_0(&VAR_10->hs_free_list)) != ((void*)0)) {
  FUNC_3(VAR_11, VAR_8);
  FUNC_6(VAR_10->storvsc_req_dtag, VAR_11->data_dmap);
  FUNC_10(VAR_11, VAR_1);
 }
 return (VAR_12);
}
