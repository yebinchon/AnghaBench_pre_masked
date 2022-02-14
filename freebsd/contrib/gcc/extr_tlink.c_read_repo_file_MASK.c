
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* dir; int * args; void* main; int key; } ;
typedef TYPE_1__ file ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *,char*,char*) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9 (file *VAR_4)
{
  char VAR_5;
  FILE *VAR_6 = FUNC_2 (VAR_4->key, "r");

  if (VAR_3 >= 2)
    FUNC_3 (VAR_0, "%s", FUNC_0("collect: reading %s\n"), VAR_4->key);

  while (FUNC_5 (VAR_6, "%c ", &VAR_5) == 1)
    {
      switch (VAR_5)
 {
 case 'A':
   VAR_4->args = FUNC_8 (VAR_6);
   break;
 case 'D':
   VAR_4->dir = FUNC_8 (VAR_6);
   break;
 case 'M':
   VAR_4->main = FUNC_8 (VAR_6);
   break;
 case 'P':
   FUNC_4 (VAR_6, VAR_4, 2);
   break;
 case 'C':
   FUNC_4 (VAR_6, VAR_4, 1);
   break;
 case 'O':
   FUNC_4 (VAR_6, VAR_4, 0);
   break;
 }
      FUNC_7 (&VAR_2, VAR_1);
    }
  FUNC_1 (VAR_6);
  if (VAR_4->args == ((void*)0))
    VAR_4->args = FUNC_6 ("COLLECT_GCC_OPTIONS");
  if (VAR_4->dir == ((void*)0))
    VAR_4->dir = ".";
}
