
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int negative; int length; int data; } ;
typedef TYPE_1__ heim_integer ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static BIGNUM *
FUNC_2(const heim_integer *VAR_0)
{
    BIGNUM *VAR_1;

    VAR_1 = FUNC_0(VAR_0->data, VAR_0->length, ((void*)0));
    if (VAR_1 != ((void*)0))
     FUNC_1(VAR_1, VAR_0->negative);
    return VAR_1;
}
