
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_type {int (* mod_event ) (int ,int,void*) ;int refs; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ng_type* const,int ) ;


 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct ng_type* const) ;
 int FUNC_4 (int ,int,void*) ;
 int FUNC_5 (int ,int,void*) ;
 int FUNC_6 (int ,int,void*) ;
 int VAR_2 ;

int
FUNC_7(module_t VAR_3, int VAR_4, void *VAR_5)
{
 struct ng_type *const VAR_6 = VAR_5;
 int VAR_7 = 0;

 switch (VAR_4) {
 case 129:


  if ((VAR_7 = FUNC_3(VAR_6)) != 0)
   break;


  if (VAR_6->mod_event != ((void*)0))
   if ((VAR_7 = (*VAR_6->mod_event)(VAR_3, VAR_4, VAR_5))) {
    FUNC_1();
    VAR_6->refs--;
    FUNC_0(VAR_6, VAR_2);
    FUNC_2();
   }
  break;

 case 128:
  if (VAR_6->refs > 1) {
   VAR_7 = VAR_0;
  } else {
   if (VAR_6->refs == 0)
    break;
   if (VAR_6->mod_event != ((void*)0)) {
    VAR_7 = (*VAR_6->mod_event)(VAR_3, VAR_4, VAR_5);
    if (VAR_7 != 0)
     break;
   }
   FUNC_1();
   FUNC_0(VAR_6, VAR_2);
   FUNC_2();
  }
  break;

 default:
  if (VAR_6->mod_event != ((void*)0))
   VAR_7 = (*VAR_6->mod_event)(VAR_3, VAR_4, VAR_5);
  else
   VAR_7 = VAR_1;
  break;
 }
 return (VAR_7);
}
