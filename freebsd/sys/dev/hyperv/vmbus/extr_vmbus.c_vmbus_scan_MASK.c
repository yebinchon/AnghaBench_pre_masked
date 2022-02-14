
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int vmbus_dev; int vmbus_scandone; void* vmbus_subchtq; int vmbus_scandone_task; void* vmbus_devtq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,struct vmbus_softc*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,int *,int ,char*,int ) ;
 void* FUNC_5 (char*,int ,int ,void**) ;
 int FUNC_6 (void**,int,int ,char*) ;
 int VAR_5 ;
 int FUNC_7 (struct vmbus_softc*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct vmbus_softc *VAR_7)
{
 int VAR_8;




 FUNC_2(VAR_7->vmbus_dev);
 FUNC_1(VAR_7->vmbus_dev);





 VAR_7->vmbus_devtq = FUNC_5("vmbus dev", VAR_2,
     VAR_5, &VAR_7->vmbus_devtq);
 FUNC_6(&VAR_7->vmbus_devtq, 1, VAR_3, "vmbusdev");
 FUNC_0(&VAR_7->vmbus_scandone_task, 0, VAR_6, VAR_7);






 VAR_7->vmbus_subchtq = FUNC_5("vmbus subch", VAR_2,
     VAR_5, &VAR_7->vmbus_subchtq);
 FUNC_6(&VAR_7->vmbus_subchtq, 1, VAR_3, "vmbussch");




 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_7->vmbus_dev, "channel request failed: %d\n",
      VAR_8);
  return (VAR_8);
 }





 VAR_0;
 while (!VAR_7->vmbus_scandone)
  FUNC_4(&VAR_7->vmbus_scandone, &VAR_1, 0, "vmbusdev", 0);

 if (VAR_4) {
  FUNC_3(VAR_7->vmbus_dev, "device scan, probe and attach "
      "done\n");
 }
 return (0);
}
