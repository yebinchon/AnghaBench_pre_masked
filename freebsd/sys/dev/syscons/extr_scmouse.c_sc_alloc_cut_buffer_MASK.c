
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_3__ {int xsize; int ysize; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;

void
FUNC_2(scr_stat *VAR_5, int VAR_6)
{
    u_char *VAR_7;

    if ((VAR_3 == ((void*)0))
 || (VAR_4 < VAR_5->xsize * VAR_5->ysize + 1)) {
 VAR_7 = VAR_3;
 VAR_3 = ((void*)0);
 if (VAR_7 != ((void*)0))
     FUNC_0(VAR_7, VAR_0);
 VAR_4 = VAR_5->xsize * VAR_5->ysize + 1;
 VAR_7 = (u_char *)FUNC_1(VAR_4,
        VAR_0, (VAR_6) ? VAR_2 : VAR_1);
 if (VAR_7 != ((void*)0))
     VAR_7[0] = '\0';
 VAR_3 = VAR_7;
    }
}
