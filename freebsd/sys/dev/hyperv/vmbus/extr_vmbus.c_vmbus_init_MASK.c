
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {void* vmbus_version; int vmbus_dev; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (struct vmbus_softc*,void*) ;
 void* VAR_1 ;
 void** VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct vmbus_softc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_2); ++VAR_4) {
  int VAR_5;

  VAR_5 = FUNC_4(VAR_3, VAR_2[VAR_4]);
  if (!VAR_5) {
   VAR_1 = VAR_2[VAR_4];
   VAR_3->vmbus_version = VAR_2[VAR_4];
   FUNC_2(VAR_3->vmbus_dev, "version %u.%u\n",
       FUNC_0(VAR_3->vmbus_version),
       FUNC_1(VAR_3->vmbus_version));
   return 0;
  }
 }
 return VAR_0;
}
