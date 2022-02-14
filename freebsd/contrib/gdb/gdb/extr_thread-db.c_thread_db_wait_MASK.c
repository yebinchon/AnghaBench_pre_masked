
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sig; } ;
struct target_waitstatus {scalar_t__ kind; TYPE_1__ value; } ;
typedef int ptid_t ;
struct TYPE_6__ {scalar_t__ pid; } ;
struct TYPE_5__ {int (* to_wait ) (int ,struct target_waitstatus*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct target_waitstatus*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ptid_t
FUNC_8 (ptid_t VAR_6, struct target_waitstatus *VAR_7)
{
  extern ptid_t VAR_8;

  if (FUNC_0 (VAR_6) != -1 && FUNC_2 (VAR_6))
    VAR_6 = FUNC_3 (VAR_6);

  VAR_6 = VAR_5->to_wait (VAR_6, VAR_7);

  if (VAR_4.pid == 0)



    return VAR_6;

  if (VAR_7->kind == VAR_1)
    return FUNC_4 (-1);

  if (VAR_7->kind == VAR_2
      && VAR_7->value.sig == VAR_0)

    FUNC_1 (VAR_6);

  if (!FUNC_5 (VAR_8, VAR_3))
    VAR_8 = FUNC_7 (VAR_8);

  return FUNC_7 (VAR_6);
}
