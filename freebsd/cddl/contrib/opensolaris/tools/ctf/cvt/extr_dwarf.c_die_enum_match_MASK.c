
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * t_emem; } ;
typedef TYPE_1__ tdesc_t ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, void *VAR_1)
{
 tdesc_t *VAR_2 = VAR_0, **VAR_3 = VAR_1;

 if (VAR_2->t_emem != ((void*)0)) {
  *VAR_3 = VAR_2;
  return (-1);
 }

 return (0);
}
