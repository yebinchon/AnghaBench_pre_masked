
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 (char*) ;
 void* VAR_1 ;
 void* FUNC_1 (char**) ;
 void* VAR_2 ;
 int FUNC_2 (char*,void*,void*,void*,void*) ;
 void* VAR_3 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_4, int VAR_5)
{
  if (VAR_4)
    {
      VAR_1 = FUNC_1 (&VAR_4);
      VAR_3 = FUNC_1 (&VAR_4);
      VAR_2 = FUNC_1 (&VAR_4);
      VAR_0 = FUNC_1 (&VAR_4);
      if (VAR_5)
 {
   FUNC_2 ("Set info to %s %s %s %s\n", VAR_1, VAR_3, VAR_2, VAR_0);
 }
    }
  else
    {
      FUNC_0 ("Syntax is ftplogin <machine> <user> <passwd> <directory>");
    }
}
