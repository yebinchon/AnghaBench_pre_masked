
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* xs_name; int xs_flags; } ;
typedef TYPE_1__ xo_stack_t ;
struct TYPE_12__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_2__*,char const*,int,int,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,char const*,int *,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*,char const*,int ,char*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_10 (xo_handle_t *VAR_7, const char *VAR_8)
{
    ssize_t VAR_9 = 0;
    const char *VAR_10 = "";

    if (VAR_8 == ((void*)0)) {
 xo_stack_t *VAR_11 = &VAR_7->xo_stack[VAR_7->xo_depth];

 VAR_8 = VAR_11->xs_name;
 if (VAR_8) {
     ssize_t VAR_12 = FUNC_3(VAR_8) + 1;

     char *VAR_13 = FUNC_1(VAR_12);
     FUNC_2(VAR_13, VAR_8, VAR_12);
     VAR_8 = VAR_13;
 } else if (!(VAR_11->xs_flags & VAR_3)) {
     FUNC_6(VAR_7, "missing name without 'dtrt' mode");
     VAR_8 = VAR_1;
 }
    }

    switch (FUNC_9(VAR_7)) {
    case 128:
 if (VAR_7->xo_stack[VAR_7->xo_depth].xs_flags & VAR_5)
     VAR_10 = FUNC_0(VAR_7, VAR_0) ? "\n" : "";
 VAR_7->xo_stack[VAR_7->xo_depth].xs_flags |= VAR_5;

 FUNC_4(VAR_7, VAR_8, -1, -1, VAR_6, VAR_4);
 VAR_9 = FUNC_8(VAR_7, "%s%*s]", VAR_10, FUNC_7(VAR_7), "");
 VAR_7->xo_stack[VAR_7->xo_depth].xs_flags |= VAR_5;
 break;

    case 129:
 VAR_9 = FUNC_5(VAR_7, VAR_2, VAR_8, ((void*)0), 0);


    default:
 FUNC_4(VAR_7, VAR_8, -1, 0, VAR_6, VAR_4);
 VAR_7->xo_stack[VAR_7->xo_depth].xs_flags |= VAR_5;
 break;
    }

    return VAR_9;
}
