
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_4__ {int output; scalar_t__ text_only; } ;
struct TYPE_3__ {scalar_t__ colors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 int FUNC_0 (char const) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int) ;
 TYPE_2__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_3 (short,short) ;
 int FUNC_4 (char,int ) ;
 int FUNC_5 (int *,int,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char const*,int*) ;
 scalar_t__ FUNC_8 (short,short*,short*) ;
 int FUNC_9 (int *,int) ;

void
FUNC_10(WINDOW *VAR_14, const char *VAR_15, int VAR_16, chtype *VAR_17)
{
    int VAR_18, VAR_19;
    int VAR_20, VAR_21 = 0;
    int VAR_22, VAR_23;
    int VAR_24 = 0;
    bool VAR_25;
    bool VAR_26 = VAR_9;
    chtype VAR_27;




    if (VAR_12.text_only) {
 VAR_18 = VAR_22 = 0;
 VAR_19 = VAR_23 = 0;
    } else {
 FUNC_5(VAR_14, VAR_18, VAR_19);
    }
    while (VAR_16 > 0 && (*VAR_15 != '\0')) {
 if (VAR_13.colors) {
     while (FUNC_6(VAR_15)) {
  int VAR_28;

  VAR_15 += 2;
  switch (VAR_28 = FUNC_0(*VAR_15)) {
  case 'B':
      *VAR_17 &= ~VAR_1;
      break;
  case 'b':
      *VAR_17 |= VAR_1;
      break;
  case 'R':
      *VAR_17 &= ~VAR_4;
      break;
  case 'r':
      *VAR_17 |= VAR_4;
      break;
  case 'U':
      *VAR_17 &= ~VAR_5;
      break;
  case 'u':
      *VAR_17 |= VAR_5;
      break;
  case 'n':
      *VAR_17 = VAR_3;
      break;
  }
  ++VAR_15;
     }
 }
 if (VAR_26 || *VAR_15 == '\n' || *VAR_15 == '\0')
     break;
 VAR_27 = (*VAR_17) & VAR_0;
 VAR_25 = (FUNC_0(*VAR_15) == VAR_10);
 if (VAR_12.text_only) {
     VAR_20 = VAR_22;
     VAR_21 = VAR_23;
 } else {
     if (VAR_25) {
  FUNC_5(VAR_14, VAR_20, VAR_21);
  (void) VAR_20;
     }
 }
 if (VAR_12.text_only) {
     int VAR_29 = FUNC_0(*VAR_15++);
     if (VAR_25) {
  while ((VAR_23++) % 8) {
      FUNC_4(' ', VAR_12.output);
  }
     } else {
  FUNC_4(VAR_29, VAR_12.output);
  VAR_23++;
     }
 } else {
     (void) FUNC_9(VAR_14, FUNC_0(*VAR_15++) | VAR_27);
     FUNC_5(VAR_14, VAR_22, VAR_23);
 }
 if (VAR_25 && (VAR_22 == VAR_18))
     VAR_24 += (VAR_23 - VAR_21);
 if ((VAR_22 != VAR_18) ||
     (VAR_23 >= (VAR_16 + VAR_24 + VAR_19)



     )) {
     VAR_26 = VAR_11;
 }
    }
    if (VAR_12.text_only) {
 FUNC_4('\n', VAR_12.output);
    }
}
