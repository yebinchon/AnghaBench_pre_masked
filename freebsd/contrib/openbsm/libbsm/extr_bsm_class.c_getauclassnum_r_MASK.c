
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_class_ent {scalar_t__ ac_class; } ;
typedef scalar_t__ au_class_t ;


 struct au_class_ent* FUNC_0 (struct au_class_ent*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

struct au_class_ent *
FUNC_4(struct au_class_ent *VAR_1, au_class_t VAR_2)
{
 struct au_class_ent *VAR_3;




 FUNC_3();
 while ((VAR_3 = FUNC_0(VAR_1)) != ((void*)0)) {
  if (VAR_2 == VAR_3->ac_class)
   return (VAR_3);
 }



 return (((void*)0));
}
