
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ strspn ;
typedef int chtype ;
typedef int WINDOW ;
typedef int HOTKEY ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int* FUNC_3 (char*) ;

 int VAR_6 ;

 int FUNC_4 (char const**) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int,int) ;

__attribute__((used)) static void
FUNC_8(WINDOW *VAR_7, char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    int VAR_13;
    HOTKEY VAR_14 = 129;
    const int *VAR_15 = FUNC_3(VAR_8);
    int VAR_16 = FUNC_2(VAR_8);
    chtype VAR_17 = (VAR_12
         ? VAR_2
         : VAR_3);
    chtype VAR_18 = (VAR_12
    ? VAR_4
    : VAR_5);

    (void) FUNC_7(VAR_7, VAR_10, VAR_11);
    FUNC_1(VAR_7, VAR_12
  ? VAR_0
  : VAR_1);
    (void) FUNC_6(VAR_7, "<");
    FUNC_1(VAR_7, VAR_18);
    for (VAR_13 = 0; VAR_13 < VAR_16; ++VAR_13) {
 int VAR_19;
 int VAR_20 = VAR_15[VAR_13];
 int VAR_21 = VAR_15[VAR_13 + 1];

 switch (VAR_14) {
 case 129:
     VAR_19 = FUNC_0(VAR_8[VAR_20]);






     if (VAR_19 == VAR_9) {
  FUNC_1(VAR_7, VAR_17);
  VAR_14 = 128;
     }
     break;
 case 128:
     FUNC_1(VAR_7, VAR_18);
     VAR_14 = VAR_6;
     break;
 default:
     break;
 }
 FUNC_5(VAR_7, VAR_8 + VAR_20, VAR_21 - VAR_20);
    }
    FUNC_1(VAR_7, VAR_12
  ? VAR_0
  : VAR_1);
    (void) FUNC_6(VAR_7, ">");
    (void) FUNC_7(VAR_7, VAR_10, VAR_11 + ((int) (strspn) (VAR_8, " ")) + 1);
}
