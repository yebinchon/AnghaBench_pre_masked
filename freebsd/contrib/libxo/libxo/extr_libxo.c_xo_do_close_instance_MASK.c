
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char* xs_name; int xs_flags; } ;
typedef TYPE_1__ xo_stack_t ;
struct TYPE_15__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char const*,int,int,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,char const*,int *,int ) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char*,char const*,char*,char const*,...) ;
 int FUNC_10 (TYPE_2__*) ;
 char* FUNC_11 (TYPE_2__*,char const*) ;

__attribute__((used)) static int
FUNC_12 (xo_handle_t *VAR_6, const char *VAR_7)
{
    VAR_6 = FUNC_4(VAR_6);

    ssize_t VAR_8 = 0;
    const char *VAR_9 = FUNC_0(VAR_6, VAR_0) ? "\n" : "";
    const char *VAR_10 = "";

    if (VAR_7 == ((void*)0)) {
 xo_stack_t *VAR_11 = &VAR_6->xo_stack[VAR_6->xo_depth];

 VAR_7 = VAR_11->xs_name;
 if (VAR_7) {
     ssize_t VAR_12 = FUNC_3(VAR_7) + 1;

     char *VAR_13 = FUNC_1(VAR_12);
     FUNC_2(VAR_13, VAR_7, VAR_12);
     VAR_7 = VAR_13;
 } else if (!(VAR_11->xs_flags & VAR_3)) {
     FUNC_7(VAR_6, "missing name without 'dtrt' mode");
     VAR_7 = VAR_1;
 }
    }

    const char *VAR_14 = FUNC_11(VAR_6, VAR_7);

    switch (FUNC_10(VAR_6)) {
    case 128:
 FUNC_5(VAR_6, VAR_7, -1, -1, VAR_5, 0);
 VAR_8 = FUNC_9(VAR_6, "%*s</%s%s>%s", FUNC_8(VAR_6), "", VAR_14, VAR_7, VAR_9);
 break;

    case 131:
 VAR_10 = FUNC_0(VAR_6, VAR_0) ? "\n" : "";

 FUNC_5(VAR_6, VAR_7, -1, -1, VAR_5, 0);
 VAR_8 = FUNC_9(VAR_6, "%s%*s}", VAR_10, FUNC_8(VAR_6), "");
 VAR_6->xo_stack[VAR_6->xo_depth].xs_flags |= VAR_4;
 break;

    case 132:
    case 129:
 FUNC_5(VAR_6, VAR_7, -1, 0, VAR_5, 0);
 break;

    case 130:
 break;

    case 133:
 FUNC_5(VAR_6, VAR_7, -1, 0, VAR_5, 0);
 VAR_8 = FUNC_6(VAR_6, VAR_2, VAR_7, ((void*)0), 0);
 break;
    }

    return VAR_8;
}
