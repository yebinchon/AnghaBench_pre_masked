
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_certs ;
typedef int hx509_cert ;
struct TYPE_7__ {TYPE_2__* certificates; } ;
struct TYPE_6__ {size_t len; TYPE_1__* val; } ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_3__ SignedData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(hx509_context VAR_0, const SignedData *VAR_1, hx509_certs VAR_2)
{
    int VAR_3;
    size_t VAR_4;

    if (VAR_1->certificates == ((void*)0))
 return 0;

    for (VAR_4 = 0; VAR_4 < VAR_1->certificates->len; VAR_4++) {
 hx509_cert VAR_5;

 VAR_3 = FUNC_1(VAR_0,
       VAR_1->certificates->val[VAR_4].data,
       VAR_1->certificates->val[VAR_4].length,
       &VAR_5);
 if (VAR_3)
     return VAR_3;
 VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_5);
 FUNC_0(VAR_5);
 if (VAR_3)
     return VAR_3;
    }

    return 0;
}
