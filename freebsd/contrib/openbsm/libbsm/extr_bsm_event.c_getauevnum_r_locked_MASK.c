
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_event_ent {scalar_t__ ae_number; } ;
typedef scalar_t__ au_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,struct au_event_ent*) ;
 int * FUNC_1 (int ,int ,int *) ;
 int * FUNC_2 (int ,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 char* FUNC_4 (int ,char) ;

__attribute__((used)) static struct au_event_ent *
FUNC_5(struct au_event_ent *VAR_4, au_event_t VAR_5)
{
 char *VAR_6;


 FUNC_3();

 if ((VAR_2 == ((void*)0)) && ((VAR_2 = FUNC_2(VAR_0, "r")) == ((void*)0)))
  return (((void*)0));

 while (FUNC_1(VAR_3, VAR_1, VAR_2) != ((void*)0)) {

  if ((VAR_6 = FUNC_4(VAR_3, '\n')) != ((void*)0))
   *VAR_6 = '\0';

  if (FUNC_0(VAR_3, VAR_4) != ((void*)0)) {
   if (VAR_5 == VAR_4->ae_number)
    return (VAR_4);
  }
 }

 return (((void*)0));
}
