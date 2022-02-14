
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;


 char* FUNC_0 (int,int,char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__**,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__*,scalar_t__**,int,int ) ;
 int FUNC_7 (scalar_t__**,int,int,int ) ;
 int * FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*) ;
 scalar_t__** FUNC_10 () ;
 scalar_t__* FUNC_11 (int ) ;
 int VAR_9 ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (char) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_15(int VAR_10, int VAR_11, int VAR_12)
{
    Char *VAR_13;
    int VAR_14 = 0;
    int VAR_15 = 0;

    if (VAR_11 == 0)
 return;

    if ((VAR_13 = FUNC_11(VAR_2)) != VAR_1) {
 while (*VAR_13) {
     if (!FUNC_1(*VAR_13)) {
  VAR_14 = 0;
  break;
     }
     VAR_14 = VAR_14 * 10 + *VAR_13++ - '0';
 }
 if ((VAR_14 > 0) && (VAR_11 > VAR_14) && VAR_12)
     VAR_14 = VAR_11;
 else
     VAR_14 = 0;
    }

    if (VAR_14 == 0 && (VAR_13 = FUNC_11(VAR_3)) != VAR_1) {
 int VAR_16;

 while (*VAR_13) {
     if (!FUNC_1(*VAR_13)) {
  VAR_15 = 0;
  break;
     }
     VAR_15 = VAR_15 * 10 + *VAR_13++ - '0';
 }
 if (VAR_15 != 0 && VAR_10 != VAR_5)
     VAR_16 = FUNC_4(FUNC_10(), VAR_11, VAR_4);
 else
     VAR_16 = VAR_11;
 if ((VAR_15 > 0) && (VAR_16 > VAR_15) && VAR_12)
     VAR_15 = VAR_16;
 else
     VAR_15 = 0;
    }


    if (VAR_14 || VAR_15) {
 char VAR_17, *VAR_18;
 const char *VAR_19;
 int VAR_20;

 if (VAR_14) {
     VAR_19 = FUNC_0(30, 5, "items");
     VAR_20 = VAR_14;
 }
 else {
     VAR_19 = FUNC_0(30, 6, "rows");
     VAR_20 = VAR_15;
 }

 VAR_18 = FUNC_9(VAR_19);
 FUNC_2(VAR_18, VAR_9);
 FUNC_12(FUNC_0(30, 7, "There are %d %s, list them anyway? [n/y] "),
  VAR_20, VAR_18);
 FUNC_3(VAR_18);
 FUNC_5();

 (void) FUNC_14(VAR_0, &VAR_17, 1);
 FUNC_12("%c\r\n", VAR_17);




 if (FUNC_8(FUNC_0(30, 13, "Yy"), VAR_17) == ((void*)0))
     return;
    }

    if (VAR_10 != VAR_6)
 FUNC_7(FUNC_10(), VAR_11, sizeof(Char *), VAR_8);
    if (VAR_10 != VAR_5)
 FUNC_6(VAR_1, FUNC_10(), VAR_11, VAR_4);
    else {




 int VAR_21;
 Char **VAR_22 = FUNC_10();

 for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++) {
     FUNC_12("%S", VAR_22[VAR_21]);
     if (VAR_7)
  FUNC_13('\r');
     FUNC_13('\n');
 }
    }
}
