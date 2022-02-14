
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ help; int items; } ;
typedef TYPE_1__ rc_menu ;
typedef int FILE ;


 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int *,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, const rc_menu *VAR_1, int VAR_2)
{
  if (VAR_1->help != 0)
    FUNC_0 (VAR_0, "// Help ID: %u\n", (unsigned int) VAR_1->help);
  FUNC_1 (VAR_0, VAR_1->items, VAR_2, 0);
}
