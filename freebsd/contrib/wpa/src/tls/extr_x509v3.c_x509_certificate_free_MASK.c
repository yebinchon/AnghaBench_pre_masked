
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {struct x509_certificate* subject_dn; struct x509_certificate* sign_value; struct x509_certificate* public_key; int subject; int issuer; scalar_t__ next; } ;


 int VAR_0 ;
 int FUNC_0 (struct x509_certificate*) ;
 int FUNC_1 (int ,char*,struct x509_certificate*,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct x509_certificate *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->next) {
  FUNC_1(VAR_0, "X509: x509_certificate_free: cer=%p "
      "was still on a list (next=%p)\n",
      VAR_1, VAR_1->next);
 }
 FUNC_2(&VAR_1->issuer);
 FUNC_2(&VAR_1->subject);
 FUNC_0(VAR_1->public_key);
 FUNC_0(VAR_1->sign_value);
 FUNC_0(VAR_1->subject_dn);
 FUNC_0(VAR_1);
}
