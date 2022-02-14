
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ Shell ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static Shell *
FUNC_1(const char *VAR_1)
{
    Shell *VAR_2;

    for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++) {
 if (FUNC_0(VAR_1, VAR_2->name) == 0)
  return (VAR_2);
    }
    return ((void*)0);
}
