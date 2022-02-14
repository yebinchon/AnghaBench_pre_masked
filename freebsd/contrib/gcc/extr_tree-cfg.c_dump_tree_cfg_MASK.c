
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* (* decl_printable_name ) (int ,int) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char,int *) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_5 (int ,int) ;

void
FUNC_6 (FILE *VAR_8, int VAR_9)
{
  if (VAR_9 & VAR_1)
    {
      const char *VAR_10
 = VAR_4.decl_printable_name (VAR_3, 2);

      FUNC_4 ('\n', VAR_8);
      FUNC_3 (VAR_8, ";; Function %s\n\n", VAR_10);
      FUNC_3 (VAR_8, ";; \n%d basic blocks, %d edges, last basic block %d.\n\n",
        VAR_6, VAR_7, VAR_5);

      FUNC_0 (VAR_8);
      FUNC_3 (VAR_8, "\n");
    }

  if (VAR_9 & VAR_2)
    FUNC_1 (VAR_8);

  FUNC_2 (VAR_3, VAR_8, VAR_9 | VAR_0);
}
