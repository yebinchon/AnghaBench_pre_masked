
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NCURSES_COLOR_T ;



__attribute__((used)) static void
FUNC_0(int VAR_0, int VAR_1, int VAR_2, NCURSES_COLOR_T *VAR_3, NCURSES_COLOR_T *VAR_4, NCURSES_COLOR_T *VAR_5)

{
    int VAR_6, VAR_7, VAR_8;

    if ((VAR_6 = VAR_1 < VAR_0 ? VAR_1 : VAR_0) > VAR_2)
 VAR_6 = VAR_2;
    if ((VAR_7 = VAR_1 > VAR_0 ? VAR_1 : VAR_0) < VAR_2)
 VAR_7 = VAR_2;


    *VAR_4 = (NCURSES_COLOR_T) ((VAR_6 + VAR_7) / 20);

    if (VAR_6 == VAR_7) {
 *VAR_3 = 0;
 *VAR_5 = 0;
 return;
    }


    if (*VAR_4 < 50)
 *VAR_5 = (NCURSES_COLOR_T) (((VAR_7 - VAR_6) * 100) / (VAR_7 + VAR_6));
    else
 *VAR_5 = (NCURSES_COLOR_T) (((VAR_7 - VAR_6) * 100) / (2000 - VAR_7 - VAR_6));


    if (VAR_0 == VAR_7)
 VAR_8 = (NCURSES_COLOR_T) (120 + ((VAR_1 - VAR_2) * 60) / (VAR_7 - VAR_6));
    else if (VAR_1 == VAR_7)
 VAR_8 = (NCURSES_COLOR_T) (240 + ((VAR_2 - VAR_0) * 60) / (VAR_7 - VAR_6));
    else
 VAR_8 = (NCURSES_COLOR_T) (360 + ((VAR_0 - VAR_1) * 60) / (VAR_7 - VAR_6));

    *VAR_3 = (NCURSES_COLOR_T) (VAR_8 % 360);
}
