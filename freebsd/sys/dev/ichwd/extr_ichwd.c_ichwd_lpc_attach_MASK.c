
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ichwd_softc {int tco_version; int smi_rid; int tco_rid; int * gcs_res; scalar_t__ gcs_rid; int * tco_res; int * smi_res; int ich_version; int * ich; } ;
struct ichwd_device {int tco_version; int ich_version; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_0 (int *,int ,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int * FUNC_1 (int *,int ,scalar_t__*,int) ;
 int FUNC_2 (int *) ;
 struct ichwd_softc* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ,struct ichwd_device**) ;
 unsigned int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_11)
{
 struct ichwd_softc *VAR_12;
 struct ichwd_device *VAR_13;
 device_t VAR_14;
 unsigned int VAR_15 = 0;

 VAR_12 = FUNC_3(VAR_11);

 VAR_14 = FUNC_5(FUNC_2(VAR_11), &VAR_13);
 if (VAR_14 == ((void*)0))
  return (VAR_0);

 VAR_12->ich = VAR_14;
 VAR_12->ich_version = VAR_13->ich_version;
 VAR_12->tco_version = VAR_13->tco_version;


 VAR_15 = FUNC_6(VAR_14, VAR_1, 2) & VAR_2;
 if (VAR_15 == 0) {
  FUNC_4(VAR_11, "ICH PMBASE register is empty\n");
  return (VAR_0);
 }


 VAR_12->smi_rid = 0;
 VAR_12->smi_res = FUNC_0(VAR_11, VAR_7, &VAR_12->smi_rid,
     VAR_15 + VAR_5, VAR_15 + VAR_5 + VAR_6 - 1, VAR_6,
     VAR_3 | VAR_4);
 if (VAR_12->smi_res == ((void*)0)) {
  FUNC_4(VAR_11, "unable to reserve SMI registers\n");
  return (VAR_0);
 }

 VAR_12->tco_rid = 1;
 VAR_12->tco_res = FUNC_0(VAR_11, VAR_7, &VAR_12->tco_rid,
     VAR_15 + VAR_9, VAR_15 + VAR_9 + VAR_10 - 1, VAR_10,
     VAR_3 | VAR_4);
 if (VAR_12->tco_res == ((void*)0)) {
  FUNC_4(VAR_11, "unable to reserve TCO registers\n");
  return (VAR_0);
 }

 VAR_12->gcs_rid = 0;
 if (VAR_12->tco_version >= 2) {
  VAR_12->gcs_res = FUNC_1(VAR_14, VAR_8,
      &VAR_12->gcs_rid, VAR_3|VAR_4);
  if (VAR_12->gcs_res == ((void*)0)) {
   FUNC_4(VAR_11, "unable to reserve GCS registers\n");
   return (VAR_0);
  }
 }

 return (0);
}
