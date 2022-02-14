
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {int dummy; } ;
typedef int bfd ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int *,int ,struct list*) ;
 int * FUNC_6 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_7 (char *VAR_4, struct list *VAR_5, char *VAR_6)
{
  bfd *VAR_7;

  VAR_7 = FUNC_6 (VAR_4, (char *) ((void*)0));
  if (VAR_6)
    {
      VAR_1 = FUNC_3(VAR_6,"w");
      if (VAR_1 == 0)
 {
   VAR_1 = VAR_3;
   FUNC_4 (VAR_2,FUNC_0("Can't open file %s\n"), VAR_6);
   VAR_6 = 0;
 }
    }
  else
    VAR_1 = VAR_3;

  FUNC_5 (VAR_7, VAR_0, VAR_5);

  FUNC_1 (VAR_7);

  if (VAR_6)
   FUNC_2 (VAR_1);
}
