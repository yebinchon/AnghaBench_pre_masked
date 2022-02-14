
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_class_ent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,struct au_class_ent*) ;
 int * FUNC_1 (char*,int ,int *) ;
 int * FUNC_2 (int ,char*) ;
 int * VAR_2 ;
 char* VAR_3 ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static struct au_class_ent *
FUNC_4(struct au_class_ent *VAR_4)
{
 char *VAR_5, *VAR_6;

 if ((VAR_2 == ((void*)0)) && ((VAR_2 = FUNC_2(VAR_0, "r")) == ((void*)0)))
  return (((void*)0));




 while (1) {
  if (FUNC_1(VAR_3, VAR_1, VAR_2) == ((void*)0))
   return (((void*)0));


  if (VAR_3[0] == '#')
   continue;


  if ((VAR_6 = FUNC_3(VAR_3, '\n')) != ((void*)0))
   *VAR_6 = '\0';


  VAR_5 = VAR_3;
  if (FUNC_0(VAR_5, VAR_4) == ((void*)0))
   return (((void*)0));
  break;
 }

 return (VAR_4);
}
