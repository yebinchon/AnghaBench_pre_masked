
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int thread_info ;
struct TYPE_9__ {void* sig; } ;
struct target_waitstatus {TYPE_4__ value; int kind; } ;
struct TYPE_6__ {int ExceptionCode; int ExceptionAddress; } ;
struct TYPE_7__ {TYPE_1__ ExceptionRecord; int dwFirstChance; } ;
struct TYPE_8__ {TYPE_2__ Exception; } ;
struct TYPE_10__ {TYPE_3__ u; int dwThreadId; } ;
typedef int DWORD ;




 int FUNC_0 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (char*,int,int) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3 (struct target_waitstatus *VAR_10)
{
  thread_info *VAR_11;
  DWORD VAR_12 = VAR_7.u.Exception.ExceptionRecord.ExceptionCode;

  VAR_10->kind = VAR_6;


  VAR_11 = FUNC_2 (VAR_7.dwThreadId, -1);

  switch (VAR_12)
    {
    case 144:
      FUNC_0 ("EXCEPTION_ACCESS_VIOLATION");
      VAR_10->value.sig = VAR_3;
      break;
    case 128:
      FUNC_0 ("STATUS_STACK_OVERFLOW");
      VAR_10->value.sig = VAR_3;
      break;
    case 137:
      FUNC_0 ("STATUS_FLOAT_DENORMAL_OPERAND");
      VAR_10->value.sig = VAR_0;
      break;
    case 143:
      FUNC_0 ("EXCEPTION_ARRAY_BOUNDS_EXCEEDED");
      VAR_10->value.sig = VAR_0;
      break;
    case 135:
      FUNC_0 ("STATUS_FLOAT_INEXACT_RESULT");
      VAR_10->value.sig = VAR_0;
      break;
    case 134:
      FUNC_0 ("STATUS_FLOAT_INVALID_OPERATION");
      VAR_10->value.sig = VAR_0;
      break;
    case 133:
      FUNC_0 ("STATUS_FLOAT_OVERFLOW");
      VAR_10->value.sig = VAR_0;
      break;
    case 132:
      FUNC_0 ("STATUS_FLOAT_STACK_CHECK");
      VAR_10->value.sig = VAR_0;
      break;
    case 131:
      FUNC_0 ("STATUS_FLOAT_UNDERFLOW");
      VAR_10->value.sig = VAR_0;
      break;
    case 136:
      FUNC_0 ("STATUS_FLOAT_DIVIDE_BY_ZERO");
      VAR_10->value.sig = VAR_0;
      break;
    case 130:
      FUNC_0 ("STATUS_INTEGER_DIVIDE_BY_ZERO");
      VAR_10->value.sig = VAR_0;
      break;
    case 129:
      FUNC_0 ("STATUS_INTEGER_OVERFLOW");
      VAR_10->value.sig = VAR_0;
      break;
    case 142:
      FUNC_0 ("EXCEPTION_BREAKPOINT");
      VAR_10->value.sig = VAR_4;
      break;
    case 145:
      FUNC_0 ("DBG_CONTROL_C");
      VAR_10->value.sig = VAR_2;
      break;
    case 146:
      FUNC_0 ("DBG_CONTROL_BREAK");
      VAR_10->value.sig = VAR_2;
      break;
    case 138:
      FUNC_0 ("EXCEPTION_SINGLE_STEP");
      VAR_10->value.sig = VAR_4;
      break;
    case 141:
      FUNC_0 ("EXCEPTION_ILLEGAL_INSTRUCTION");
      VAR_10->value.sig = VAR_1;
      break;
    case 139:
      FUNC_0 ("EXCEPTION_PRIV_INSTRUCTION");
      VAR_10->value.sig = VAR_1;
      break;
    case 140:
      FUNC_0 ("EXCEPTION_NONCONTINUABLE_EXCEPTION");
      VAR_10->value.sig = VAR_1;
      break;
    default:
      if (VAR_7.u.Exception.dwFirstChance)
 return 0;
      FUNC_1 ("gdb: unknown target exception 0x%08lx at 0x%08lx\n",
      VAR_7.u.Exception.ExceptionRecord.ExceptionCode,
 (DWORD) VAR_7.u.Exception.ExceptionRecord.ExceptionAddress);
      VAR_10->value.sig = VAR_5;
      break;
    }
  VAR_8++;
  VAR_9 = VAR_10->value.sig;
  return 1;
}
