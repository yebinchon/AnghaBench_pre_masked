
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int data; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(const DBT *VAR_0, const DBT *VAR_1)
{
  int VAR_2 = VAR_0->size > VAR_1->size ? VAR_1->size : VAR_0->size;
  int VAR_3 = FUNC_0(VAR_0->data, VAR_1->data, VAR_2);

  if (VAR_3)
    return VAR_3;
  else
    return VAR_0->size - VAR_1->size;
}
