
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ stack_index_t ;
typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
typedef int X509 ;
struct TYPE_10__ {int length; int data; } ;
struct TYPE_8__ {TYPE_1__* dNSName; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_7__ {int length; int data; } ;
typedef TYPE_3__ GENERAL_NAME ;
typedef TYPE_4__ ASN1_STRING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 void* FUNC_3 (int *,int ,int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,char const*,size_t,int) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (void*,int ) ;
 TYPE_3__* FUNC_8 (void*,scalar_t__) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static int FUNC_11(X509 *VAR_5, const char *VAR_6,
       size_t VAR_7, int VAR_8)
{
 GENERAL_NAME *VAR_9;
 void *VAR_10;
 int VAR_11;
 stack_index_t VAR_12;
 int VAR_13 = 0;
 X509_NAME *VAR_14;

 FUNC_10(VAR_2, "TLS: Match domain against %s%s",
     VAR_8 ? "": "suffix ", VAR_6);

 VAR_10 = FUNC_3(VAR_5, VAR_4, ((void*)0), ((void*)0));

 for (VAR_12 = 0; VAR_10 && VAR_12 < FUNC_6(VAR_10); VAR_12++) {
  VAR_9 = FUNC_8(VAR_10, VAR_12);
  if (VAR_9->type != VAR_1)
   continue;
  VAR_13++;
  FUNC_9(VAR_2, "TLS: Certificate dNSName",
      VAR_9->d.dNSName->data,
      VAR_9->d.dNSName->length);
  if (FUNC_5(VAR_9->d.dNSName->data,
     VAR_9->d.dNSName->length,
     VAR_6, VAR_7, VAR_8) == 1) {
   FUNC_10(VAR_2, "TLS: %s in dNSName found",
       VAR_8 ? "Match" : "Suffix match");
   FUNC_7(VAR_10, VAR_0);
   return 1;
  }
 }
 FUNC_7(VAR_10, VAR_0);

 if (VAR_13) {
  FUNC_10(VAR_2, "TLS: None of the dNSName(s) matched");
  return 0;
 }

 VAR_14 = FUNC_4(VAR_5);
 VAR_11 = -1;
 for (;;) {
  X509_NAME_ENTRY *VAR_15;
  ASN1_STRING *VAR_16;

  VAR_11 = FUNC_2(VAR_14, VAR_3, VAR_11);
  if (VAR_11 == -1)
   break;
  VAR_15 = FUNC_1(VAR_14, VAR_11);
  if (VAR_15 == ((void*)0))
   continue;
  VAR_16 = FUNC_0(VAR_15);
  if (VAR_16 == ((void*)0))
   continue;
  FUNC_9(VAR_2, "TLS: Certificate commonName",
      VAR_16->data, VAR_16->length);
  if (FUNC_5(VAR_16->data, VAR_16->length,
     VAR_6, VAR_7, VAR_8) == 1) {
   FUNC_10(VAR_2, "TLS: %s in commonName found",
       VAR_8 ? "Match" : "Suffix match");
   return 1;
  }
 }

 FUNC_10(VAR_2, "TLS: No CommonName %smatch found",
     VAR_8 ? "": "suffix ");
 return 0;
}
