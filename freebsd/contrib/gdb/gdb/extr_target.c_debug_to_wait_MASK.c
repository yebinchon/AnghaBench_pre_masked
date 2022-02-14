
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sig; int integer; } ;
struct target_waitstatus {int kind; TYPE_1__ value; } ;
typedef int ptid_t ;
struct TYPE_4__ {int (* to_wait ) (int ,struct target_waitstatus*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct target_waitstatus*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ptid_t
FUNC_4 (ptid_t VAR_2, struct target_waitstatus *VAR_3)
{
  ptid_t VAR_4;

  VAR_4 = VAR_0.to_wait (VAR_2, VAR_3);

  FUNC_1 (VAR_1,
        "target_wait (%d, status) = %d,   ", FUNC_0 (VAR_2),
        FUNC_0 (VAR_4));
  FUNC_1 (VAR_1, "status->kind = ");
  switch (VAR_3->kind)
    {
    case 134:
      FUNC_1 (VAR_1, "exited, status = %d\n",
     VAR_3->value.integer);
      break;
    case 129:
      FUNC_1 (VAR_1, "stopped, signal = %s\n",
     FUNC_3 (VAR_3->value.sig));
      break;
    case 131:
      FUNC_1 (VAR_1, "signalled, signal = %s\n",
     FUNC_3 (VAR_3->value.sig));
      break;
    case 132:
      FUNC_1 (VAR_1, "loaded\n");
      break;
    case 133:
      FUNC_1 (VAR_1, "forked\n");
      break;
    case 128:
      FUNC_1 (VAR_1, "vforked\n");
      break;
    case 135:
      FUNC_1 (VAR_1, "execd\n");
      break;
    case 130:
      FUNC_1 (VAR_1, "spurious\n");
      break;
    default:
      FUNC_1 (VAR_1, "unknown???\n");
      break;
    }

  return VAR_4;
}
