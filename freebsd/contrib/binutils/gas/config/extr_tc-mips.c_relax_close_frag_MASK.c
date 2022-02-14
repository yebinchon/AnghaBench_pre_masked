
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int first_frag; } ;
struct TYPE_3__ {scalar_t__ first_fixup; int * sizes; int symbol; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,char*) ;
 int FUNC_2 (int **,int ,int) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  VAR_1.first_frag = VAR_0;
  FUNC_1 (VAR_3, 0, 0,
     FUNC_0 (VAR_2.sizes[0], VAR_2.sizes[1]),
     VAR_2.symbol, 0, (char *) VAR_2.first_fixup);

  FUNC_2 (&VAR_2.sizes, 0, sizeof (VAR_2.sizes));
  VAR_2.first_fixup = 0;
}
