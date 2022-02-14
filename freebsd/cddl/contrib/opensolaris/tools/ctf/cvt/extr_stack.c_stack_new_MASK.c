
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_nument; int st_top; void (* st_free ) (void*) ;void* st_data; } ;
typedef TYPE_1__ stk_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

stk_t *
FUNC_1(void (*VAR_1)(void *))
{
 stk_t *VAR_2;

 VAR_2 = FUNC_0(sizeof (stk_t));
 VAR_2->st_nument = VAR_0;
 VAR_2->st_top = -1;
 VAR_2->st_data = FUNC_0(sizeof (void *) * VAR_2->st_nument);
 VAR_2->st_free = VAR_1;

 return (VAR_2);
}
