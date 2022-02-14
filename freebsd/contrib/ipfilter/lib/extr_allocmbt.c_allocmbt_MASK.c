
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t mb_len; char* mb_data; scalar_t__ mb_buf; int * mb_next; } ;
typedef TYPE_1__ mb_t ;


 scalar_t__ FUNC_0 (int) ;

mb_t *FUNC_1(size_t VAR_0)
{
 mb_t *VAR_1;

 VAR_1 = (mb_t *)FUNC_0(sizeof(mb_t));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_1->mb_len = VAR_0;
 VAR_1->mb_next = ((void*)0);
 VAR_1->mb_data = (char *)VAR_1->mb_buf;
 return VAR_1;
}
