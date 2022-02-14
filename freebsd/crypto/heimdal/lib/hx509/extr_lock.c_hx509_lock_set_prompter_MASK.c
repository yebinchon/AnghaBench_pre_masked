
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_prompter_fct ;
typedef TYPE_1__* hx509_lock ;
struct TYPE_3__ {void* prompt_data; int prompt; } ;



int
FUNC_0(hx509_lock VAR_0, hx509_prompter_fct VAR_1, void *VAR_2)
{
    VAR_0->prompt = VAR_1;
    VAR_0->prompt_data = VAR_2;
    return 0;
}
