
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_dev; int aac_sim_tqh; } ;
struct aac_sim {int InitiatorBusId; int * aac_cam; int * sim_dev; struct aac_softc* aac_sc; int BusType; scalar_t__ BusNumber; int TargetsPerBus; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct aac_sim*,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct aac_sim*) ;
 int FUNC_6 (struct aac_sim*,int ) ;
 scalar_t__ FUNC_7 (int,int ,int) ;
 int FUNC_8 (char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(struct aac_softc *VAR_6)
{
 struct aac_sim *VAR_7;
 device_t VAR_8;

 VAR_7 =(struct aac_sim *)FUNC_7(sizeof(struct aac_sim),
  VAR_2, VAR_3 | VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_6->aac_dev,
      "No memory to add container bus\n");
  FUNC_8("Out of memory?!");
 }
 VAR_8 = FUNC_2(VAR_6->aac_dev, "aacraidp", -1);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_6->aac_dev,
      "device_add_child failed for container bus\n");
  FUNC_6(VAR_7, VAR_2);
  FUNC_8("Out of memory?!");
 }

 VAR_7->TargetsPerBus = VAR_0;
 VAR_7->BusNumber = 0;
 VAR_7->BusType = VAR_1;
 VAR_7->InitiatorBusId = -1;
 VAR_7->aac_sc = VAR_6;
 VAR_7->sim_dev = VAR_8;
 VAR_7->aac_cam = ((void*)0);

 FUNC_5(VAR_8, VAR_7);
 FUNC_4(VAR_8, "Container Bus");
 FUNC_0(&VAR_6->aac_sim_tqh, VAR_7, VAR_5);




 FUNC_1(VAR_6->aac_dev);
}
