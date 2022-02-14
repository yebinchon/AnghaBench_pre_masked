
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ xb_curp; scalar_t__ xb_bufp; } ;
struct TYPE_10__ {scalar_t__ xo_anchor_min_width; scalar_t__ xo_anchor_offset; scalar_t__ xo_anchor_columns; TYPE_2__ xo_data; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int xo_field_info_t ;
typedef TYPE_2__ xo_buffer_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,scalar_t__) ;
 int FUNC_5 (char*,char,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,char const*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,char*,int *,char*,scalar_t__,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_10 (xo_handle_t *VAR_3, xo_field_info_t *VAR_4,
   const char *VAR_5, ssize_t VAR_6)
{
    if (!FUNC_1(VAR_3, VAR_0)) {
 FUNC_7(VAR_3, "no start anchor");
 return;
    }

    FUNC_0(VAR_3, VAR_1);

    ssize_t VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_7 == 0)
 VAR_7 = VAR_3->xo_anchor_min_width;

    if (VAR_7 == 0)
 goto done;

    xo_buffer_t *VAR_8 = &VAR_3->xo_data;
    ssize_t VAR_9 = VAR_3->xo_anchor_offset;
    ssize_t VAR_10 = VAR_8->xb_curp - VAR_8->xb_bufp;
    ssize_t VAR_11 = (VAR_7 > 0) ? VAR_7 : -VAR_7;
    ssize_t VAR_12 = VAR_11 - VAR_3->xo_anchor_columns;

    if (VAR_12 <= 0)
 goto done;

    if (VAR_11 > VAR_2) {
 FUNC_7(VAR_3, "width over %u are not supported",
     VAR_2);
 goto done;
    }


    char *VAR_13 = FUNC_2(VAR_12);
    FUNC_5(VAR_13, ' ', VAR_12);
    FUNC_9(VAR_3, "padding", ((void*)0), VAR_13, VAR_12, ((void*)0), 0, 0);

    if (VAR_7 < 0)
 goto done;

    ssize_t VAR_14 = VAR_8->xb_curp - VAR_8->xb_bufp;
    ssize_t VAR_15 = VAR_14 - VAR_10;
    if (VAR_15 <= 0)
 goto done;
    if (VAR_15 > VAR_12)
 VAR_13 = FUNC_2(VAR_15);

    FUNC_3(VAR_13, VAR_8->xb_bufp + VAR_10, VAR_15);
    FUNC_4(VAR_8->xb_bufp + VAR_9 + VAR_15, VAR_8->xb_bufp + VAR_9, VAR_10 - VAR_9);
    FUNC_4(VAR_8->xb_bufp + VAR_9, VAR_13, VAR_15);

 done:
    FUNC_6(VAR_3);
}
