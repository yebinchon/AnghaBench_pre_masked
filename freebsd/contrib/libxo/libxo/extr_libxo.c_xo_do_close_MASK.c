
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ xo_state_t ;
struct TYPE_7__ {scalar_t__ xs_state; scalar_t__ xs_name; } ;
typedef TYPE_1__ xo_stack_t ;
struct TYPE_8__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4 (xo_handle_t *VAR_9, const char *VAR_10, xo_state_t VAR_11)
{
    xo_stack_t *VAR_12, *VAR_13 = ((void*)0);
    ssize_t VAR_14;
    xo_state_t VAR_15 = VAR_11;

    if (VAR_11 == VAR_0)
 VAR_15 = VAR_5;
    else if (VAR_11 == VAR_3)
 VAR_15 = VAR_8;
    else if (VAR_11 == VAR_1)
 VAR_15 = VAR_6;
    else if (VAR_11 == VAR_2)
 VAR_15 = VAR_7;
    else if (VAR_11 == VAR_4)
 VAR_15 = VAR_4;
    else
 return 0;

    for (VAR_12 = &VAR_9->xo_stack[VAR_9->xo_depth]; VAR_12 > VAR_9->xo_stack; VAR_12--) {




 if (VAR_12->xs_state == VAR_4 && VAR_15 != VAR_4) {
     if (VAR_10) {
  FUNC_1(VAR_9, "close (xo_%s) fails at marker '%s'; "
      "not found '%s'",
      FUNC_2(VAR_11),
      VAR_12->xs_name, VAR_10);
  return 0;

     } else {
  VAR_13 = VAR_12;
  FUNC_1(VAR_9, "close stops at marker '%s'", VAR_12->xs_name);
     }
     break;
 }

 if (VAR_12->xs_state != VAR_15)
     continue;

 if (VAR_10 && VAR_12->xs_name && !FUNC_3(VAR_10, VAR_12->xs_name))
     continue;

 VAR_13 = VAR_12;
 break;
    }

    if (VAR_13 == ((void*)0)) {
 FUNC_1(VAR_9, "xo_%s can't find match for '%s'",
     FUNC_2(VAR_11), VAR_10);
 return 0;
    }

    VAR_14 = FUNC_0(VAR_9, VAR_13);

    return VAR_14;
}
