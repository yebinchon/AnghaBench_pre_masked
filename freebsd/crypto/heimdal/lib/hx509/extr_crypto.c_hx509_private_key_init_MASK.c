
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_private_key_ops ;
typedef TYPE_2__* hx509_private_key ;
struct TYPE_5__ {void* keydata; } ;
struct TYPE_6__ {int ref; TYPE_1__ private_key; int * ops; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;

int
FUNC_1(hx509_private_key *VAR_1,
   hx509_private_key_ops *VAR_2,
   void *VAR_3)
{
    *VAR_1 = FUNC_0(1, sizeof(**VAR_1));
    if (*VAR_1 == ((void*)0))
 return VAR_0;
    (*VAR_1)->ref = 1;
    (*VAR_1)->ops = VAR_2;
    (*VAR_1)->private_key.keydata = VAR_3;
    return 0;
}
