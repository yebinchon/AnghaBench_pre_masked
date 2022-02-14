
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_request ;
typedef int hx509_context ;
struct TYPE_3__ {int key; } ;
typedef int SubjectPublicKeyInfo ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(hx509_context VAR_0,
     hx509_request VAR_1,
     const SubjectPublicKeyInfo *VAR_2)
{
    FUNC_1(&VAR_1->key);
    return FUNC_0(VAR_2, &VAR_1->key);
}
