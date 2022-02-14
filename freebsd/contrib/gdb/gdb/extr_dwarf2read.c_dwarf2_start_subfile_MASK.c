
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfile {int name; struct subfile* next; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,char*,int *) ;
 struct subfile* VAR_0 ;
 int FUNC_3 (char*,char*) ;
 struct subfile* VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_2, char *VAR_3)
{



  if (!FUNC_1 (VAR_2) && VAR_3 != ((void*)0))
    {
      struct subfile *VAR_4;
      char *VAR_5 = FUNC_2 (VAR_3, "/", VAR_2, ((void*)0));

      for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
 {
   if (FUNC_0 (VAR_4->name, VAR_5) == 0)
     {
       VAR_0 = VAR_4;
       FUNC_4 (VAR_5);
       return;
     }
 }
      FUNC_4 (VAR_5);
    }
  FUNC_3 (VAR_2, VAR_3);
}
