
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
struct TYPE_14__ {scalar_t__ xb_curp; scalar_t__ xb_bufp; } ;
struct TYPE_12__ {scalar_t__ xo_units_offset; TYPE_3__ xo_data; } ;
typedef TYPE_1__ xo_handle_t ;
struct TYPE_13__ {char* xfi_format; scalar_t__ xfi_flen; int xfi_flags; } ;
typedef TYPE_2__ xo_field_info_t ;
typedef TYPE_3__ xo_buffer_t ;
typedef int units_start_xml ;
typedef int units_start_html ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char const*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int *,char const*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,char*,int *,char const*,scalar_t__,char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9 (xo_handle_t *VAR_3, xo_field_info_t *VAR_4,
   const char *VAR_5, ssize_t VAR_6)
{
    const char *VAR_7 = VAR_4->xfi_format;
    ssize_t VAR_8 = VAR_4->xfi_flen;
    xo_xff_flags_t VAR_9 = VAR_4->xfi_flags;

    static char VAR_10[] = " units=\"";
    static char VAR_11[] = " data-units=\"";

    if (!FUNC_0(VAR_3, VAR_0)) {
 FUNC_7(VAR_3, "units", ((void*)0), VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 return;
    }

    xo_buffer_t *VAR_12 = &VAR_3->xo_data;
    ssize_t VAR_13 = VAR_3->xo_units_offset;
    ssize_t VAR_14 = VAR_12->xb_curp - VAR_12->xb_bufp;

    if (FUNC_8(VAR_3) == VAR_2)
 FUNC_4(VAR_12, VAR_10, sizeof(VAR_10) - 1);
    else if (FUNC_8(VAR_3) == VAR_1)
 FUNC_4(VAR_12, VAR_11, sizeof(VAR_11) - 1);
    else
 return;

    if (VAR_6)
 FUNC_5(VAR_3, VAR_5, VAR_6);
    else
 FUNC_6(VAR_3, ((void*)0), VAR_7, VAR_8, VAR_9);

    FUNC_4(VAR_12, "\"", 1);

    ssize_t VAR_15 = VAR_12->xb_curp - VAR_12->xb_bufp;
    ssize_t VAR_16 = VAR_15 - VAR_14;
    if (VAR_16 <= 0) {
 VAR_12->xb_curp = VAR_12->xb_bufp + VAR_14;
 return;
    }







    char *VAR_17 = FUNC_1(VAR_16);

    FUNC_2(VAR_17, VAR_12->xb_bufp + VAR_14, VAR_16);
    FUNC_3(VAR_12->xb_bufp + VAR_13 + VAR_16, VAR_12->xb_bufp + VAR_13, VAR_14 - VAR_13);
    FUNC_3(VAR_12->xb_bufp + VAR_13, VAR_17, VAR_16);
}
