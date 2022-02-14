
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int le_idx; } ;
typedef TYPE_1__ labelent_t ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, void *VAR_1)
{
 labelent_t *VAR_2 = VAR_0;
 int *VAR_3 = VAR_1;

 if (VAR_2->le_idx > *VAR_3) {
  VAR_2->le_idx = *VAR_3;
  return (1);
 }

 return (0);
}
