
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
typedef int xo_handle_t ;
struct TYPE_3__ {int xfi_flags; char xfi_ftype; int xfi_fnum; } ;
typedef TYPE_1__ xo_field_info_t ;
typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_13 ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 int FUNC_2 (char const*) ;
 int VAR_14 ;

__attribute__((used)) static const char *
FUNC_3 (xo_handle_t *VAR_15, const char *VAR_16,
  const char *VAR_17, xo_field_info_t *VAR_18)
{
    const char *VAR_19;
    unsigned VAR_20 = 0;
    xo_xff_flags_t VAR_21 = 0;
    uint8_t VAR_22 = 0;

    for (VAR_19 = VAR_17; VAR_19 && *VAR_19; VAR_19++) {
 if (*VAR_19 == ':' || *VAR_19 == '/' || *VAR_19 == '}')
     break;

 if (*VAR_19 == '\\') {
     if (VAR_19[1] == '\0') {
  FUNC_0(VAR_15, "backslash at the end of string");
  return ((void*)0);
     }


     VAR_19 += 1;
     continue;
 }

 if (*VAR_19 == ',') {
     const char *VAR_23;
     for (VAR_23 = ++VAR_19; *VAR_23; VAR_23++)
  if (*VAR_23 == ':' || *VAR_23 == '/' || *VAR_23 == '}' || *VAR_23 == ',')
      break;

     ssize_t VAR_24 = VAR_23 - VAR_19;
     if (VAR_24 > 0) {
  xo_xff_flags_t VAR_25;

  VAR_25 = FUNC_1(VAR_14, VAR_19, VAR_24);
  if (VAR_25)
      VAR_20 = VAR_25;
  else {
      VAR_25 = FUNC_1(VAR_13, VAR_19, VAR_24);
      if (VAR_25)
   VAR_21 |= VAR_25;
      else
   FUNC_0(VAR_15, "unknown keyword ignored: '%.*s'",
       VAR_24, VAR_19);
  }
     }

     VAR_19 = VAR_23 - 1;
     continue;
 }

 switch (*VAR_19) {
 case 'C':
 case 'D':
 case 'E':
 case 'G':
 case 'L':
 case 'N':
 case 'P':
 case 'T':
 case 'U':
 case 'V':
 case 'W':
 case '[':
 case ']':
     if (VAR_20 != 0) {
  FUNC_0(VAR_15, "field descriptor uses multiple types: '%s'",
      FUNC_2(VAR_16));
  return ((void*)0);
     }
     VAR_20 = *VAR_19;
     break;

 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
     VAR_22 = (VAR_22 * 10) + (*VAR_19 - '0');
     break;

 case 'a':
     VAR_21 |= VAR_0;
     break;

 case 'c':
     VAR_21 |= VAR_1;
     break;

 case 'd':
     VAR_21 |= VAR_2;
     break;

 case 'e':
     VAR_21 |= VAR_3;
     break;

 case 'g':
     VAR_21 |= VAR_4;
     break;

 case 'h':
     VAR_21 |= VAR_6;
     break;

 case 'k':
     VAR_21 |= VAR_7;
     break;

 case 'l':
     VAR_21 |= VAR_8;
     break;

 case 'n':
     VAR_21 |= VAR_9;
     break;

 case 'p':
     VAR_21 |= VAR_5;
     break;

 case 'q':
     VAR_21 |= VAR_10;
     break;

 case 't':
     VAR_21 |= VAR_11;
     break;

 case 'w':
     VAR_21 |= VAR_12;
     break;

 default:
     FUNC_0(VAR_15, "field descriptor uses unknown modifier: '%s'",
         FUNC_2(VAR_16));






     return ((void*)0);
 }

 if (VAR_20 == 'N' || VAR_20 == 'U') {
     if (VAR_21 & VAR_1) {
  FUNC_0(VAR_15, "colon modifier on 'N' or 'U' field ignored: "
      "'%s'", FUNC_2(VAR_16));
  VAR_21 &= ~VAR_1;
     }
 }
    }

    VAR_18->xfi_flags = VAR_21;
    VAR_18->xfi_ftype = VAR_20 ?: 'V';
    VAR_18->xfi_fnum = VAR_22;

    return VAR_19;
}
