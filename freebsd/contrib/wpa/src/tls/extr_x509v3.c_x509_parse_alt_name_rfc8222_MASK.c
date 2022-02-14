
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_name {int * alt_email; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,size_t) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,int const*,size_t) ;
 int FUNC_5 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_6(struct x509_name *VAR_2,
           const u8 *VAR_3, size_t VAR_4)
{

 FUNC_4(VAR_1, "X509: altName - rfc822Name", VAR_3, VAR_4);
 FUNC_0(VAR_2->alt_email);
 VAR_2->alt_email = FUNC_3(VAR_4 + 1);
 if (VAR_2->alt_email == ((void*)0))
  return -1;
 FUNC_1(VAR_2->alt_email, VAR_3, VAR_4);
 if (FUNC_2(VAR_2->alt_email) != VAR_4) {
  FUNC_5(VAR_0, "X509: Reject certificate with "
      "embedded NUL byte in rfc822Name (%s[NUL])",
      VAR_2->alt_email);
  FUNC_0(VAR_2->alt_email);
  VAR_2->alt_email = ((void*)0);
  return -1;
 }
 return 0;
}
