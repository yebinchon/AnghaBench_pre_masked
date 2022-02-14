
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_certificate {int issuer; scalar_t__ cert_len; } ;
struct tlsv1_server {TYPE_1__* cred; } ;
struct TYPE_2__ {int trusted_certs; struct x509_certificate* cert; } ;


 struct x509_certificate* FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct x509_certificate*) ;

__attribute__((used)) static size_t FUNC_2(struct tlsv1_server *VAR_0)
{
 size_t VAR_1 = 0;
 struct x509_certificate *VAR_2;

 VAR_2 = VAR_0->cred ? VAR_0->cred->cert : ((void*)0);
 while (VAR_2) {
  VAR_1 += 3 + VAR_2->cert_len;
  if (FUNC_1(VAR_2))
   break;
  VAR_2 = FUNC_0(VAR_0->cred->trusted_certs,
          &VAR_2->issuer);
 }

 return VAR_1;
}
