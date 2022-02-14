
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {int tbs_cert_len; int tbs_cert_start; int sign_value_len; int sign_value; int signature; } ;


 int FUNC_0 (struct x509_certificate*,int *,int ,int ,int ,int ) ;

int FUNC_1(struct x509_certificate *VAR_0,
         struct x509_certificate *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->signature,
        VAR_1->sign_value, VAR_1->sign_value_len,
        VAR_1->tbs_cert_start, VAR_1->tbs_cert_len);
}
