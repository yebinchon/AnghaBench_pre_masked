
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_4__ {scalar_t__ size; scalar_t__* data; } ;
typedef TYPE_1__ DBT ;


 size_t FUNC_0 (scalar_t__,scalar_t__) ;

int
FUNC_1(const DBT *VAR_0, const DBT *VAR_1)
{
 size_t VAR_2;
 u_char *VAR_3, *VAR_4;







 VAR_2 = FUNC_0(VAR_0->size, VAR_1->size);
 for (VAR_3 = VAR_0->data, VAR_4 = VAR_1->data; VAR_2--; ++VAR_3, ++VAR_4)
  if (*VAR_3 != *VAR_4)
   return ((int)*VAR_3 - (int)*VAR_4);
 return ((int)VAR_0->size - (int)VAR_1->size);
}
