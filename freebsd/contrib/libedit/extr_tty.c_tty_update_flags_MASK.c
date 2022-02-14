
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tcflag_t ;
struct TYPE_5__ {int t_ex; int t_ed; int t_ts; } ;
struct TYPE_6__ {TYPE_1__ el_tty; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_2(EditLine *VAR_3, int VAR_4)
{
 tcflag_t *VAR_5, *VAR_6, *VAR_7;
 VAR_5 = FUNC_0(&VAR_3->el_tty.t_ts, VAR_4);
 VAR_6 = FUNC_0(&VAR_3->el_tty.t_ed, VAR_4);
 VAR_7 = FUNC_0(&VAR_3->el_tty.t_ex, VAR_4);

 if (*VAR_5 != *VAR_7 && (VAR_4 != VAR_2 || *VAR_5 != *VAR_6)) {
  *VAR_6 = FUNC_1(VAR_3, *VAR_5, VAR_0, VAR_4);
  *VAR_7 = FUNC_1(VAR_3, *VAR_5, VAR_1, VAR_4);
 }
}
