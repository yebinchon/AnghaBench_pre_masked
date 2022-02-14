
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int * device_t ;
typedef int * devclass_t ;


 void* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (int *) ;
 int * VAR_5 ;
 int FUNC_7 (int *,int ) ;
 int VAR_6 ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_9 (int ,int,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static void
FUNC_15(void)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;
 vm_paddr_t VAR_19;
 devclass_t VAR_20;
 device_t VAR_21;

 if (!VAR_7)
  return;

 if (FUNC_13())
  VAR_12 = &VAR_9;
 else if (FUNC_12())
  VAR_12 = &VAR_8;
 else
  VAR_12 = ((void*)0);

 VAR_15 = FUNC_4();
 if (VAR_15)
  return;

 VAR_6 = 1;




 VAR_19 = FUNC_14();
 VAR_5 = FUNC_2(VAR_19);
 if (VAR_5 == ((void*)0)) {
  FUNC_11("iommu_init: unable to create a host domain");
  FUNC_1();
  VAR_12 = ((void*)0);
  VAR_6 = 0;
  return;
 }





 FUNC_8(VAR_5, 0, 0, VAR_19);

 VAR_3 = FUNC_0(VAR_13, VAR_10, ((void*)0), 0);
 VAR_4 = FUNC_0(VAR_14, VAR_11,
     ((void*)0), 0);
 VAR_20 = FUNC_5("ppt");
 for (VAR_16 = 0; VAR_16 <= VAR_0; VAR_16++) {
  for (VAR_17 = 0; VAR_17 <= VAR_2; VAR_17++) {
   for (VAR_18 = 0; VAR_18 <= VAR_1; VAR_18++) {
    VAR_21 = FUNC_9(0, VAR_16, VAR_17, VAR_18);
    if (VAR_21 == ((void*)0))
     continue;


    if (VAR_20 != ((void*)0) &&
        FUNC_6(VAR_21) == VAR_20)
     continue;





    FUNC_7(VAR_5,
        FUNC_10(VAR_21));
   }
  }
 }
 FUNC_3();

}
