
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_2__ {scalar_t__* help_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__*,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *,int,int) ;

void
FUNC_8(WINDOW *VAR_4, bool VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8;

    if (VAR_3.help_line != 0
 && VAR_3.help_line[0] != 0
 && (VAR_8 = FUNC_4(VAR_4) - 1) > 0) {
 chtype VAR_9 = VAR_0;
 int VAR_10 = FUNC_0(VAR_3.help_line);
 int VAR_11 = VAR_5 ? (VAR_1 + VAR_2) : 0;
 int VAR_12 = (FUNC_3(VAR_4) - VAR_11 - 2);
 int VAR_13 = FUNC_1(VAR_3.help_line) + 2;

 if (VAR_13 < VAR_12) {
     FUNC_5(VAR_4, VAR_7, VAR_6);
     VAR_11 = VAR_5 ? VAR_1 : 0;
     (void) FUNC_7(VAR_4, VAR_8, VAR_11 + (VAR_12 - VAR_13) / 2);
     FUNC_6(VAR_4, '[');
     FUNC_2(VAR_4, VAR_3.help_line, VAR_10, &VAR_9);
     FUNC_6(VAR_4, ']');
     FUNC_7(VAR_4, VAR_7, VAR_6);
 }
    }
}
