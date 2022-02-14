
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ key; } ;
typedef TYPE_1__ acevals_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const acevals_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->key == VAR_3->key)
  return (0);

 if (VAR_2->key > VAR_3->key)
  return (1);

 else
  return (-1);
}
