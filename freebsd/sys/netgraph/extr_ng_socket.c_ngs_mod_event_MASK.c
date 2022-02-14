
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;


 int VAR_2 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(module_t VAR_5, int VAR_6, void *VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_6) {
 case 129:
  FUNC_1(&VAR_3, "ng_socketlist", ((void*)0), VAR_2);
  break;
 case 128:

  if (!FUNC_0(&VAR_4)) {
   VAR_8 = VAR_0;
   break;
  }



  VAR_8 = VAR_0;
  break;
 default:
  VAR_8 = VAR_1;
  break;
 }
 return (VAR_8);
}
