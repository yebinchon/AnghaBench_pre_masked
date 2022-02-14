
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct x509_name {char* email; size_t num_attr; TYPE_1__* attr; } ;
struct asn1_oid {int len; int* oid; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int * payload; } ;
typedef enum x509_name_attr_type { ____Placeholder_x509_name_attr_type } x509_name_attr_type ;
struct TYPE_2__ {int type; char* value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (int const*,int,struct asn1_oid*,int const**) ;
 char* FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int *,int) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int *,int) ;
 int FUNC_8 (int ,char*,int *,size_t) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct x509_name*) ;

int FUNC_11(const u8 *VAR_15, size_t VAR_16, struct x509_name *VAR_17,
      const u8 **VAR_18)
{
 struct asn1_hdr VAR_19;
 const u8 *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 struct asn1_oid VAR_26;
 char *VAR_27;
 if (FUNC_0(VAR_15, VAR_16, &VAR_19) < 0 ||
     VAR_19.class != VAR_0 ||
     VAR_19.tag != VAR_1) {
  FUNC_9(VAR_3, "X509: Expected SEQUENCE "
      "(Name / RDNSequencer) - found class %d tag 0x%x",
      VAR_19.class, VAR_19.tag);
  return -1;
 }
 VAR_20 = VAR_19.payload;

 if (VAR_19.length > VAR_15 + VAR_16 - VAR_20)
  return -1;

 VAR_21 = *VAR_18 = VAR_20 + VAR_19.length;

 while (VAR_20 < VAR_21) {
  enum x509_name_attr_type VAR_28;

  if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
      VAR_19.class != VAR_0 ||
      VAR_19.tag != VAR_2) {
   FUNC_9(VAR_3, "X509: Expected SET "
       "(RelativeDistinguishedName) - found class "
       "%d tag 0x%x", VAR_19.class, VAR_19.tag);
   FUNC_10(VAR_17);
   return -1;
  }

  VAR_22 = VAR_19.payload;
  VAR_20 = VAR_23 = VAR_19.payload + VAR_19.length;

  if (FUNC_0(VAR_22, VAR_23 - VAR_22, &VAR_19) < 0 ||
      VAR_19.class != VAR_0 ||
      VAR_19.tag != VAR_1) {
   FUNC_9(VAR_3, "X509: Expected SEQUENCE "
       "(AttributeTypeAndValue) - found class %d "
       "tag 0x%x", VAR_19.class, VAR_19.tag);
   FUNC_10(VAR_17);
   return -1;
  }

  VAR_24 = VAR_19.payload;
  VAR_25 = VAR_19.payload + VAR_19.length;

  if (FUNC_1(VAR_24, VAR_25 - VAR_24, &VAR_26, &VAR_24)) {
   FUNC_10(VAR_17);
   return -1;
  }

  if (FUNC_0(VAR_24, VAR_25 - VAR_24, &VAR_19) < 0 ||
      VAR_19.class != VAR_0) {
   FUNC_9(VAR_3, "X509: Failed to parse "
       "AttributeValue");
   FUNC_10(VAR_17);
   return -1;
  }
  VAR_28 = VAR_11;
  if (VAR_26.len == 4 &&
      VAR_26.oid[0] == 2 && VAR_26.oid[1] == 5 && VAR_26.oid[2] == 4) {

   switch (VAR_26.oid[3]) {
   case 3:

    VAR_28 = VAR_8;
    break;
   case 6:

    VAR_28 = VAR_7;
    break;
   case 7:

    VAR_28 = VAR_10;
    break;
   case 8:

    VAR_28 = VAR_14;
    break;
   case 10:

    VAR_28 = VAR_12;
    break;
   case 11:

    VAR_28 = VAR_13;
    break;
   }
  } else if (VAR_26.len == 7 &&
      VAR_26.oid[0] == 1 && VAR_26.oid[1] == 2 &&
      VAR_26.oid[2] == 840 && VAR_26.oid[3] == 113549 &&
      VAR_26.oid[4] == 1 && VAR_26.oid[5] == 9 &&
      VAR_26.oid[6] == 1) {

   FUNC_3(VAR_17->email);
   VAR_17->email = FUNC_4(VAR_19.length + 1);
   if (VAR_17->email == ((void*)0)) {
    FUNC_10(VAR_17);
    return -1;
   }
   FUNC_5(VAR_17->email, VAR_19.payload, VAR_19.length);
   VAR_17->email[VAR_19.length] = '\0';
   continue;
  } else if (VAR_26.len == 7 &&
      VAR_26.oid[0] == 0 && VAR_26.oid[1] == 9 &&
      VAR_26.oid[2] == 2342 && VAR_26.oid[3] == 19200300 &&
      VAR_26.oid[4] == 100 && VAR_26.oid[5] == 1 &&
      VAR_26.oid[6] == 25) {

   VAR_28 = VAR_9;
  }

  if (VAR_28 == VAR_11) {
   FUNC_7(VAR_3, "X509: Unrecognized OID",
        (u8 *) VAR_26.oid,
        VAR_26.len * sizeof(VAR_26.oid[0]));
   FUNC_8(VAR_5, "X509: Attribute Data",
       VAR_19.payload, VAR_19.length);
   continue;
  }

  if (VAR_17->num_attr == VAR_6) {
   FUNC_9(VAR_4, "X509: Too many Name attributes");
   FUNC_10(VAR_17);
   return -1;
  }

  VAR_27 = FUNC_2(VAR_19.payload, VAR_19.length);
  if (VAR_27 == ((void*)0)) {
   FUNC_10(VAR_17);
   return -1;
  }
  if (FUNC_6(VAR_27) != VAR_19.length) {
   FUNC_9(VAR_4, "X509: Reject certificate with "
       "embedded NUL byte in a string (%s[NUL])",
       VAR_27);
   FUNC_3(VAR_27);
   FUNC_10(VAR_17);
   return -1;
  }

  VAR_17->attr[VAR_17->num_attr].type = VAR_28;
  VAR_17->attr[VAR_17->num_attr].value = VAR_27;
  VAR_17->num_attr++;
 }

 return 0;
}
