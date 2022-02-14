
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_top; int st_nument; void** st_data; } ;
typedef TYPE_1__ stk_t ;


 scalar_t__ VAR_0 ;
 void** FUNC_0 (void**,int) ;

void
FUNC_1(stk_t *VAR_1, void *VAR_2)
{
 VAR_1->st_top++;

 if (VAR_1->st_top == VAR_1->st_nument) {
  VAR_1->st_nument += VAR_0;
  VAR_1->st_data = FUNC_0(VAR_1->st_data,
      sizeof (void *) * VAR_1->st_nument);
 }

 VAR_1->st_data[VAR_1->st_top] = VAR_2;
}
