
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct x509_certificate {int cert_len; int issuer; int cert_start; } ;
struct tlsv1_client {int verify; int rl; TYPE_1__* cred; } ;
struct TYPE_2__ {struct x509_certificate* cert; int trusted_certs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct tlsv1_client*,int ,int ) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int,int *,int,size_t*) ;
 int FUNC_5 (int ,char*,...) ;
 struct x509_certificate* FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (struct x509_certificate*) ;

__attribute__((used)) static int FUNC_8(struct tlsv1_client *VAR_6,
     u8 **VAR_7, u8 *VAR_8)
{
 u8 *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14;
 struct x509_certificate *VAR_15;

 VAR_9 = *VAR_7;
 if (VAR_5 + 1 + 3 + 3 > VAR_8 - VAR_9) {
  FUNC_2(VAR_6, VAR_2,
     VAR_1);
  return -1;
 }

 FUNC_5(VAR_0, "TLSv1: Send Certificate");
 VAR_10 = VAR_9;
 VAR_9 += VAR_5;




 VAR_11 = VAR_9;

 *VAR_9++ = VAR_4;

 VAR_12 = VAR_9;
 VAR_9 += 3;


 VAR_13 = VAR_9;
 VAR_9 += 3;
 VAR_15 = VAR_6->cred ? VAR_6->cred->cert : ((void*)0);
 while (VAR_15) {
  if (3 + VAR_15->cert_len > (size_t) (VAR_8 - VAR_9)) {
   FUNC_5(VAR_0, "TLSv1: Not enough buffer space "
       "for Certificate (cert_len=%lu left=%lu)",
       (unsigned long) VAR_15->cert_len,
       (unsigned long) (VAR_8 - VAR_9));
   FUNC_2(VAR_6, VAR_2,
      VAR_1);
   return -1;
  }
  FUNC_0(VAR_9, VAR_15->cert_len);
  VAR_9 += 3;
  FUNC_1(VAR_9, VAR_15->cert_start, VAR_15->cert_len);
  VAR_9 += VAR_15->cert_len;

  if (FUNC_7(VAR_15))
   break;
  VAR_15 = FUNC_6(VAR_6->cred->trusted_certs,
          &VAR_15->issuer);
 }
 if (VAR_6->cred == ((void*)0) || VAR_15 == VAR_6->cred->cert || VAR_15 == ((void*)0)) {






  FUNC_5(VAR_0, "TLSv1: Full client certificate chain "
      "not configured - validation may fail");
 }
 FUNC_0(VAR_13, VAR_9 - VAR_13 - 3);

 FUNC_0(VAR_12, VAR_9 - VAR_12 - 3);

 if (FUNC_4(&VAR_6->rl, VAR_3,
         VAR_10, VAR_8 - VAR_10, VAR_11, VAR_9 - VAR_11,
         &VAR_14) < 0) {
  FUNC_5(VAR_0, "TLSv1: Failed to generate a record");
  FUNC_2(VAR_6, VAR_2,
     VAR_1);
  return -1;
 }
 VAR_9 = VAR_10 + VAR_14;

 FUNC_3(&VAR_6->verify, VAR_11, VAR_9 - VAR_11);

 *VAR_7 = VAR_9;

 return 0;
}
