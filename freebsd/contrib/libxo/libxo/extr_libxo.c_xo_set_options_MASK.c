
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ xo_xof_flags_t ;
struct TYPE_10__ {int xo_style; void* xo_indent_by; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_2 (int) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;

int
FUNC_16 (xo_handle_t *VAR_17, const char *VAR_18)
{
    char *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23;
    int VAR_24 = -1, VAR_25, VAR_26 = 0;
    ssize_t VAR_27;
    xo_xof_flags_t VAR_28;

    if (VAR_18 == ((void*)0))
 return 0;

    VAR_17 = FUNC_8(VAR_17);
    if (*VAR_18 == ':') {
 ssize_t VAR_29;

 for (VAR_18++ ; *VAR_18; VAR_18++) {
     switch (*VAR_18) {
     case 'c':
  FUNC_1(VAR_17, VAR_0);
  break;

     case 'f':
  FUNC_1(VAR_17, VAR_1);
  break;

     case 'F':
  FUNC_1(VAR_17, VAR_2);
  break;

     case 'g':
  FUNC_1(VAR_17, VAR_5);
  break;

     case 'H':
  VAR_17->xo_style = VAR_13;
  break;

     case 'I':
  FUNC_1(VAR_17, VAR_3);
  break;

     case 'i':
  VAR_29 = FUNC_7(VAR_18 + 1, "0123456789");
  if (VAR_29 > 0) {
      VAR_17->xo_indent_by = FUNC_3(VAR_18 + 1);
      VAR_18 += VAR_29 - 1;
  }
  break;

     case 'J':
  VAR_17->xo_style = VAR_14;
  break;

     case 'k':
  FUNC_1(VAR_17, VAR_4);
  break;

     case 'n':
  FUNC_1(VAR_17, VAR_6);
  break;

     case 'P':
  FUNC_1(VAR_17, VAR_7);
  break;

     case 'T':
  VAR_17->xo_style = VAR_15;
  break;

     case 'U':
  FUNC_1(VAR_17, VAR_9);
  break;

     case 'u':
  FUNC_1(VAR_17, VAR_8);
  break;

     case 'W':
  FUNC_1(VAR_17, VAR_10);
  break;

     case 'X':
  VAR_17->xo_style = VAR_16;
  break;

     case 'x':
  FUNC_1(VAR_17, VAR_11);
  break;
     }
 }
 return 0;
    }

    VAR_27 = FUNC_6(VAR_18) + 1;
    VAR_23 = FUNC_2(VAR_27);
    FUNC_4(VAR_23, VAR_18, VAR_27);

    for (VAR_19 = VAR_23, VAR_20 = VAR_19 + VAR_27 - 1; VAR_19 && VAR_19 < VAR_20; VAR_19 = VAR_22) {
 VAR_22 = FUNC_5(VAR_19, ',');
 if (VAR_22)
     *VAR_22++ = '\0';

 VAR_21 = FUNC_5(VAR_19, '=');
 if (VAR_21)
     *VAR_21++ = '\0';

 if (FUNC_14("colors", VAR_19)) {
     FUNC_13(VAR_17, VAR_21);
     continue;
 }





 VAR_25 = FUNC_12(VAR_19);
 if (VAR_25 >= 0 && VAR_25 != VAR_12) {
     if (VAR_24 >= 0)
  FUNC_15("ignoring multiple styles: '%s'", VAR_19);
     else
  VAR_24 = VAR_25;
 } else {
     VAR_28 = FUNC_11(VAR_19);
     if (VAR_28 != 0)
  FUNC_1(VAR_17, VAR_28);
     else if (FUNC_14(VAR_19, "no-color"))
  FUNC_0(VAR_17, VAR_0);
     else if (FUNC_14(VAR_19, "indent")) {
  if (VAR_21)
      VAR_17->xo_indent_by = FUNC_3(VAR_21);
  else
      FUNC_10(VAR_17, "missing value for indent option");
     } else if (FUNC_14(VAR_19, "encoder")) {
  if (VAR_21 == ((void*)0))
      FUNC_10(VAR_17, "missing value for encoder option");
  else {
      VAR_26 = FUNC_9(VAR_17, VAR_21);
      if (VAR_26)
   FUNC_15("error initializing encoder: %s", VAR_21);
  }

     } else {
  FUNC_15("unknown libxo option value: '%s'", VAR_19);
  VAR_26 = -1;
     }
 }
    }

    if (VAR_24 > 0)
 VAR_17->xo_style= VAR_24;

    return VAR_26;
}
