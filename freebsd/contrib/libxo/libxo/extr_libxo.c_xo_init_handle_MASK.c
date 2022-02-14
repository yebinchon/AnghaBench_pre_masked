
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int xo_indent_by; int xo_fmt; int xo_data; int xo_flush; int xo_write; int xo_opaque; } ;
typedef TYPE_1__ xo_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,char const*) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_9 (xo_handle_t *VAR_9)
{
    VAR_9->xo_opaque = VAR_5;
    VAR_9->xo_write = VAR_8;
    VAR_9->xo_flush = VAR_6;

    if (FUNC_8(VAR_5))
 FUNC_0(VAR_9, VAR_1);







    if (!VAR_7) {
 VAR_7 = 1;




 const char *VAR_10 = FUNC_4("LC_ALL");
 if (VAR_10 == ((void*)0))
     VAR_10 = FUNC_4("LC_CTYPE");
 if (VAR_10 == ((void*)0))
     VAR_10 = FUNC_4("LANG");
 if (VAR_10 == ((void*)0))
     VAR_10 = "C";


 (void) FUNC_5(VAR_0, VAR_10);
    }





    FUNC_6(&VAR_9->xo_data);
    FUNC_6(&VAR_9->xo_fmt);

    if (FUNC_2(VAR_9, VAR_2))
 return;
    FUNC_3(VAR_9, VAR_2);

    VAR_9->xo_indent_by = VAR_4;
    FUNC_7(VAR_9, VAR_3);

    FUNC_1(VAR_9, VAR_2);
}
