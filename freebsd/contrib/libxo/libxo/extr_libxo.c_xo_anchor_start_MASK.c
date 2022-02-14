
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ xb_bufp; scalar_t__ xb_curp; } ;
struct TYPE_8__ {int xo_anchor_min_width; scalar_t__ xo_anchor_columns; scalar_t__ xo_anchor_offset; TYPE_2__ xo_data; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int xo_field_info_t ;
typedef TYPE_2__ xo_buffer_t ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int *,char const*,int ) ;

__attribute__((used)) static void
FUNC_4 (xo_handle_t *VAR_1, xo_field_info_t *VAR_2,
   const char *VAR_3, ssize_t VAR_4)
{
    if (FUNC_0(VAR_1, VAR_0))
 FUNC_2(VAR_1, "the anchor already recording is discarded");

    FUNC_1(VAR_1, VAR_0);
    xo_buffer_t *VAR_5 = &VAR_1->xo_data;
    VAR_1->xo_anchor_offset = VAR_5->xb_curp - VAR_5->xb_bufp;
    VAR_1->xo_anchor_columns = 0;





    VAR_1->xo_anchor_min_width = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
}
