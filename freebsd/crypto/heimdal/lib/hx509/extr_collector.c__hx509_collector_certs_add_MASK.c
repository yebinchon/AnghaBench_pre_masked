
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx509_collector {int certs; } ;
typedef int hx509_context ;
typedef int hx509_cert ;


 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(hx509_context VAR_0,
      struct hx509_collector *VAR_1,
      hx509_cert VAR_2)
{
    return FUNC_0(VAR_0, VAR_1->certs, VAR_2);
}
