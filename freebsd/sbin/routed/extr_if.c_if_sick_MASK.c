
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface {int int_state; int int_act_time; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (char*,struct interface*) ;

void
FUNC_2(struct interface *VAR_6)
{
 if (0 == (VAR_6->int_state & (VAR_2 | VAR_1))) {
  VAR_6->int_state |= VAR_2;
  VAR_6->int_act_time = VAR_3;
  FUNC_1("Chg", VAR_6);

  FUNC_0(VAR_4, VAR_5.tv_sec+VAR_0);
 }
}
