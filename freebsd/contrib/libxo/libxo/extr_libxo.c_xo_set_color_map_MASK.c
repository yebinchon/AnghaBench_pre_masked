
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* xo_color_map_fg; int* xo_color_map_bg; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void
FUNC_6 (xo_handle_t *VAR_2, char *VAR_3)
{
    if (FUNC_5())
 return;

    char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    ssize_t VAR_8 = VAR_3 ? FUNC_3(VAR_3) + 1 : 0;
    int VAR_9 = 1, VAR_10, VAR_11;

    for (VAR_4 = VAR_3, VAR_5 = VAR_4 + VAR_8 - 1; VAR_4 && *VAR_4 && VAR_4 < VAR_5; VAR_4 = VAR_7) {
 VAR_7 = FUNC_2(VAR_4, '+');
 if (VAR_7)
     *VAR_7++ = '\0';

 VAR_6 = FUNC_2(VAR_4, '/');
 if (VAR_6)
     *VAR_6++ = '\0';

 VAR_10 = *VAR_4 ? FUNC_4(VAR_4) : -1;
 VAR_11 = (VAR_6 && *VAR_6) ? FUNC_4(VAR_6) : -1;


 VAR_2->xo_color_map_fg[VAR_9] = (VAR_10 < 0) ? VAR_9 : VAR_10;
 VAR_2->xo_color_map_bg[VAR_9] = (VAR_11 < 0) ? VAR_9 : VAR_11;


 if (++VAR_9 > VAR_1)
     break;
    }


    if (VAR_9 > 1)
 FUNC_1(VAR_2, VAR_0);
    else
 FUNC_0(VAR_2, VAR_0);



    for ( ; VAR_9 < VAR_1; VAR_9++)
 VAR_2->xo_color_map_fg[VAR_9] = VAR_2->xo_color_map_bg[VAR_9] = VAR_9;

}
