
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_x509_trust_anchor ;
typedef int br_x509_certificate ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int) ;

br_x509_trust_anchor *
FUNC_2(br_x509_certificate *VAR_0)
{
 br_x509_trust_anchor VAR_1;

 if (FUNC_0(&VAR_1, VAR_0) < 0) {
  return ((void*)0);
 } else {
  return FUNC_1(&VAR_1, sizeof VAR_1);
 }
}
