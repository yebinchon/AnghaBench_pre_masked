
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int al_elements; } ;
typedef TYPE_1__ alist_t ;


 int FUNC_0 (void*,void*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void*) ;

int
FUNC_2(alist_t *VAR_1, int (*VAR_2)(void *, void *))
{
 if (!VAR_2)
  VAR_2 = FUNC_0;

 return (FUNC_1(VAR_1->al_elements, VAR_0, (void *)VAR_2));
}
