
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sig; int integer; } ;
struct target_waitstatus {TYPE_1__ value; int kind; } ;
typedef int ptid_t ;
struct TYPE_4__ {int rdi_stopped_status; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ptid_t
FUNC_2 (ptid_t VAR_7, struct target_waitstatus *VAR_8)
{
  switch (VAR_4.rdi_stopped_status)
    {
    default:
    case 130:
    case 129:
      VAR_8->kind = VAR_1;
      VAR_8->value.integer = FUNC_0 (0);
      break;
    case 131:
      VAR_8->kind = VAR_3;


      VAR_8->value.sig = VAR_0;
      break;
    }

  return VAR_5;
}
