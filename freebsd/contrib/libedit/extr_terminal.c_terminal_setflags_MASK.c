
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ t_tabs; } ;
struct TYPE_5__ {int el_errfile; TYPE_1__ el_tty; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(EditLine *VAR_31)
{
 VAR_4 = 0;
 if (VAR_31->el_tty.t_tabs)
  VAR_4 |= (FUNC_2(VAR_25) && !FUNC_2(VAR_30)) ? VAR_9 : 0;

 VAR_4 |= (FUNC_2(VAR_23) || FUNC_2(VAR_16)) ? VAR_13 : 0;
 VAR_4 |= FUNC_0(VAR_19) ? VAR_5 : 0;
 VAR_4 |= (FUNC_0(VAR_20) || FUNC_0(VAR_14)) ? VAR_6 : 0;
 VAR_4 |= (FUNC_0(VAR_22) || FUNC_0(VAR_21) || FUNC_0(VAR_15)) ?
     VAR_7 : 0;
 VAR_4 |= (FUNC_0(VAR_28) || FUNC_0(VAR_17)) ? VAR_10 : 0;
 VAR_4 |= FUNC_2(VAR_18) ? VAR_11 : 0;
 VAR_4 |= FUNC_2(VAR_29) ? VAR_12 : 0;

 if (FUNC_0(VAR_24) && FUNC_0(VAR_27))
  VAR_4 |= (FUNC_4(FUNC_1(VAR_24), FUNC_1(VAR_27)) == 0) ?
      VAR_8 : 0;
 else
  VAR_4 &= ~VAR_8;
 if (FUNC_0(VAR_24) && FUNC_0(VAR_26))
  VAR_4 |= (FUNC_4(FUNC_1(VAR_24), FUNC_1(VAR_26)) == 0) ?
      VAR_8 : 0;
}
