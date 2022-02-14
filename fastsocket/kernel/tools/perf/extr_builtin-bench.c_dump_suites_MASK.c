
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; TYPE_1__* suites; } ;
struct TYPE_3__ {char* name; char* summary; } ;


 int FUNC_0 (char*,...) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 int VAR_2;

 FUNC_0("# List of available suites for %s...\n\n",
        VAR_0[VAR_1].name);

 for (VAR_2 = 0; VAR_0[VAR_1].suites[VAR_2].name; VAR_2++)
  FUNC_0("%14s: %s\n",
         VAR_0[VAR_1].suites[VAR_2].name,
         VAR_0[VAR_1].suites[VAR_2].summary);

 FUNC_0("\n");
 return;
}
