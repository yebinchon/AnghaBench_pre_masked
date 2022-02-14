
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WOLFSSL_X509_NAME_ENTRY ;
typedef int WOLFSSL_X509_NAME ;
typedef int WOLFSSL_X509 ;
struct TYPE_5__ {char const* data; int length; } ;
typedef TYPE_1__ WOLFSSL_ASN1_STRING ;
struct TYPE_6__ {scalar_t__ type; char const* obj; } ;
typedef TYPE_2__ WOLFSSL_ASN1_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ,char const*,size_t,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 void* FUNC_5 (int *,int ,int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 TYPE_2__* FUNC_9 (void*,int) ;
 int FUNC_10 (int ,char*,char const*,int ) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int FUNC_12(WOLFSSL_X509 *VAR_4, const char *VAR_5,
       size_t VAR_6, int VAR_7)
{
 WOLFSSL_ASN1_OBJECT *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 WOLFSSL_X509_NAME *VAR_13;

 FUNC_11(VAR_3, "TLS: Match domain against %s%s",
     VAR_7 ? "" : "suffix ", VAR_5);

 VAR_9 = FUNC_5(VAR_4, VAR_0, ((void*)0), ((void*)0));

 for (VAR_11 = 0; VAR_9 && VAR_11 < FUNC_8(VAR_9); VAR_11++) {
  VAR_8 = FUNC_9(VAR_9, VAR_11);
  if (VAR_8->type != VAR_2)
   continue;
  VAR_12++;
  FUNC_10(VAR_3, "TLS: Certificate dNSName",
      VAR_8->obj, FUNC_1((char *)VAR_8->obj));
  if (FUNC_0((const char *) VAR_8->obj,
     FUNC_1((char *) VAR_8->obj), VAR_5,
     VAR_6, VAR_7) == 1) {
   FUNC_11(VAR_3, "TLS: %s in dNSName found",
       VAR_7 ? "Match" : "Suffix match");
   FUNC_7(VAR_9);
   return 1;
  }
 }
 FUNC_7(VAR_9);

 if (VAR_12) {
  FUNC_11(VAR_3, "TLS: None of the dNSName(s) matched");
  return 0;
 }

 VAR_13 = FUNC_6(VAR_4);
 VAR_10 = -1;
 for (;;) {
  WOLFSSL_X509_NAME_ENTRY *VAR_14;
  WOLFSSL_ASN1_STRING *VAR_15;

  VAR_10 = FUNC_4(VAR_13, VAR_1,
             VAR_10);
  if (VAR_10 == -1)
   break;
  VAR_14 = FUNC_3(VAR_13, VAR_10);
  if (!VAR_14)
   continue;
  VAR_15 = FUNC_2(VAR_14);
  if (!VAR_15)
   continue;
  FUNC_10(VAR_3, "TLS: Certificate commonName",
      VAR_15->data, VAR_15->length);
  if (FUNC_0(VAR_15->data, VAR_15->length,
     VAR_5, VAR_6, VAR_7) == 1) {
   FUNC_11(VAR_3, "TLS: %s in commonName found",
       VAR_7 ? "Match" : "Suffix match");
   return 1;
  }
 }

 FUNC_11(VAR_3, "TLS: No CommonName %smatch found",
     VAR_7 ? "" : "suffix ");
 return 0;
}
