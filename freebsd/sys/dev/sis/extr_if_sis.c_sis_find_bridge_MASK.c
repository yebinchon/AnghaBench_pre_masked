
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int * devclass_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,int ***,int*) ;
 scalar_t__ FUNC_2 (int *,int ***,int*) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static device_t
FUNC_6(device_t VAR_2)
{
 devclass_t VAR_3;
 device_t *VAR_4;
 int VAR_5 = 0;
 device_t *VAR_6;
 int VAR_7 = 0;
 device_t *VAR_8, *VAR_9;
 device_t VAR_10 = ((void*)0);
 int VAR_11, VAR_12;

 if ((VAR_3 = FUNC_0("pci")) == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_3, &VAR_4, &VAR_5);

 for (VAR_11 = 0, VAR_8 = VAR_4; VAR_11 < VAR_5; VAR_11++, VAR_8++) {
  if (FUNC_2(*VAR_8, &VAR_6, &VAR_7))
   continue;
  for (VAR_12 = 0, VAR_9 = VAR_6;
      VAR_12 < VAR_7; VAR_12++, VAR_9++) {
   if (FUNC_5(*VAR_9) == VAR_1 &&
       FUNC_4(*VAR_9) == 0x0008) {
    VAR_10 = *VAR_9;
    FUNC_3(VAR_6, VAR_0);
    goto done;
   }
  }
  FUNC_3(VAR_6, VAR_0);
 }

done:
 FUNC_3(VAR_4, VAR_0);
 return (VAR_10);
}
