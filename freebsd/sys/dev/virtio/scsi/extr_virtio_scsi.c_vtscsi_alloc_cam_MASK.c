
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_nrequests; int * vtscsi_sim; int vtscsi_dev; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vtscsi_softc*) ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,char*,struct vtscsi_softc*,int ,int ,int,int,struct cam_devq*) ;
 struct cam_devq* FUNC_2 (int) ;
 int FUNC_3 (struct cam_devq*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct vtscsi_softc *VAR_4)
{
 device_t VAR_5;
 struct cam_devq *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->vtscsi_dev;
 VAR_7 = VAR_4->vtscsi_nrequests - VAR_1;

 VAR_6 = FUNC_2(VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_5(VAR_5, "cannot allocate SIM queue\n");
  return (VAR_0);
 }

 VAR_4->vtscsi_sim = FUNC_1(VAR_2, VAR_3,
     "vtscsi", VAR_4, FUNC_4(VAR_5), FUNC_0(VAR_4), 1,
     VAR_7, VAR_6);
 if (VAR_4->vtscsi_sim == ((void*)0)) {
  FUNC_3(VAR_6);
  FUNC_5(VAR_5, "cannot allocate SIM\n");
  return (VAR_0);
 }

 return (0);
}
