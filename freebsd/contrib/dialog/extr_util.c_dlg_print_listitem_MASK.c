
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chtype ;
typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int* FUNC_1 (char const*) ;
 int* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 (int *,char const*,int const,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,char const*,int const) ;

void
FUNC_7(WINDOW *VAR_7,
     const char *VAR_8,
     int VAR_9,
     bool VAR_10,
     int VAR_11)
{
    chtype VAR_12 = VAR_0;
    int VAR_13;
    const int *VAR_14;
    chtype VAR_15[4];

    if (VAR_8 == 0)
 VAR_8 = "";

    if (VAR_10) {
 const int *VAR_16 = FUNC_2(VAR_8);
 VAR_15[3] = VAR_5;
 VAR_15[2] = VAR_4;
 VAR_15[1] = VAR_6;
 VAR_15[0] = VAR_3;

 FUNC_0(VAR_7, VAR_11 ? VAR_15[3] : VAR_15[2]);
 (void) FUNC_6(VAR_7, VAR_8, VAR_16[1]);

 if ((int) FUNC_5(VAR_8) > VAR_16[1]) {
     VAR_13 = FUNC_3(VAR_8, VAR_9, 1);
     if (VAR_13 > 1) {
  FUNC_0(VAR_7, VAR_11 ? VAR_15[1] : VAR_15[0]);
  (void) FUNC_6(VAR_7,
    VAR_8 + VAR_16[1],
    VAR_16[VAR_13] - VAR_16[1]);
     }
 }
    } else {
 VAR_15[1] = VAR_2;
 VAR_15[0] = VAR_1;

 VAR_14 = FUNC_1(VAR_8);
 VAR_13 = FUNC_3(VAR_8, VAR_9, 0);

 if (VAR_13 > 0) {
     FUNC_0(VAR_7, VAR_11 ? VAR_15[1] : VAR_15[0]);
     FUNC_4(VAR_7, VAR_8, VAR_14[VAR_13], &VAR_12);
 }
    }
}
