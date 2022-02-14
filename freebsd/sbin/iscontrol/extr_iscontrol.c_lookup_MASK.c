
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; int * name; } ;
typedef TYPE_1__ token_t ;


 scalar_t__ FUNC_0 (int *,char*) ;

int
FUNC_1(token_t *VAR_0, char *VAR_1)
{
     token_t *VAR_2;

     for(VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++)
   if(FUNC_0(VAR_2->name, VAR_1) == 0)
        return VAR_2->val;
     return 0;
}
