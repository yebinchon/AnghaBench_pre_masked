
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int us ;
typedef int ul ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct TYPE_7__ {int ndo_vflag; int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
typedef int int32_t ;





 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__ const,int) ;
 scalar_t__ FUNC_4 (scalar_t__ const,int) ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__ const) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,scalar_t__ const*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (char*,char const*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_1__*,scalar_t__ const*,char*,int) ;
 int VAR_11 ;
 char* FUNC_11 (int ,char*,int) ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_12(netdissect_options *VAR_13,
       register const u_char *VAR_14)
{
 register uint16_t VAR_15;
 register u_int VAR_16;
 register const char *VAR_17;
 register char VAR_18;
 int VAR_19, VAR_20;
 uint32_t VAR_21;
 uint16_t VAR_22;
 uint8_t VAR_23, VAR_24, VAR_25;

 FUNC_2((VAR_13, "\n\t  Vendor-rfc1048 Extensions"));


 FUNC_2((VAR_13, "\n\t    Magic Cookie 0x%08x", FUNC_1(VAR_14)));
 VAR_14 += sizeof(int32_t);


 while (FUNC_4(*VAR_14, 1)) {
  VAR_15 = *VAR_14++;
  if (VAR_15 == VAR_4 && VAR_13->ndo_vflag < 3)
   continue;
  if (VAR_15 == VAR_1 && VAR_13->ndo_vflag < 3)
   return;
  if (VAR_15 == VAR_2) {
   FUNC_3(*(VAR_14 + 1), 2);
   VAR_15 = FUNC_0(VAR_14 + 1);




   VAR_17 = FUNC_11(VAR_12, "?xT%u", VAR_15);
  } else
   VAR_17 = FUNC_11(VAR_11, "?T%u", VAR_15);
  VAR_18 = *VAR_17++;

  if (VAR_15 == VAR_4 || VAR_15 == VAR_1)
   VAR_16 = 0;
  else {

   FUNC_3(*VAR_14, 1);
   VAR_16 = *VAR_14++;
  }

  FUNC_2((VAR_13, "\n\t    %s Option %u, length %u%s", VAR_17, VAR_15, VAR_16,
     VAR_16 > 0 ? ": " : ""));

  if (VAR_15 == VAR_4 && VAR_13->ndo_vflag > 2) {
   u_int VAR_26 = 1;
   while (FUNC_4(*VAR_14, 1) && *VAR_14 == VAR_4) {
    VAR_14++;
    VAR_26++;
   }
   if (VAR_26 > 1)
    FUNC_2((VAR_13, ", occurs %u", VAR_26));
  }

  if (!FUNC_4(*VAR_14, VAR_16)) {
   FUNC_2((VAR_13, "[|rfc1048 %u]", VAR_16));
   return;
  }

  if (VAR_15 == VAR_0 && VAR_16 == 1) {
   VAR_23 = *VAR_14++;
   FUNC_2((VAR_13, "%s", FUNC_11(VAR_8, "Unknown (%u)", VAR_23)));
   continue;
  }

  if (VAR_15 == VAR_5) {
   VAR_20 = 0;
   while (VAR_16-- > 0) {
    VAR_23 = *VAR_14++;
    VAR_17 = FUNC_11(VAR_11, "?Option %u", VAR_23);
    if (VAR_20 % 4 == 0)
     FUNC_2((VAR_13, "\n\t      "));
    else
     FUNC_2((VAR_13, ", "));
    FUNC_2((VAR_13, "%s", VAR_17 + 1));
    VAR_20++;
   }
   continue;
  }

  if (VAR_15 == VAR_3) {
   VAR_19 = 1;
   while (VAR_16 > 1) {
    VAR_16 -= 2;
    VAR_22 = FUNC_0(VAR_14);
    VAR_14 += 2;
    VAR_17 = FUNC_11(VAR_12, "?xT%u", VAR_22);
    if (!VAR_19)
     FUNC_2((VAR_13, "+"));
    FUNC_2((VAR_13, "%s", VAR_17 + 1));
    VAR_19 = 0;
   }
   continue;
  }


  if (VAR_18 == '?') {

   if (VAR_16 & 1)
    VAR_18 = 'b';
   else if (VAR_16 & 2)
    VAR_18 = 's';
   else
    VAR_18 = 'l';
  }
  VAR_19 = 1;
  switch (VAR_18) {

  case 'a':

   FUNC_2((VAR_13, "\""));
   if (FUNC_6(VAR_13, VAR_14, VAR_16, VAR_13->ndo_snapend)) {
    FUNC_2((VAR_13, "\""));
    goto trunc;
   }
   FUNC_2((VAR_13, "\""));
   VAR_14 += VAR_16;
   VAR_16 = 0;
   break;

  case 'i':
  case 'l':
  case 'L':

   while (VAR_16 >= sizeof(VAR_21)) {
    if (!VAR_19)
     FUNC_2((VAR_13, ","));
    VAR_21 = FUNC_1(VAR_14);
    if (VAR_18 == 'i') {
     VAR_21 = FUNC_7(VAR_21);
     FUNC_2((VAR_13, "%s", FUNC_8(VAR_13, &VAR_21)));
    } else if (VAR_18 == 'L')
     FUNC_2((VAR_13, "%d", VAR_21));
    else
     FUNC_2((VAR_13, "%u", VAR_21));
    VAR_14 += sizeof(VAR_21);
    VAR_16 -= sizeof(VAR_21);
    VAR_19 = 0;
   }
   break;

  case 'p':

   while (VAR_16 >= 2*sizeof(VAR_21)) {
    if (!VAR_19)
     FUNC_2((VAR_13, ","));
    FUNC_9((char *)&VAR_21, (const char *)VAR_14, sizeof(VAR_21));
    FUNC_2((VAR_13, "(%s:", FUNC_8(VAR_13, &VAR_21)));
    VAR_14 += sizeof(VAR_21);
    FUNC_9((char *)&VAR_21, (const char *)VAR_14, sizeof(VAR_21));
    FUNC_2((VAR_13, "%s)", FUNC_8(VAR_13, &VAR_21)));
    VAR_14 += sizeof(VAR_21);
    VAR_16 -= 2*sizeof(VAR_21);
    VAR_19 = 0;
   }
   break;

  case 's':

   while (VAR_16 >= sizeof(VAR_22)) {
    if (!VAR_19)
     FUNC_2((VAR_13, ","));
    VAR_22 = FUNC_0(VAR_14);
    FUNC_2((VAR_13, "%u", VAR_22));
    VAR_14 += sizeof(VAR_22);
    VAR_16 -= sizeof(VAR_22);
    VAR_19 = 0;
   }
   break;

  case 'B':

   while (VAR_16 > 0) {
    if (!VAR_19)
     FUNC_2((VAR_13, ","));
    switch (*VAR_14) {
    case 0:
     FUNC_2((VAR_13, "N"));
     break;
    case 1:
     FUNC_2((VAR_13, "Y"));
     break;
    default:
     FUNC_2((VAR_13, "%u?", *VAR_14));
     break;
    }
    ++VAR_14;
    --VAR_16;
    VAR_19 = 0;
   }
   break;

  case 'b':
  case 'x':
  default:

   while (VAR_16 > 0) {
    if (!VAR_19)
     FUNC_2((VAR_13, VAR_18 == 'x' ? ":" : "."));
    if (VAR_18 == 'x')
     FUNC_2((VAR_13, "%02x", *VAR_14));
    else
     FUNC_2((VAR_13, "%u", *VAR_14));
    ++VAR_14;
    --VAR_16;
    VAR_19 = 0;
   }
   break;

  case '$':

   switch (VAR_15) {

   case 130:

    if (VAR_16 < 1) {
     FUNC_2((VAR_13, "ERROR: length < 1 bytes"));
     break;
    }
    VAR_15 = *VAR_14++;
    --VAR_16;
    FUNC_2((VAR_13, "%s", FUNC_11(VAR_9, ((void*)0), VAR_15)));
    break;

   case 129:

    if (VAR_16 < 1) {
     FUNC_2((VAR_13, "ERROR: length < 1 bytes"));
     break;
    }
    VAR_15 = *VAR_14++;
    --VAR_16;
    FUNC_2((VAR_13, "%s", FUNC_11(VAR_10, ((void*)0), VAR_15)));
    break;

   case 132:

    if (VAR_16 < 3) {
     FUNC_2((VAR_13, "ERROR: length < 3 bytes"));
     VAR_14 += VAR_16;
     VAR_16 = 0;
     break;
    }
    if (*VAR_14)
     FUNC_2((VAR_13, "[%s] ", FUNC_5(*VAR_14)));
    VAR_14++;
    if (*VAR_14 || *(VAR_14+1))
     FUNC_2((VAR_13, "%u/%u ", *VAR_14, *(VAR_14+1)));
    VAR_14 += 2;
    FUNC_2((VAR_13, "\""));
    if (FUNC_6(VAR_13, VAR_14, VAR_16 - 3, VAR_13->ndo_snapend)) {
     FUNC_2((VAR_13, "\""));
     goto trunc;
    }
    FUNC_2((VAR_13, "\""));
    VAR_14 += VAR_16 - 3;
    VAR_16 = 0;
    break;

   case 131:
       {
    int VAR_27;


    if (VAR_16 < 1) {
     FUNC_2((VAR_13, "ERROR: length < 1 bytes"));
     break;
    }
    VAR_27 = *VAR_14++;
    VAR_16--;
    if (VAR_27 == 0) {
     FUNC_2((VAR_13, "\""));
     if (FUNC_6(VAR_13, VAR_14, VAR_16, VAR_13->ndo_snapend)) {
      FUNC_2((VAR_13, "\""));
      goto trunc;
     }
     FUNC_2((VAR_13, "\""));
     VAR_14 += VAR_16;
     VAR_16 = 0;
     break;
    } else {
     FUNC_2((VAR_13, "%s ", FUNC_11(VAR_7, "hardware-type %u,", VAR_27)));
     while (VAR_16 > 0) {
      if (!VAR_19)
       FUNC_2((VAR_13, ":"));
      FUNC_2((VAR_13, "%02x", *VAR_14));
      ++VAR_14;
      --VAR_16;
      VAR_19 = 0;
     }
    }
    break;
       }

   case 135:
    while (VAR_16 >= 2) {
     VAR_24 = *VAR_14++;
     VAR_25 = *VAR_14++;
     VAR_16 -= 2;
     if (VAR_25 > VAR_16) {
      FUNC_2((VAR_13, "\n\t      %s SubOption %u, length %u: length goes past end of option",
         FUNC_11(VAR_6, "Unknown", VAR_24),
         VAR_24,
         VAR_25));
      VAR_14 += VAR_16;
      VAR_16 = 0;
      break;
     }
     FUNC_2((VAR_13, "\n\t      %s SubOption %u, length %u: ",
        FUNC_11(VAR_6, "Unknown", VAR_24),
        VAR_24,
        VAR_25));
     switch (VAR_24) {

     case 138:
     case 137:
     case 136:
      if (FUNC_6(VAR_13, VAR_14, VAR_25, VAR_13->ndo_snapend))
       goto trunc;
      break;

     default:
      FUNC_10(VAR_13, VAR_14, "\n\t\t", VAR_25);
     }

     VAR_16 -= VAR_25;
     VAR_14 += VAR_25;
    }
    break;

   case 134:
   case 133:
       {
    u_int VAR_28, VAR_29, VAR_30;


    if (VAR_16 < 5) {
     FUNC_2((VAR_13, "ERROR: length < 5 bytes"));
     VAR_14 += VAR_16;
     VAR_16 = 0;
     break;
    }
    while (VAR_16 > 0) {
     if (!VAR_19)
      FUNC_2((VAR_13, ","));
     VAR_28 = *VAR_14++;
     VAR_16--;

     if (VAR_28 > 32) {
      FUNC_2((VAR_13, "[ERROR: Mask width (%d) > 32]", VAR_28));
      VAR_14 += VAR_16;
      VAR_16 = 0;
      break;
     }
     VAR_29 = (VAR_28 + 7) / 8;

     if (VAR_16 < VAR_29 + 4) {
      FUNC_2((VAR_13, "[ERROR: Remaining length (%u) < %u bytes]", VAR_16, VAR_29 + 4));
      VAR_14 += VAR_16;
      VAR_16 = 0;
      break;
     }
     FUNC_2((VAR_13, "("));
     if (VAR_28 == 0)
      FUNC_2((VAR_13, "default"));
     else {
      for (VAR_30 = 0; VAR_30 < VAR_29 ; VAR_30++) {
       if (VAR_30 > 0)
        FUNC_2((VAR_13, "."));
       FUNC_2((VAR_13, "%d", *VAR_14++));
      }
      for (VAR_30 = VAR_29 ; VAR_30 < 4 ; VAR_30++)
       FUNC_2((VAR_13, ".0"));
      FUNC_2((VAR_13, "/%d", VAR_28));
     }
     FUNC_9((char *)&VAR_21, (const char *)VAR_14, sizeof(VAR_21));
     FUNC_2((VAR_13, ":%s)", FUNC_8(VAR_13, &VAR_21)));
     VAR_14 += sizeof(VAR_21);
     VAR_16 -= (VAR_29 + 4);
     VAR_19 = 0;
    }
    break;
       }

   case 128:
       {
    u_int VAR_31 = 1;

    VAR_19 = 1;
    if (VAR_16 < 2) {
     FUNC_2((VAR_13, "ERROR: length < 2 bytes"));
     VAR_14 += VAR_16;
     VAR_16 = 0;
     break;
    }
    while (VAR_16 > 0) {
     VAR_25 = *VAR_14++;
     VAR_16--;
     FUNC_2((VAR_13, "\n\t      "));
     FUNC_2((VAR_13, "instance#%u: ", VAR_31));
     if (VAR_25 == 0) {
      FUNC_2((VAR_13, "ERROR: suboption length must be non-zero"));
      VAR_14 += VAR_16;
      VAR_16 = 0;
      break;
     }
     if (VAR_16 < VAR_25) {
      FUNC_2((VAR_13, "ERROR: invalid option"));
      VAR_14 += VAR_16;
      VAR_16 = 0;
      break;
     }
     FUNC_2((VAR_13, "\""));
     if (FUNC_6(VAR_13, VAR_14, VAR_25, VAR_13->ndo_snapend)) {
      FUNC_2((VAR_13, "\""));
      goto trunc;
     }
     FUNC_2((VAR_13, "\""));
     FUNC_2((VAR_13, ", length %d", VAR_25));
     VAR_31++;
     VAR_16 -= VAR_25;
     VAR_14 += VAR_25;
    }
    break;
       }

   default:
    FUNC_2((VAR_13, "[unknown special tag %u, size %u]",
       VAR_15, VAR_16));
    VAR_14 += VAR_16;
    VAR_16 = 0;
    break;
   }
   break;
  }

  if (VAR_16) {
   FUNC_2((VAR_13, "\n\t  trailing data length %u", VAR_16));
   VAR_14 += VAR_16;
  }
 }
 return;
trunc:
 FUNC_2((VAR_13, "|[rfc1048]"));
}
