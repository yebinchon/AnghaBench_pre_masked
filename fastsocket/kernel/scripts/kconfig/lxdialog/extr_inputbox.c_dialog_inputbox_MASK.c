
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_7__ {int atr; } ;
struct TYPE_6__ {int atr; } ;
struct TYPE_5__ {int atr; } ;
struct TYPE_8__ {TYPE_3__ inputbox; TYPE_2__ border; TYPE_1__ dialog; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (int *) ;
 char* VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_1 (int *,int,int,int,int,int ,int ) ;
 int FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,int,char) ;
 int * FUNC_10 (int,int,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,char const*,int,int,int) ;
 int FUNC_14 (int *,int,int,int) ;
 int FUNC_15 (int *,char const*,int) ;
 int VAR_10 ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int,int) ;
 int FUNC_23 (int *) ;

int FUNC_24(const char *VAR_11, const char *VAR_12, int VAR_13, int VAR_14,
                    const char *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22 = 0, VAR_23 = 0, VAR_24 = 0, VAR_25 = -1;
 char *VAR_26 = VAR_8;
 WINDOW *VAR_27;

 if (!VAR_15)
  VAR_26[0] = '\0';
 else
  FUNC_16(VAR_26, VAR_15);

do_resize:
 if (FUNC_5(VAR_10) <= (VAR_13 - 2))
  return -VAR_4;
 if (FUNC_4(VAR_10) <= (VAR_14 - 2))
  return -VAR_4;


 VAR_17 = (VAR_3 - VAR_14) / 2;
 VAR_18 = (VAR_5 - VAR_13) / 2;

 FUNC_2(VAR_10, VAR_18, VAR_17, VAR_13, VAR_14);

 VAR_27 = FUNC_10(VAR_13, VAR_14, VAR_18, VAR_17);
 FUNC_8(VAR_27, VAR_7);

 FUNC_1(VAR_27, 0, 0, VAR_13, VAR_14,
   VAR_9.dialog.atr, VAR_9.border.atr);
 FUNC_20(VAR_27, VAR_9.border.atr);
 FUNC_9(VAR_27, VAR_13 - 3, 0, VAR_1);
 for (VAR_16 = 0; VAR_16 < VAR_14 - 2; VAR_16++)
  FUNC_18(VAR_27, VAR_0);
 FUNC_20(VAR_27, VAR_9.dialog.atr);
 FUNC_18(VAR_27, VAR_2);

 FUNC_15(VAR_27, VAR_11, VAR_14);

 FUNC_20(VAR_27, VAR_9.dialog.atr);
 FUNC_13(VAR_27, VAR_12, VAR_14 - 2, 1, 3);


 VAR_21 = VAR_14 - 6;
 FUNC_6(VAR_27, VAR_18, VAR_17);
 VAR_19 = VAR_18 + 2;
 VAR_20 = (VAR_14 - VAR_21) / 2;
 FUNC_1(VAR_27, VAR_18 + 1, VAR_20 - 1, 3, VAR_21 + 2,
   VAR_9.dialog.atr, VAR_9.border.atr);

 FUNC_14(VAR_27, VAR_13, VAR_14, 0);


 FUNC_22(VAR_27, VAR_19, VAR_20);
 FUNC_20(VAR_27, VAR_9.inputbox.atr);

 VAR_22 = FUNC_17(VAR_26);

 if (VAR_22 >= VAR_21) {
  VAR_23 = VAR_22 - VAR_21 + 1;
  VAR_22 = VAR_21 - 1;
  for (VAR_16 = 0; VAR_16 < VAR_21 - 1; VAR_16++)
   FUNC_18(VAR_27, VAR_26[VAR_23 + VAR_16]);
 } else {
  FUNC_19(VAR_27, VAR_26);
 }

 FUNC_22(VAR_27, VAR_19, VAR_20 + VAR_22);

 FUNC_23(VAR_27);

 while (VAR_24 != 133) {
  VAR_24 = FUNC_21(VAR_27);

  if (VAR_25 == -1) {
   switch (VAR_24) {
   case 128:
   case 129:
   case 134:
    break;
   case 132:
    continue;
   case 130:
    continue;
   case 135:
   case 127:
    if (VAR_22 || VAR_23) {
     FUNC_20(VAR_27, VAR_9.inputbox.atr);
     if (!VAR_22) {
      VAR_23 = VAR_23 < VAR_21 - 1 ? 0 : VAR_23 - (VAR_21 - 1);
      FUNC_22(VAR_27, VAR_19, VAR_20);
      for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++)
       FUNC_18(VAR_27,
              VAR_26[VAR_23 + VAR_22 + VAR_16] ?
              VAR_26[VAR_23 + VAR_22 + VAR_16] : ' ');
      VAR_22 = FUNC_17(VAR_26) - VAR_23;
     } else
      VAR_22--;
     VAR_26[VAR_23 + VAR_22] = '\0';
     FUNC_9(VAR_27, VAR_19, VAR_22 + VAR_20, ' ');
     FUNC_22(VAR_27, VAR_19, VAR_22 + VAR_20);
     FUNC_23(VAR_27);
    }
    continue;
   default:
    if (VAR_24 < 0x100 && FUNC_7(VAR_24)) {
     if (VAR_23 + VAR_22 < VAR_6) {
      FUNC_20(VAR_27, VAR_9.inputbox.atr);
      VAR_26[VAR_23 + VAR_22] = VAR_24;
      VAR_26[VAR_23 + VAR_22 + 1] = '\0';
      if (VAR_22 == VAR_21 - 1) {
       VAR_23++;
       FUNC_22(VAR_27, VAR_19, VAR_20);
       for (VAR_16 = 0; VAR_16 < VAR_21 - 1; VAR_16++)
        FUNC_18(VAR_27, VAR_26 [VAR_23 + VAR_16]);
      } else {
       FUNC_22(VAR_27, VAR_19, VAR_22++ + VAR_20);
       FUNC_18(VAR_27, VAR_24);
      }
      FUNC_23(VAR_27);
     } else
      FUNC_3();
     continue;
    }
   }
  }
  switch (VAR_24) {
  case 'O':
  case 'o':
   FUNC_0(VAR_27);
   return 0;
  case 'H':
  case 'h':
   FUNC_0(VAR_27);
   return 1;
  case 129:
  case 132:
   switch (VAR_25) {
   case -1:
    VAR_25 = 1;
    FUNC_14(VAR_27, VAR_13, VAR_14, 1);
    break;
   case 0:
    VAR_25 = -1;
    FUNC_14(VAR_27, VAR_13, VAR_14, 0);
    FUNC_22(VAR_27, VAR_19, VAR_20 + VAR_22);
    FUNC_23(VAR_27);
    break;
   case 1:
    VAR_25 = 0;
    FUNC_14(VAR_27, VAR_13, VAR_14, 0);
    break;
   }
   break;
  case 128:
  case 134:
  case 130:
   switch (VAR_25) {
   case -1:
    VAR_25 = 0;
    FUNC_14(VAR_27, VAR_13, VAR_14, 0);
    break;
   case 0:
    VAR_25 = 1;
    FUNC_14(VAR_27, VAR_13, VAR_14, 1);
    break;
   case 1:
    VAR_25 = -1;
    FUNC_14(VAR_27, VAR_13, VAR_14, 0);
    FUNC_22(VAR_27, VAR_19, VAR_20 + VAR_22);
    FUNC_23(VAR_27);
    break;
   }
   break;
  case ' ':
  case '\n':
   FUNC_0(VAR_27);
   return (VAR_25 == -1 ? 0 : VAR_25);
  case 'X':
  case 'x':
   VAR_24 = 133;
   break;
  case 133:
   VAR_24 = FUNC_11(VAR_27);
   break;
  case 131:
   FUNC_0(VAR_27);
   FUNC_12();
   goto do_resize;
  }
 }

 FUNC_0(VAR_27);
 return 133;
}
