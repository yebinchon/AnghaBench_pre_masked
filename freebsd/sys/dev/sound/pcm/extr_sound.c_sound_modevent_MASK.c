
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,void*) ;
 int * FUNC_2 (int,int ,int *) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_3(module_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6;



 VAR_6 = 0;

 switch(VAR_4) {
  case 130:
   VAR_2 = FUNC_2(1, VAR_1, ((void*)0));
   break;
  case 128:
   if (VAR_2 != ((void*)0)) {
    FUNC_0(VAR_2);
    VAR_2 = ((void*)0);
   }
   break;
  case 129:
   break;
  default:
   VAR_6 = VAR_0;
 }

 return VAR_6;

}
