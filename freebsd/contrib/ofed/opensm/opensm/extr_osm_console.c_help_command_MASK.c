
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* help_function ) (int *,int ) ;scalar_t__ name; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(FILE * VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, "Supported commands and syntax:\n");
 FUNC_0(VAR_1, "help [<command>]\n");

 for (VAR_3 = 1; VAR_0[VAR_3].name; VAR_3++)
  VAR_0[VAR_3].help_function(VAR_1, 0);
}
