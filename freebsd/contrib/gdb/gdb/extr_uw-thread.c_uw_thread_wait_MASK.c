
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sig; } ;
struct target_waitstatus {scalar_t__ kind; TYPE_1__ value; } ;
typedef int ptid_t ;
struct TYPE_4__ {int (* to_wait ) (int ,struct target_waitstatus*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct target_waitstatus*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ptid_t
FUNC_7 (ptid_t VAR_3, struct target_waitstatus *VAR_4)
{
  if (FUNC_1 (VAR_3) > 0)
    VAR_3 = FUNC_6 (VAR_3);
  if (FUNC_1 (VAR_3) <= 0)
    VAR_3 = FUNC_4 (-1);

  FUNC_0 (VAR_3 = VAR_2.to_wait (VAR_3, VAR_4));

  if (VAR_4->kind == VAR_1 &&
      VAR_4->value.sig == VAR_0)
    FUNC_2 (VAR_3);

  return FUNC_3 (VAR_3);
}
