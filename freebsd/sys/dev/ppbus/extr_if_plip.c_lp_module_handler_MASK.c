
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;



 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;

__attribute__((used)) static int
FUNC_3(module_t VAR_5, int VAR_6, void *VAR_7)
{

 switch (VAR_6) {
 case 128:
  FUNC_1(&VAR_3);
  if (VAR_4 != ((void*)0)) {
   FUNC_0(VAR_4, VAR_1);
   VAR_4 = ((void*)0);
  }
  if (VAR_2 != ((void*)0)) {
   FUNC_0(VAR_2, VAR_1);
   VAR_2 = ((void*)0);
  }
  FUNC_2(&VAR_3);
  break;
 case 130:
 case 129:
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
