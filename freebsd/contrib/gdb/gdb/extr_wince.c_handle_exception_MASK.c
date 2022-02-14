
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {void* sig; } ;
struct target_waitstatus {TYPE_4__ value; int kind; } ;
struct TYPE_7__ {int ExceptionCode; int ExceptionAddress; } ;
struct TYPE_8__ {TYPE_1__ ExceptionRecord; scalar_t__ dwFirstChance; } ;
struct TYPE_9__ {TYPE_2__ Exception; } ;
struct TYPE_11__ {TYPE_3__ u; } ;



 int FUNC_0 (char*) ;




 int VAR_0 ;

 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (TYPE_5__*,int ) ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_3 (struct target_waitstatus *VAR_10)
{





  VAR_10->kind = VAR_6;

  switch (VAR_7.u.Exception.ExceptionRecord.ExceptionCode)
    {
    case 132:
      FUNC_0 (("gdb: Target exception ACCESS_VIOLATION at 0x%08x\n",
       (unsigned) VAR_7.u.Exception.ExceptionRecord.ExceptionAddress));
      VAR_10->value.sig = VAR_3;
      break;
    case 128:
      FUNC_0 (("gdb: Target exception STACK_OVERFLOW at 0x%08x\n",
       (unsigned) VAR_7.u.Exception.ExceptionRecord.ExceptionAddress));
      VAR_10->value.sig = VAR_3;
      break;
    case 131:
      FUNC_0 (("gdb: Target exception BREAKPOINT at 0x%08x\n",
       (unsigned) VAR_7.u.Exception.ExceptionRecord.ExceptionAddress));
      VAR_10->value.sig = VAR_4;
      break;
    case 133:
      FUNC_0 (("gdb: Target exception CONTROL_C at 0x%08x\n",
       (unsigned) VAR_7.u.Exception.ExceptionRecord.ExceptionAddress));
      VAR_10->value.sig = VAR_2;

      VAR_9 = VAR_0;
      break;
    case 129:
      FUNC_0 (("gdb: Target exception SINGLE_STEP at 0x%08x\n",
       (unsigned) VAR_7.u.Exception.ExceptionRecord.ExceptionAddress));
      VAR_10->value.sig = VAR_4;
      break;
    case 130:
      FUNC_0 (("gdb: Target exception SINGLE_ILL at 0x%08x\n",
        VAR_7.u.Exception.ExceptionRecord.ExceptionAddress));
      VAR_10->value.sig = FUNC_1 (&VAR_7, VAR_1);
      break;
    default:




      FUNC_2 ("gdb: unknown target exception 0x%08x at 0x%08x\n",
      VAR_7.u.Exception.ExceptionRecord.ExceptionCode,
  VAR_7.u.Exception.ExceptionRecord.ExceptionAddress);
      VAR_10->value.sig = VAR_5;
      break;
    }
  VAR_8++;
  return 1;
}
