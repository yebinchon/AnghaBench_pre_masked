
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
struct TYPE_21__ {char* xb_curp; char* xb_bufp; int xb_size; } ;
struct TYPE_19__ {int xo_columns; int xo_anchor_columns; TYPE_3__ xo_data; int xo_indent_by; } ;
typedef TYPE_1__ xo_handle_t ;
struct TYPE_20__ {char* xfi_format; int xfi_flen; int xfi_flags; } ;
typedef TYPE_2__ xo_field_info_t ;
typedef TYPE_3__ xo_buffer_t ;
typedef int ssize_t ;
typedef int div_open ;
typedef int div_middle ;
typedef int div_close ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

 int VAR_4 ;



 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,int) ;
 int FUNC_10 (TYPE_1__*,char*,int,int ) ;
 int FUNC_11 (TYPE_1__*,int *,char const*,int,int ) ;
 int FUNC_12 (TYPE_3__*,int,int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int ,char const*,int,char const*,int,int ) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_16 (xo_handle_t *VAR_5, xo_field_info_t *VAR_6,
   const char *VAR_7, ssize_t VAR_8)
{
    const char *VAR_9 = VAR_6->xfi_format;
    ssize_t VAR_10 = VAR_6->xfi_flen;
    xo_xff_flags_t VAR_11 = VAR_6->xfi_flags;

    static char VAR_12[] = "<div class=\"title";
    static char VAR_13[] = "\">";
    static char VAR_14[] = "</div>";

    if (VAR_10 == 0) {
 VAR_9 = "%s";
 VAR_10 = 2;
    }

    switch (FUNC_15(VAR_5)) {
    case 128:
    case 130:
    case 129:
    case 131:




 FUNC_14(VAR_5, VAR_0, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 return;
    }

    xo_buffer_t *VAR_15 = &VAR_5->xo_data;
    ssize_t VAR_16 = VAR_15->xb_curp - VAR_15->xb_bufp;
    ssize_t VAR_17 = VAR_15->xb_size - VAR_16;
    ssize_t VAR_18;

    if (FUNC_15(VAR_5) == VAR_4) {
 FUNC_13(VAR_5, 0);
 if (FUNC_0(VAR_5, VAR_2))
     FUNC_7(VAR_5, VAR_5->xo_indent_by);
 FUNC_5(&VAR_5->xo_data, VAR_12, sizeof(VAR_12) - 1);
 FUNC_8(VAR_5);
 FUNC_5(&VAR_5->xo_data, VAR_13, sizeof(VAR_13) - 1);
    }

    VAR_16 = VAR_15->xb_curp - VAR_15->xb_bufp;
    if (VAR_8) {
 char *VAR_19 = FUNC_2(VAR_10 + 1);
 FUNC_3(VAR_19, VAR_9, VAR_10);
 VAR_19[VAR_10] = '\0';


 char *VAR_20 = FUNC_2(VAR_8 + 1);
 FUNC_3(VAR_20, VAR_7, VAR_8);
 VAR_20[VAR_8] = '\0';

 if (VAR_20[VAR_8 - 1] == 's') {
     char *VAR_21;

     VAR_18 = FUNC_4(((void*)0), 0, VAR_19, VAR_20);
     if (VAR_18 > 0) {




  VAR_21 = FUNC_2(VAR_18 + 1);
  VAR_18 = FUNC_4(VAR_21, VAR_18 + 1, VAR_19, VAR_20);

  FUNC_10(VAR_5, VAR_21, VAR_18, VAR_11);
     }
     goto move_along;

 } else {
     VAR_18 = FUNC_4(VAR_15->xb_curp, VAR_17, VAR_19, VAR_20);
     if (VAR_18 >= VAR_17) {
  if (!FUNC_6(VAR_15, VAR_18))
      return;
  VAR_17 = VAR_15->xb_size - (VAR_15->xb_curp - VAR_15->xb_bufp);
  VAR_18 = FUNC_4(VAR_15->xb_curp, VAR_17, VAR_19, VAR_20);
     }

     if (VAR_18 > 0) {
  if (FUNC_0(VAR_5, VAR_1))
      VAR_5->xo_columns += VAR_18;
  if (FUNC_1(VAR_5, VAR_3))
      VAR_5->xo_anchor_columns += VAR_18;
     }
 }

    } else {
 FUNC_11(VAR_5, ((void*)0), VAR_9, VAR_10, VAR_11);


 VAR_18 = VAR_15->xb_curp - (VAR_15->xb_bufp + VAR_16);
 VAR_15->xb_curp = VAR_15->xb_bufp + VAR_16;
    }


    if (FUNC_15(VAR_5) == VAR_4) {
 VAR_18 = FUNC_12(VAR_15, VAR_18, 0);
    }

    if (VAR_18 > 0)
 VAR_15->xb_curp += VAR_18;

 move_along:
    if (FUNC_15(VAR_5) == VAR_4) {
 FUNC_9(VAR_5, VAR_14, sizeof(VAR_14) - 1);
 if (FUNC_0(VAR_5, VAR_2))
     FUNC_9(VAR_5, "\n", 1);
    }
}
