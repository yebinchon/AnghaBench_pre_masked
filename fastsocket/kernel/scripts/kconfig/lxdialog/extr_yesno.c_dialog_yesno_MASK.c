
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {int atr; } ;
struct TYPE_4__ {int atr; } ;
struct TYPE_6__ {TYPE_2__ dialog; TYPE_1__ border; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_7 ;
 int FUNC_1 (int *,int ,int ,int,int,int ,int ) ;
 int FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int ,int ) ;
 int * FUNC_7 (int,int,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,char const*,int,int,int) ;
 int FUNC_11 (int *,int,int,int) ;
 int FUNC_12 (int *,char const*,int) ;
 int VAR_8 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(const char *VAR_9, const char *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0, VAR_17 = 0;
 WINDOW *VAR_18;

do_resize:
 if (FUNC_4(VAR_8) < (VAR_11 + 4))
  return -VAR_4;
 if (FUNC_3(VAR_8) < (VAR_12 + 4))
  return -VAR_4;


 VAR_14 = (VAR_3 - VAR_12) / 2;
 VAR_15 = (VAR_5 - VAR_11) / 2;

 FUNC_2(VAR_8, VAR_15, VAR_14, VAR_11, VAR_12);

 VAR_18 = FUNC_7(VAR_11, VAR_12, VAR_15, VAR_14);
 FUNC_5(VAR_18, VAR_6);

 FUNC_1(VAR_18, 0, 0, VAR_11, VAR_12,
   VAR_7.dialog.atr, VAR_7.border.atr);
 FUNC_14(VAR_18, VAR_7.border.atr);
 FUNC_6(VAR_18, VAR_11 - 3, 0, VAR_1);
 for (VAR_13 = 0; VAR_13 < VAR_12 - 2; VAR_13++)
  FUNC_13(VAR_18, VAR_0);
 FUNC_14(VAR_18, VAR_7.dialog.atr);
 FUNC_13(VAR_18, VAR_2);

 FUNC_12(VAR_18, VAR_9, VAR_12);

 FUNC_14(VAR_18, VAR_7.dialog.atr);
 FUNC_10(VAR_18, VAR_10, VAR_12 - 2, 1, 3);

 FUNC_11(VAR_18, VAR_11, VAR_12, 0);

 while (VAR_16 != 132) {
  VAR_16 = FUNC_15(VAR_18);
  switch (VAR_16) {
  case 'Y':
  case 'y':
   FUNC_0(VAR_18);
   return 0;
  case 'N':
  case 'n':
   FUNC_0(VAR_18);
   return 1;

  case 128:
  case 131:
  case 129:
   VAR_17 = ((VAR_16 == 131 ? --VAR_17 : ++VAR_17) < 0) ? 1 : (VAR_17 > 1 ? 0 : VAR_17);

   FUNC_11(VAR_18, VAR_11, VAR_12, VAR_17);
   FUNC_16(VAR_18);
   break;
  case ' ':
  case '\n':
   FUNC_0(VAR_18);
   return VAR_17;
  case 132:
   VAR_16 = FUNC_8(VAR_18);
   break;
  case 130:
   FUNC_0(VAR_18);
   FUNC_9();
   goto do_resize;
  }
 }

 FUNC_0(VAR_18);
 return VAR_16;
}
