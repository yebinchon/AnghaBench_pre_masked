
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long len; int * val; } ;
struct mem_data {TYPE_1__ certs; } ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int * hx509_cert ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(hx509_context VAR_0,
  hx509_certs VAR_1,
  void *VAR_2,
  void *VAR_3,
  hx509_cert *VAR_4)
{
    unsigned long *VAR_5 = VAR_3;
    struct mem_data *VAR_6 = VAR_2;

    if (*VAR_5 >= VAR_6->certs.len) {
 *VAR_4 = ((void*)0);
 return 0;
    }

    *VAR_4 = FUNC_0(VAR_6->certs.val[*VAR_5]);
    (*VAR_5)++;
    return 0;
}
