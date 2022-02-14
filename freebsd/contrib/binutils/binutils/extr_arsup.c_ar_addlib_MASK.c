
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {int dummy; } ;
typedef int bfd ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *,int ,struct list*) ;
 int FUNC_3 () ;
 int * VAR_1 ;
 int * FUNC_4 (char*,char*) ;
 char* VAR_2 ;
 int VAR_3 ;

void
FUNC_5 (char *VAR_4, struct list *VAR_5)
{
  if (VAR_1 == ((void*)0))
    {
      FUNC_1 (VAR_3, FUNC_0("%s: no output archive specified yet\n"), VAR_2);
      FUNC_3 ();
    }
  else
    {
      bfd *VAR_6;

      VAR_6 = FUNC_4 (VAR_4, (char *) ((void*)0));
      if (VAR_6 != ((void*)0))
 FUNC_2 (VAR_6, VAR_0, VAR_5);


    }
}
