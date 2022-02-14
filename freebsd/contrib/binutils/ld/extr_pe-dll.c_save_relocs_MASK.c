
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reloc_count; int flags; scalar_t__* orelocation; scalar_t__ relocation; } ;
typedef TYPE_1__ asection ;
typedef int arelent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (asection *VAR_4)
{
  int VAR_5;

  VAR_4->relocation = VAR_3;
  VAR_4->reloc_count = VAR_1;
  VAR_4->orelocation = FUNC_0 ((VAR_1 + 1) * sizeof (arelent *));
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    VAR_4->orelocation[VAR_5] = VAR_4->relocation + VAR_5;
  VAR_4->orelocation[VAR_1] = 0;
  VAR_4->flags |= VAR_0;
  VAR_3 = 0;
  VAR_1 = VAR_2 = 0;
}
