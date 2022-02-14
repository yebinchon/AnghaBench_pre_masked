
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int devclass_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int **,int*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static device_t
FUNC_8(void)
{
 devclass_t VAR_3 = FUNC_1("pci");
 device_t VAR_4, VAR_5 = 0;
 device_t *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_3); VAR_7++) {
  VAR_4 = FUNC_2(VAR_3, VAR_7);
  if (!VAR_4)
   continue;
  if (FUNC_4(VAR_4, &VAR_6, &VAR_8) != 0)
   continue;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   VAR_5 = VAR_6[VAR_9];
   if (FUNC_6(VAR_5) == VAR_1
       && FUNC_7(VAR_5) == VAR_2)
    if (FUNC_0(VAR_5)) {
     FUNC_5(VAR_6, VAR_0);
     return VAR_5;
    }

  }
  FUNC_5(VAR_6, VAR_0);
 }

 return 0;
}
