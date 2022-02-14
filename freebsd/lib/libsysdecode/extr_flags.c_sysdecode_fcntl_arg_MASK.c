
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;







 int VAR_0 ;
 int FUNC_0 (int *,char*,void*) ;
 int FUNC_1 (int *,uintptr_t,int) ;
 int FUNC_2 (int *,int ,uintptr_t) ;
 int FUNC_3 (int *,uintptr_t,int*) ;

void
FUNC_4(FILE *VAR_1, int VAR_2, uintptr_t VAR_3, int VAR_4)
{
 int VAR_5;

 switch (VAR_2) {
 case 131:
  if (!FUNC_2(VAR_1, VAR_0, VAR_3))
      FUNC_1(VAR_1, VAR_3, VAR_4);
  break;
 case 130:
  if (!FUNC_3(VAR_1, VAR_3, &VAR_5))
   FUNC_0(VAR_1, "%#x", VAR_5);
  else if (VAR_5 != 0)
   FUNC_0(VAR_1, "|%#x", VAR_5);
  break;
 case 132:
 case 129:
 case 128:
  FUNC_0(VAR_1, "%p", (void *)VAR_3);
  break;
 default:
  FUNC_1(VAR_1, VAR_3, VAR_4);
  break;
 }
}
