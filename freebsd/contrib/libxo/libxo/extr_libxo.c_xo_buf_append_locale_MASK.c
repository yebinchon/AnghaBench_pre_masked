
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int xo_columns; int xo_anchor_columns; } ;
typedef TYPE_1__ xo_handle_t ;
struct TYPE_12__ {int xb_bufp; int xb_curp; } ;
typedef TYPE_2__ xo_buffer_t ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*,char const*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*,char const*,int) ;
 int FUNC_4 (TYPE_1__*,char const*,int) ;
 int FUNC_5 (char const) ;

__attribute__((used)) static void
FUNC_6 (xo_handle_t *VAR_2, xo_buffer_t *VAR_3,
        const char *VAR_4, ssize_t VAR_5)
{
    const char *VAR_6 = VAR_4, *VAR_7 = VAR_4 + VAR_5;
    ssize_t VAR_8 = VAR_3->xb_bufp - VAR_3->xb_curp;
    ssize_t VAR_9;
    int VAR_10 = 0;

    for ( ; VAR_4 < VAR_7; VAR_4++) {
 if (!FUNC_5(*VAR_4)) {
     VAR_10 += 1;
     continue;
 }
 if (VAR_6 != VAR_4)
     FUNC_2(VAR_3, VAR_6, VAR_4 - VAR_6);

 VAR_9 = FUNC_4(VAR_2, VAR_4, VAR_7 - VAR_4);
 if (VAR_9 <= 0) {

     VAR_3->xb_curp = VAR_3->xb_bufp + VAR_8;
     return;
 }

 VAR_10 += FUNC_3(VAR_2, VAR_3, VAR_4, VAR_9);


 VAR_4 += VAR_9 - 1;
 VAR_6 = VAR_4 + 1;
    }


    if (FUNC_0(VAR_2, VAR_0))
 VAR_2->xo_columns += VAR_10;
    if (FUNC_1(VAR_2, VAR_1))
 VAR_2->xo_anchor_columns += VAR_10;


    VAR_5 = VAR_7 - VAR_6;
    if (VAR_5 != 0)
 FUNC_2(VAR_3, VAR_6, VAR_5);
}
