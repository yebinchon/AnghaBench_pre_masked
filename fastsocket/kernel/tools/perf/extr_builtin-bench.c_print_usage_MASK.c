
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* summary; } ;


 char** VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;

 FUNC_0("Usage: \n");
 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
  FUNC_0("\t%s\n", VAR_0[VAR_2]);
 FUNC_0("\n");

 FUNC_0("# List of available subsystems...\n\n");

 for (VAR_2 = 0; VAR_1[VAR_2].name; VAR_2++)
  FUNC_0("%14s: %s\n",
         VAR_1[VAR_2].name, VAR_1[VAR_2].summary);
 FUNC_0("\n");
}
