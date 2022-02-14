
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_prompt ;
typedef TYPE_1__* hx509_lock ;
struct TYPE_3__ {int (* prompt ) (int ,int *) ;int prompt_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

int
FUNC_1(hx509_lock VAR_1, hx509_prompt *VAR_2)
{
    if (VAR_1->prompt == ((void*)0))
 return VAR_0;
    return (*VAR_1->prompt)(VAR_1->prompt_data, VAR_2);
}
