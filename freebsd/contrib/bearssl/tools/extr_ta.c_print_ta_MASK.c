
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int curve; } ;
struct TYPE_7__ {TYPE_1__ ec; } ;
struct TYPE_8__ {int key_type; TYPE_2__ key; } ;
struct TYPE_9__ {int flags; TYPE_3__ pkey; } ;
typedef TYPE_4__ br_x509_trust_anchor ;




 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(br_x509_trust_anchor *VAR_1, long VAR_2)
{
 char VAR_3[25];

 FUNC_1("\t{\n");
 FUNC_1("\t\t{ (unsigned char *)TA%ld_DN, sizeof TA%ld_DN },\n",
  VAR_2, VAR_2);
 FUNC_1("\t\t%s,\n", (VAR_1->flags & VAR_0)
  ? "BR_X509_TA_CA" : "0");
 FUNC_1("\t\t{\n");
 switch (VAR_1->pkey.key_type) {
  const char *VAR_4;

 case 128:
  FUNC_1("\t\t\tBR_KEYTYPE_RSA,\n");
  FUNC_1("\t\t\t{ .rsa = {\n");
  FUNC_1("\t\t\t\t(unsigned char *)TA%ld_RSA_N,"
   " sizeof TA%ld_RSA_N,\n", VAR_2, VAR_2);
  FUNC_1("\t\t\t\t(unsigned char *)TA%ld_RSA_E,"
   " sizeof TA%ld_RSA_E,\n", VAR_2, VAR_2);
  FUNC_1("\t\t\t} }\n");
  break;
 case 129:
  FUNC_1("\t\t\tBR_KEYTYPE_EC,\n");
  FUNC_1("\t\t\t{ .ec = {\n");
  VAR_4 = FUNC_0(VAR_1->pkey.key.ec.curve);
  if (VAR_4 == ((void*)0)) {
   FUNC_2(VAR_3, "%d", VAR_1->pkey.key.ec.curve);
   VAR_4 = VAR_3;
  }
  FUNC_1("\t\t\t\t%s,\n", VAR_4);
  FUNC_1("\t\t\t\t(unsigned char *)TA%ld_EC_Q,"
   " sizeof TA%ld_EC_Q,\n", VAR_2, VAR_2);
  FUNC_1("\t\t\t} }\n");
 }
 FUNC_1("\t\t}\n");
 FUNC_1("\t}");
}
