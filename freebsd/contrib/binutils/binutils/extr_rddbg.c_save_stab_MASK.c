
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_2__ {int type; int desc; int * string; int value; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_3, int VAR_4, bfd_vma VAR_5, const char *VAR_6)
{
  if (VAR_1[VAR_2].string != ((void*)0))
    FUNC_0 (VAR_1[VAR_2].string);
  VAR_1[VAR_2].type = VAR_3;
  VAR_1[VAR_2].desc = VAR_4;
  VAR_1[VAR_2].value = VAR_5;
  VAR_1[VAR_2].string = FUNC_1 (VAR_6);
  VAR_2 = (VAR_2 + 1) % VAR_0;
}
