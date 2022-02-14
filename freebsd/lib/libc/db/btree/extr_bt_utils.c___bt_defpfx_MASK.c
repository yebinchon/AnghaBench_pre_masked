
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_4__ {scalar_t__ size; scalar_t__* data; } ;
typedef TYPE_1__ DBT ;


 size_t FUNC_0 (scalar_t__,scalar_t__) ;

size_t
FUNC_1(const DBT *VAR_0, const DBT *VAR_1)
{
 u_char *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_4 = 1;
 VAR_5 = FUNC_0(VAR_0->size, VAR_1->size);
 for (VAR_2 = VAR_0->data, VAR_3 = VAR_1->data; VAR_5--; ++VAR_2, ++VAR_3, ++VAR_4)
  if (*VAR_2 != *VAR_3)
   return (VAR_4);


 return (VAR_0->size < VAR_1->size ? VAR_0->size + 1 : VAR_0->size);
}
