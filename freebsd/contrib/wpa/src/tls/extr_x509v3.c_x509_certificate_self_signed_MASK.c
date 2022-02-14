
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {int subject; int issuer; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

int FUNC_1(struct x509_certificate *VAR_0)
{
 return FUNC_0(&VAR_0->issuer, &VAR_0->subject) == 0;
}
