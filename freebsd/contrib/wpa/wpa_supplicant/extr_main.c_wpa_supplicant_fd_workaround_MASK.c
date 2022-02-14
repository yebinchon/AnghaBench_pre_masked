
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_1)
{

 static int VAR_2[3] = { -1, -1, -1 };
 int VAR_3;





 if (VAR_1) {
  for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
   VAR_2[VAR_3] = FUNC_1("/dev/null", VAR_0);
   if (VAR_2[VAR_3] > 2) {
    FUNC_0(VAR_2[VAR_3]);
    VAR_2[VAR_3] = -1;
    break;
   }
  }
 } else {
  for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
   if (VAR_2[VAR_3] >= 0) {
    FUNC_0(VAR_2[VAR_3]);
    VAR_2[VAR_3] = -1;
   }
  }
 }

}
