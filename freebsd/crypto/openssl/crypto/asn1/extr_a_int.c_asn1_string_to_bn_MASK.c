
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int length; int data; } ;
typedef int BIGNUM ;
typedef TYPE_1__ ASN1_INTEGER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;

__attribute__((used)) static BIGNUM *FUNC_3(const ASN1_INTEGER *VAR_4, BIGNUM *VAR_5,
                                 int VAR_6)
{
    BIGNUM *VAR_7;

    if ((VAR_4->type & ~VAR_3) != VAR_6) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }

    VAR_7 = FUNC_1(VAR_4->data, VAR_4->length, VAR_5);
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    if (VAR_4->type & VAR_3)
        FUNC_2(VAR_7, 1);
    return VAR_7;
}
