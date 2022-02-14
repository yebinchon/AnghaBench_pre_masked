
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int text_width; int text_height; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char const*,char const*,int*,int*,int,int) ;

void
FUNC_2(const char *VAR_3,
       const char *VAR_4,
       int *VAR_5,
       int *VAR_6,
       int VAR_7,
       int VAR_8)
{
    FUNC_0(("# dlg_auto_size(%d,%d) limits %d,%d\n",
        *VAR_5, *VAR_6,
        VAR_7, VAR_8));

    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

    if (*VAR_6 > VAR_0) {
 (*VAR_5)++;
 *VAR_6 = VAR_0;
    }

    if (*VAR_5 > VAR_1) {
 *VAR_5 = VAR_1;
    }
    FUNC_0(("# ...dlg_auto_size(%d,%d) also %d,%d\n",
        *VAR_5, *VAR_6,
        VAR_2.text_height, VAR_2.text_width));
}
