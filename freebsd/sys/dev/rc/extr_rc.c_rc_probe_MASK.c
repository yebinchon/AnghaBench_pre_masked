
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int* VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 u_int VAR_3;
 int VAR_4, VAR_5;




 if (FUNC_2(VAR_2) != 0)
  return (VAR_0);




 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == -1)
  return (VAR_0);
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_1); VAR_4++)
  if (VAR_1[VAR_4] == VAR_3) {
   VAR_5 = 1;
   break;
  }
 if (!VAR_5)
  return (VAR_0);




 if (FUNC_1(VAR_2) == -1)
  return (VAR_0);

 FUNC_0(VAR_2, "SDL Riscom/8");
 return (0);
}
