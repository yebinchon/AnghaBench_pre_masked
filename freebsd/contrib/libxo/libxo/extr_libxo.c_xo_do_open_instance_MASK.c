
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int xo_xof_flags_t ;
struct TYPE_17__ {int xb_curp; int xb_bufp; } ;
struct TYPE_19__ {size_t xo_depth; TYPE_2__* xo_stack; TYPE_1__ xo_attrs; int xo_flags; } ;
typedef TYPE_3__ xo_handle_t ;
typedef int ssize_t ;
struct TYPE_18__ {int xs_flags; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char const*,int,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,char const*,int *,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 char* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,char*,char const*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 char* FUNC_11 (TYPE_3__*,char const*) ;

__attribute__((used)) static int
FUNC_12 (xo_handle_t *VAR_5, xo_xof_flags_t VAR_6, const char *VAR_7)
{
    VAR_5 = FUNC_2(VAR_5);

    ssize_t VAR_8 = 0;
    const char *VAR_9 = FUNC_0(VAR_5, VAR_0) ? "\n" : "";
    const char *VAR_10 = "";

    if (VAR_7 == ((void*)0)) {
 FUNC_5(VAR_5, "NULL passed for instance name");
 VAR_7 = VAR_1;
    }

    const char *VAR_11 = FUNC_11(VAR_5, VAR_7);
    VAR_6 |= VAR_5->xo_flags;

    switch (FUNC_10(VAR_5)) {
    case 128:
 VAR_8 = FUNC_7(VAR_5, "%*s<%s%s", FUNC_6(VAR_5), "", VAR_11, VAR_7);

 if (VAR_5->xo_attrs.xb_curp != VAR_5->xo_attrs.xb_bufp) {
     VAR_8 += VAR_5->xo_attrs.xb_curp - VAR_5->xo_attrs.xb_bufp;
     FUNC_1(VAR_5, VAR_5->xo_attrs.xb_bufp,
      VAR_5->xo_attrs.xb_curp - VAR_5->xo_attrs.xb_bufp);
     VAR_5->xo_attrs.xb_curp = VAR_5->xo_attrs.xb_bufp;
 }

 VAR_8 += FUNC_7(VAR_5, ">%s", VAR_9);
 break;

    case 130:
 FUNC_9(VAR_5);

 if (VAR_5->xo_stack[VAR_5->xo_depth].xs_flags & VAR_3)
     VAR_10 = FUNC_0(VAR_5, VAR_0) ? ",\n" : ", ";
 VAR_5->xo_stack[VAR_5->xo_depth].xs_flags |= VAR_3;

 VAR_8 = FUNC_7(VAR_5, "%s%*s{%s",
         VAR_10, FUNC_6(VAR_5), "", VAR_9);
 break;

    case 129:
 break;

    case 131:
 VAR_8 = FUNC_4(VAR_5, VAR_2, VAR_7, ((void*)0), VAR_6);
 break;
    }

    FUNC_3(VAR_5, VAR_7, 1, 1, VAR_4, FUNC_8(VAR_6));

    return VAR_8;
}
