
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sig; } ;
struct target_waitstatus {TYPE_1__ value; int kind; } ;
typedef int ptid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static ptid_t
FUNC_1 (ptid_t VAR_5, struct target_waitstatus *VAR_6)
{
  VAR_6->kind = (VAR_3 == VAR_0 ?
    VAR_1 : VAR_2);


  VAR_6->value.sig = FUNC_0 (VAR_3);

  return VAR_4;
}
