
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int sim_lock; int * sim; int path; int bus_dev; } ;
struct cam_devq {int dummy; } ;
typedef int TW_INT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int ,int ,char*,struct twa_softc*,int ,int ,int ,int,struct cam_devq*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct cam_devq* FUNC_3 (int ) ;
 int FUNC_4 (struct cam_devq*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,struct twa_softc*,char*) ;
 int FUNC_9 (struct twa_softc*,char*,int ,int ,int,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (int *,int *,int ,int ,int ) ;

TW_INT32
FUNC_13(struct twa_softc *VAR_12)
{
 struct cam_devq *VAR_13;

 FUNC_8(3, VAR_12, "entered");




 if ((VAR_13 = FUNC_3(VAR_9)) == ((void*)0)) {
  FUNC_9(VAR_12, "error = %d",
   VAR_8,
   VAR_7,
   0x2100,
   "Failed to create SIM device queue",
   VAR_4);
  return(VAR_4);
 }







 FUNC_8(3, VAR_12, "Calling cam_sim_alloc");
 VAR_12->sim = FUNC_0(VAR_10, VAR_11, "twa", VAR_12,
   FUNC_5(VAR_12->bus_dev), VAR_12->sim_lock,
   VAR_9, 1, VAR_13);
 if (VAR_12->sim == ((void*)0)) {
  FUNC_4(VAR_13);
  FUNC_9(VAR_12, "error = %d",
   VAR_8,
   VAR_7,
   0x2101,
   "Failed to create a SIM entry",
   VAR_4);
  return(VAR_4);
 }




 FUNC_8(3, VAR_12, "Calling xpt_bus_register");
 FUNC_6(VAR_12->sim_lock);
 if (FUNC_11(VAR_12->sim, VAR_12->bus_dev, 0) != VAR_2) {
  FUNC_1(VAR_12->sim, VAR_6);
  VAR_12->sim = ((void*)0);
  FUNC_9(VAR_12, "error = %d",
   VAR_8,
   VAR_7,
   0x2102,
   "Failed to register the bus",
   VAR_5);
  FUNC_7(VAR_12->sim_lock);
  return(VAR_5);
 }

 FUNC_8(3, VAR_12, "Calling xpt_create_path");
 if (FUNC_12(&VAR_12->path, ((void*)0),
    FUNC_2(VAR_12->sim),
    VAR_3,
    VAR_0) != VAR_1) {
  FUNC_10(FUNC_2 (VAR_12->sim));

  FUNC_1(VAR_12->sim, VAR_6);
  FUNC_9(VAR_12, "error = %d",
   VAR_8,
   VAR_7,
   0x2103,
   "Failed to create path",
   VAR_5);
  FUNC_7(VAR_12->sim_lock);
  return(VAR_5);
 }
 FUNC_7(VAR_12->sim_lock);

 FUNC_8(3, VAR_12, "exiting");
 return(0);
}
