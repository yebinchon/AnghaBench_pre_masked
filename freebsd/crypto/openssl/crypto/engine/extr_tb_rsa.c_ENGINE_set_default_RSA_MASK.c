
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rsa_meth; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(ENGINE *VAR_3)
{
    if (VAR_3->rsa_meth)
        return FUNC_0(&VAR_2,
                                     VAR_1, VAR_3, &VAR_0,
                                     1, 1);
    return 1;
}
