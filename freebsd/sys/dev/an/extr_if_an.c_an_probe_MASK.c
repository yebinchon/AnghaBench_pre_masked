
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct an_softc {int an_mtx; int an_dev; scalar_t__ mpi350; int port_res; } ;
struct an_ltv_ssidlist_new {int an_len; TYPE_1__* an_entry; int an_type; } ;
struct an_ltv_gen {int dummy; } ;
typedef int ssid ;
typedef int device_t ;
struct TYPE_2__ {int an_ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct an_softc*) ;
 int VAR_3 ;
 int FUNC_3 (struct an_softc*) ;
 int FUNC_4 (struct an_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct an_softc*,int ,int ) ;
 scalar_t__ FUNC_7 (struct an_softc*,struct an_ltv_gen*) ;
 int FUNC_8 (struct an_softc*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int ) ;
 struct an_softc* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;

int
FUNC_16(device_t VAR_6)
{
 struct an_softc *VAR_7 = FUNC_11(VAR_6);
 struct an_ltv_ssidlist_new VAR_8;
 int VAR_9;

 FUNC_9((char *)&VAR_8, sizeof(VAR_8));

 VAR_9 = FUNC_5(VAR_6, 0, VAR_2);
 if (VAR_9 != 0)
  return (0);


 if (FUNC_14(VAR_7->port_res) == -1)
  return(0);






 VAR_8.an_len = sizeof(VAR_8);
 VAR_8.an_type = VAR_3;


 VAR_7->mpi350 = 0;
 FUNC_4(VAR_7, FUNC_1(VAR_7->mpi350), 0);
 FUNC_4(VAR_7, FUNC_0(VAR_7->mpi350), 0xFFFF);

 VAR_7->an_dev = VAR_6;
 FUNC_13(&VAR_7->an_mtx, FUNC_10(VAR_6), VAR_5,
     VAR_4);
 FUNC_2(VAR_7);
 FUNC_8(VAR_7);

 if (FUNC_6(VAR_7, VAR_0, 0)) {
  FUNC_3(VAR_7);
  goto fail;
 }

 if (FUNC_7(VAR_7, (struct an_ltv_gen *)&VAR_8)) {
  FUNC_3(VAR_7);
  goto fail;
 }


 if (FUNC_15(VAR_8.an_entry[0].an_ssid, VAR_1)) {
  FUNC_3(VAR_7);
  goto fail;
 }

 FUNC_3(VAR_7);
 return(VAR_2);
fail:
 FUNC_12(&VAR_7->an_mtx);
 return(0);
}
