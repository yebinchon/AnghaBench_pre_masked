
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int * val; } ;
struct mem_data {TYPE_1__ certs; } ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int hx509_cert ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(hx509_context VAR_1, hx509_certs VAR_2, void *VAR_3, hx509_cert VAR_4)
{
    struct mem_data *VAR_5 = VAR_3;
    hx509_cert *VAR_6;

    VAR_6 = FUNC_1(VAR_5->certs.val,
    (VAR_5->certs.len + 1) * sizeof(VAR_5->certs.val[0]));
    if (VAR_6 == ((void*)0))
 return VAR_0;

    VAR_5->certs.val = VAR_6;
    VAR_5->certs.val[VAR_5->certs.len] = FUNC_0(VAR_4);
    VAR_5->certs.len++;

    return 0;
}
