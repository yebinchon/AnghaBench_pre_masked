
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int val ;
typedef int str ;
struct TYPE_7__ {unsigned char* data; size_t length; } ;
typedef TYPE_1__ heim_printable_string ;
typedef int heim_oid ;
struct TYPE_8__ {unsigned char* data; size_t length; } ;
typedef TYPE_2__ heim_octet_string ;
typedef int heim_integer ;
typedef char* heim_general_string ;
typedef scalar_t__ Der_type ;
typedef scalar_t__ Der_class ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned char*,size_t,char**,int *) ;
 int FUNC_4 (unsigned char*,size_t,int *,int *) ;
 int FUNC_5 (unsigned char*,size_t,int*,int *) ;
 int FUNC_6 (unsigned char*,size_t,size_t*,size_t*) ;
 int FUNC_7 (unsigned char*,size_t,TYPE_2__*,int *) ;
 int FUNC_8 (unsigned char*,size_t,int *,int *) ;
 int FUNC_9 (unsigned char*,size_t,TYPE_1__*,int *) ;
 int FUNC_10 (unsigned char*,size_t,scalar_t__*,scalar_t__*,unsigned int*,size_t*) ;
 char* FUNC_11 (unsigned int) ;
 char* FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,char,char**) ;
 int FUNC_14 (int *,char**) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_1__*,int ,int) ;
 size_t FUNC_21 (int,size_t) ;
 int FUNC_22 (char*,...) ;
 int VAR_10 ;

