
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* certificates; } ;
struct sigctx {TYPE_1__ sd; } ;
typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_4__ {unsigned int len; int * val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 void* FUNC_1 (int *,unsigned int const) ;

__attribute__((used)) static int
FUNC_2(hx509_context VAR_1, void *VAR_2, hx509_cert VAR_3)
{
    struct sigctx *VAR_4 = VAR_2;
    const unsigned int VAR_5 = VAR_4->sd.certificates->len;
    void *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_1(VAR_4->sd.certificates->val,
    (VAR_5 + 1) * sizeof(VAR_4->sd.certificates->val[0]));
    if (VAR_6 == ((void*)0))
 return VAR_0;
    VAR_4->sd.certificates->val = VAR_6;

    VAR_7 = FUNC_0(VAR_1, VAR_3,
       &VAR_4->sd.certificates->val[VAR_5]);
    if (VAR_7 == 0)
 VAR_4->sd.certificates->len++;

    return VAR_7;
}
