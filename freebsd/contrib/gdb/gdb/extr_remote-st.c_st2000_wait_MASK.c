
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sig; scalar_t__ integer; } ;
struct target_waitstatus {TYPE_1__ value; int kind; } ;
typedef int ptid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ptid_t
FUNC_1 (ptid_t VAR_5, struct target_waitstatus *VAR_6)
{
  int VAR_7 = VAR_4;

  VAR_6->kind = VAR_1;
  VAR_6->value.integer = 0;

  VAR_4 = 0;

  FUNC_0 (0);

  VAR_6->kind = VAR_2;
  VAR_6->value.sig = VAR_0;

  VAR_4 = VAR_7;

  return VAR_3;
}