__attribute__((used)) static size_t
FUNC_23 (unsigned char *VAR_11, size_t VAR_12, int VAR_13)
{
    unsigned char *VAR_14 = VAR_11;

    while (VAR_12 > 0) {
 int VAR_15;
 Der_class VAR_16;
 Der_type VAR_17;
 unsigned int VAR_18;
 size_t VAR_19;
 size_t VAR_20;
 size_t VAR_21 = 0;
 int VAR_22 = 0;
 const char *VAR_23;

 VAR_15 = FUNC_10 (VAR_11, VAR_12, &VAR_16, &VAR_17, &VAR_18, &VAR_19);
 if (VAR_15)
     FUNC_16 (1, "der_get_tag: %s", FUNC_15 (VAR_15));
 if (VAR_19 > VAR_12)
     FUNC_16 (1, "unreasonable length (%u) > %u",
    (unsigned)VAR_19, (unsigned)VAR_12);
 VAR_11 += VAR_19;
 VAR_12 -= VAR_19;
 if (VAR_8) {
     int VAR_24;
     for (VAR_24 = 0; VAR_24 < VAR_13; ++VAR_24)
  FUNC_22 (" ");
 }
 FUNC_22 ("%s %s ", FUNC_2(VAR_16), FUNC_12(VAR_17));
 VAR_23 = FUNC_11(VAR_18);
 if (VAR_16 == VAR_2 && VAR_23 != ((void*)0))
     FUNC_22 ("%s = ", VAR_23);
 else
     FUNC_22 ("tag %d = ", VAR_18);
 VAR_15 = FUNC_6 (VAR_11, VAR_12, &VAR_20, &VAR_19);
 if (VAR_15)
     FUNC_16 (1, "der_get_tag: %s", FUNC_15 (VAR_15));
 if (VAR_19 > VAR_12)
     FUNC_16 (1, "unreasonable tag length (%u) > %u",
    (unsigned)VAR_19, (unsigned)VAR_12);
 VAR_11 += VAR_19;
 VAR_12 -= VAR_19;
 if (VAR_20 == VAR_3) {
     if ((VAR_16 == VAR_2 && VAR_17 == VAR_5 && VAR_18 == 133) ||
  (VAR_16 == VAR_1 && VAR_17 == VAR_4) ||
  (VAR_16 == VAR_2 && VAR_17 == VAR_4 && VAR_18 == 131) ||
  (VAR_16 == VAR_2 && VAR_17 == VAR_4 && VAR_18 == 130)) {
  FUNC_22("*INDEFINITE FORM*");
     } else {
  FUNC_17(VAR_10);
  FUNC_16(1, "indef form used on unsupported object");
     }
     VAR_22 = 1;
     if (VAR_6 > VAR_7)
  FUNC_16(1, "indefinite form used recursively more then %lu "
       "times, aborting", VAR_7);
     VAR_6++;
     VAR_20 = VAR_12;
 } else if (VAR_20 > VAR_12) {
     FUNC_22("\n");
     FUNC_17(VAR_10);
     FUNC_16 (1, "unreasonable inner length (%u) > %u",
    (unsigned)VAR_20, (unsigned)VAR_12);
 }
 if (VAR_16 == VAR_1 || VAR_16 == VAR_0) {
     FUNC_22 ("%lu bytes [%u]", (unsigned long)VAR_20, VAR_18);
     if (VAR_17 == VAR_4) {
  FUNC_22("\n");
  VAR_21 = FUNC_23 (VAR_11, VAR_20, VAR_13 + 2);
     } else {
  FUNC_22(" IMPLICIT content\n");
     }
 } else if (VAR_16 == VAR_2) {
     switch (VAR_18) {
     case 140:
  FUNC_22 (" INDEFINITE length was %lu\n",
   (unsigned long)(VAR_11 - VAR_14));
  break;
     case 130 :
     case 131 :
  FUNC_22 ("%lu bytes {\n", (unsigned long)VAR_20);
  VAR_21 = FUNC_23 (VAR_11, VAR_20, VAR_13 + 2);
  if (VAR_8) {
      int VAR_25;
      for (VAR_25 = 0; VAR_25 < VAR_13; ++VAR_25)
   FUNC_22 (" ");
      FUNC_22 ("}\n");
  } else
      FUNC_22 ("} indent = %d\n", VAR_13 / 2);
  break;
     case 135 : {
  int VAR_26;

  if (VAR_20 <= sizeof(VAR_26)) {
      VAR_15 = FUNC_5 (VAR_11, VAR_20, &VAR_26, ((void*)0));
      if (VAR_15)
   FUNC_16 (1, "der_get_integer: %s", FUNC_15 (VAR_15));
      FUNC_22 ("integer %d\n", VAR_26);
  } else {
      heim_integer VAR_27;
      char *VAR_28;

      VAR_15 = FUNC_4(VAR_11, VAR_20, &VAR_27, ((void*)0));
      if (VAR_15)
   FUNC_16 (1, "der_get_heim_integer: %s",
         FUNC_15 (VAR_15));
      VAR_15 = FUNC_14(&VAR_27, &VAR_28);
      if (VAR_15)
   FUNC_16 (1, "der_print_hex_heim_integer: %s",
         FUNC_15 (VAR_15));
      FUNC_22 ("BIG NUM integer: length %lu %s\n",
       (unsigned long)VAR_20, VAR_28);
      FUNC_18(VAR_28);
  }
  break;
     }
     case 133 : {
  heim_octet_string VAR_29;
  size_t VAR_30;

  VAR_15 = FUNC_7 (VAR_11, VAR_20, &VAR_29, ((void*)0));
  if (VAR_15)
      FUNC_16 (1, "der_get_octet_string: %s", FUNC_15 (VAR_15));
  FUNC_22 ("(length %lu), ", (unsigned long)VAR_20);

  if (VAR_9) {
      Der_class VAR_31;
      Der_type VAR_32;
      unsigned int VAR_33;

      VAR_15 = FUNC_10(VAR_29.data, VAR_29.length,
          &VAR_31, &VAR_32, &VAR_33, &VAR_19);
      if (VAR_15 || VAR_19 > VAR_29.length ||
   VAR_32 != VAR_4 || VAR_33 != 131)
   goto just_an_octet_string;

      FUNC_22("{\n");
      FUNC_23 (VAR_29.data, VAR_29.length, VAR_13 + 2);
      for (VAR_30 = 0; VAR_30 < VAR_13; ++VAR_30)
   FUNC_22 (" ");
      FUNC_22 ("}\n");

  } else {
      unsigned char *VAR_34;

  just_an_octet_string:
      VAR_34 = (unsigned char *)VAR_29.data;
      for (VAR_30 = 0; VAR_30 < FUNC_21(16,VAR_20); ++VAR_30)
   FUNC_22 ("%02x", VAR_34[VAR_30]);
      FUNC_22 ("\n");
  }
  FUNC_18 (VAR_29.data);
  break;
     }
     case 136 :
     case 132 : {
  heim_printable_string VAR_35;
  unsigned char *VAR_36;
  size_t VAR_37;

  FUNC_20(&VAR_35, 0, sizeof(VAR_35));

  VAR_15 = FUNC_9 (VAR_11, VAR_20, &VAR_35, ((void*)0));
  if (VAR_15)
      FUNC_16 (1, "der_get_general_string: %s",
     FUNC_15 (VAR_15));
  VAR_36 = VAR_35.data;
  FUNC_22("\"");
  for (VAR_37 = 0; VAR_37 < VAR_35.length; VAR_37++) {
      if (FUNC_19((int)VAR_36[VAR_37]))
   FUNC_22 ("%c", VAR_36[VAR_37]);
      else
   FUNC_22 ("#%02x", VAR_36[VAR_37]);
  }
  FUNC_22("\"\n");
  FUNC_1(&VAR_35);
  break;
     }
     case 137 :
     case 138 :
     case 128 :
     case 129 : {
  heim_general_string VAR_38;

  VAR_15 = FUNC_3 (VAR_11, VAR_20, &VAR_38, ((void*)0));
  if (VAR_15)
      FUNC_16 (1, "der_get_general_string: %s",
     FUNC_15 (VAR_15));
  FUNC_22 ("\"%s\"\n", VAR_38);
  FUNC_18 (VAR_38);
  break;
     }
     case 134: {
  heim_oid VAR_39;
  char *VAR_40;

  VAR_15 = FUNC_8(VAR_11, VAR_20, &VAR_39, ((void*)0));
  if (VAR_15)
      FUNC_16 (1, "der_get_oid: %s", FUNC_15 (VAR_15));
  VAR_15 = FUNC_13(&VAR_39, '.', &VAR_40);
  FUNC_0(&VAR_39);
  if (VAR_15)
      FUNC_16 (1, "der_print_heim_oid: %s", FUNC_15 (VAR_15));
  FUNC_22("%s\n", VAR_40);
  FUNC_18(VAR_40);

  break;
     }
     case 139: {
  int VAR_41;

  VAR_15 = FUNC_5 (VAR_11, VAR_20, &VAR_41, ((void*)0));
  if (VAR_15)
      FUNC_16 (1, "der_get_enum: %s", FUNC_15 (VAR_15));

  FUNC_22("%u\n", VAR_41);
  break;
     }
     default :
  FUNC_22 ("%lu bytes\n", (unsigned long)VAR_20);
  break;
     }
 }
 if (VAR_22) {
     if (VAR_21 == 0)
  FUNC_16(1, "zero length INDEFINITE data ? indent = %d\n",
       VAR_13 / 2);
     if (VAR_21 < VAR_20)
  VAR_20 = VAR_21;
     if (VAR_6 == 0)
  FUNC_16(1, "internal error in indefinite form loop detection");
     VAR_6--;
 } else if (VAR_21)
     FUNC_16(1, "internal error for INDEFINITE form");
 VAR_11 += VAR_20;
 VAR_12 -= VAR_20;
    }
    return 0;
}
