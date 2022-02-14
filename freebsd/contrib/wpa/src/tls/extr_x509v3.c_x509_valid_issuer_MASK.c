
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {int extensions_present; scalar_t__ version; int key_usage; int ca; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(const struct x509_certificate *VAR_5)
{
 if ((VAR_5->extensions_present & VAR_2) &&
     !VAR_5->ca) {
  FUNC_0(VAR_0, "X509: Non-CA certificate used as an "
      "issuer");
  return -1;
 }

 if (VAR_5->version == VAR_1 &&
     !(VAR_5->extensions_present & VAR_2)) {
  FUNC_0(VAR_0, "X509: v3 CA certificate did not "
      "include BasicConstraints extension");
  return -1;
 }

 if ((VAR_5->extensions_present & VAR_3) &&
     !(VAR_5->key_usage & VAR_4)) {
  FUNC_0(VAR_0, "X509: Issuer certificate did not have "
      "keyCertSign bit in Key Usage");
  return -1;
 }

 return 0;
}
