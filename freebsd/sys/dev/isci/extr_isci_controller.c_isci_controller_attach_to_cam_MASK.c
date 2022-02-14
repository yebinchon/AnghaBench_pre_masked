
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_softc {int device; } ;
struct cam_devq {int dummy; } ;
struct ISCI_CONTROLLER {int lock; int * sim; int path; int index; int sim_queue_depth; struct isci_softc* isci; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,char*,struct ISCI_CONTROLLER*,int,int *,int ,int ,struct cam_devq*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct cam_devq* FUNC_3 (int ) ;
 int FUNC_4 (struct cam_devq*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int *,int *,int ,int ,int ) ;

int FUNC_12(struct ISCI_CONTROLLER *VAR_7)
{
 struct isci_softc *VAR_8 = VAR_7->isci;
 device_t VAR_9 = FUNC_5(VAR_8->device);
 int VAR_10 = FUNC_6(VAR_8->device);
 struct cam_devq *VAR_11 = FUNC_3(VAR_7->sim_queue_depth);

 if(VAR_11 == ((void*)0)) {
  FUNC_7(0, "ISCI", "isci_devq is NULL \n");
  return (-1);
 }

 VAR_7->sim = FUNC_0(VAR_5, VAR_6, "isci",
     VAR_7, VAR_10, &VAR_7->lock, VAR_7->sim_queue_depth,
     VAR_7->sim_queue_depth, VAR_11);

 if(VAR_7->sim == ((void*)0)) {
  FUNC_7(0, "ISCI", "cam_sim_alloc... fails\n");
  FUNC_4(VAR_11);
  return (-1);
 }

 if(FUNC_10(VAR_7->sim, VAR_9, VAR_7->index)
     != VAR_2) {
  FUNC_7(0, "ISCI", "xpt_bus_register...fails \n");
  FUNC_1(VAR_7->sim, VAR_4);
  FUNC_8(&VAR_7->lock);
  return (-1);
 }

 if(FUNC_11(&VAR_7->path, ((void*)0),
     FUNC_2(VAR_7->sim), VAR_3,
     VAR_0) != VAR_1) {
  FUNC_7(0, "ISCI", "xpt_create_path....fails\n");
  FUNC_9(FUNC_2(VAR_7->sim));
  FUNC_1(VAR_7->sim, VAR_4);
  FUNC_8(&VAR_7->lock);
  return (-1);
 }

 return (0);
}
