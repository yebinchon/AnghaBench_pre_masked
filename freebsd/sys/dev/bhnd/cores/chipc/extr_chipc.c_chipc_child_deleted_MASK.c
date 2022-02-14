
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_devinfo {int irq_mapped; int irq; int resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct chipc_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct chipc_devinfo*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, device_t VAR_2)
{
 struct chipc_devinfo *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 != ((void*)0)) {

  FUNC_4(&VAR_3->resources);


  if (VAR_3->irq_mapped) {
   FUNC_0(VAR_1, VAR_3->irq);
   VAR_3->irq_mapped = 0;
  }

  FUNC_3(VAR_3, VAR_0);
 }

 FUNC_2(VAR_2, ((void*)0));
}
