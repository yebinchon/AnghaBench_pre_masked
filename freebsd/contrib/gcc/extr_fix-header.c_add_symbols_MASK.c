
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbol_flags ;
typedef int * namelist ;
struct TYPE_2__ {int * names; int flags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_1 (symbol_flags VAR_3, namelist VAR_4)
{
  VAR_2[VAR_1].flags = VAR_3;
  VAR_2[VAR_1].names = VAR_4;
  VAR_1++;
  if (VAR_1 >= VAR_0)
    FUNC_0 ("too many calls to add_symbols");
  VAR_2[VAR_1].names = ((void*)0);
}
