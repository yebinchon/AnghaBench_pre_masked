
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx509_generate_private_context {int isCA; } ;
typedef int hx509_context ;



int
FUNC_0(hx509_context VAR_0,
      struct hx509_generate_private_context *VAR_1)
{
    VAR_1->isCA = 1;
    return 0;
}
