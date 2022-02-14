
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xo_xsf_flags_t ;
typedef int xo_state_t ;
struct TYPE_9__ {int xs_flags; char* xs_name; char* xs_keys; int xs_state; } ;
typedef TYPE_1__ xo_stack_t ;
struct TYPE_10__ {int xo_depth; int xo_indent; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,char*,char const*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8 (xo_handle_t *VAR_9, const char *VAR_10,
   int VAR_11, int VAR_12, xo_state_t VAR_13, xo_xsf_flags_t VAR_14)
{
    if (FUNC_7(VAR_9) == VAR_4 || FUNC_7(VAR_9) == VAR_5)
 VAR_12 = 0;

    if (FUNC_0(VAR_9, VAR_0))
 VAR_14 |= VAR_6;

    if (VAR_11 >= 0) {
 if (FUNC_1(VAR_9, VAR_9->xo_depth + VAR_11))
     return;

 xo_stack_t *VAR_15 = &VAR_9->xo_stack[VAR_9->xo_depth + VAR_11];
 VAR_15->xs_flags = VAR_14;
 VAR_15->xs_state = VAR_13;
 FUNC_4(VAR_9);

 if (VAR_10 == ((void*)0))
     VAR_10 = VAR_3;

 VAR_15->xs_name = FUNC_6(VAR_10, -1);

    } else {
 if (VAR_9->xo_depth == 0) {
     if (!FUNC_0(VAR_9, VAR_1))
  FUNC_2(VAR_9, "close with empty stack: '%s'", VAR_10);
     return;
 }

 xo_stack_t *VAR_16 = &VAR_9->xo_stack[VAR_9->xo_depth];
 if (FUNC_0(VAR_9, VAR_2)) {
     const char *VAR_17 = VAR_16->xs_name;
     if (VAR_17 != ((void*)0) && VAR_10 != ((void*)0) && !FUNC_5(VAR_10, VAR_17)) {
  FUNC_2(VAR_9, "incorrect close: '%s' .vs. '%s'",
         VAR_10, VAR_17);
  return;
     }
     if ((VAR_16->xs_flags & VAR_8) != (VAR_14 & VAR_8)) {
  FUNC_2(VAR_9, "list close on list confict: '%s'",
         VAR_10);
  return;
     }
     if ((VAR_16->xs_flags & VAR_7) != (VAR_14 & VAR_7)) {
  FUNC_2(VAR_9, "list close on instance confict: '%s'",
         VAR_10);
  return;
     }
 }

 if (VAR_16->xs_name) {
     FUNC_3(VAR_16->xs_name);
     VAR_16->xs_name = ((void*)0);
 }
 if (VAR_16->xs_keys) {
     FUNC_3(VAR_16->xs_keys);
     VAR_16->xs_keys = ((void*)0);
 }
    }

    VAR_9->xo_depth += VAR_11;
    VAR_9->xo_indent += VAR_12;
}
