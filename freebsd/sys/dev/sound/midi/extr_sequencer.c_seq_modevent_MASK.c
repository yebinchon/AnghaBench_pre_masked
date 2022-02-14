
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

int
FUNC_4(module_t VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = 0;

 switch (VAR_3) {
 case 129:
  FUNC_1(&VAR_1, "seqmod", ((void*)0), 0);
  VAR_5 = FUNC_2();
  break;

 case 128:
  while (VAR_0) {
   VAR_6 = FUNC_3(VAR_0 - 1);
   if (VAR_6) {
    VAR_5 = VAR_6;
    break;
   }
  }
  if (VAR_0 == 0) {
   VAR_5 = 0;
   FUNC_0(&VAR_1);
  }
  break;

 default:
  break;
 }

 return VAR_5;
}
