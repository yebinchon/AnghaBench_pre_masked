
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_register_t ;
struct stack {int dummy; } ;
typedef int insn ;
struct TYPE_6__ {int rs; int func; } ;
struct TYPE_5__ {int op; scalar_t__ imm; int rt; int rs; } ;
struct TYPE_7__ {int word; TYPE_2__ RType; TYPE_1__ IType; } ;
typedef TYPE_3__ InstFmt ;






 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,TYPE_3__*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct stack*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,short) ;
 int FUNC_3 (struct stack*) ;

__attribute__((used)) static void
FUNC_4(struct stack *VAR_4, u_register_t VAR_5, u_register_t VAR_6)
{
 u_register_t VAR_7 = 0, VAR_8, VAR_9;
 short VAR_10 = 0;
 InstFmt VAR_11;

 FUNC_3(VAR_4);

 for (;;) {
  VAR_9 = 0;
  if (VAR_5 <= (u_register_t)(intptr_t)VAR_3)
   break;
  for (VAR_8 = VAR_5; VAR_8 >= (u_register_t)(intptr_t)VAR_3; VAR_8 -= sizeof (VAR_11)) {
   FUNC_0((void *)(intptr_t)VAR_8, &VAR_11, sizeof VAR_11);
   switch (VAR_11.IType.op) {
   case 134:
   case 133:
   case 132:
   case 131:
    if (VAR_11.IType.rs != VAR_2 || VAR_11.IType.rt != VAR_2)
     break;
    VAR_9 = -(short)VAR_11.IType.imm;
    break;

   case 128:
   case 130:
    if (VAR_11.IType.rs != VAR_2 || VAR_11.IType.rt != VAR_1)
     break;
    VAR_10 = (short)VAR_11.IType.imm;
    break;
   default:
    break;
   }

   if (VAR_9)
    break;
  }

  if (FUNC_1(VAR_4, VAR_5) == -1)
   break;

  for (VAR_8 = VAR_5; !VAR_7; VAR_8 += sizeof (VAR_11)) {
   FUNC_0((void *)(intptr_t)VAR_8, &VAR_11, sizeof VAR_11);

   switch (VAR_11.IType.op) {
   case 129:
    if (VAR_11.RType.func == VAR_0) {
     if (VAR_7 >= (u_register_t)(intptr_t)VAR_3)
      break;
     if (VAR_11.RType.rs != VAR_1)
      break;
     VAR_7 = FUNC_2(VAR_6,
         VAR_10);
     if (!VAR_7)
      goto done;
     VAR_7 -= 8;
    }
    break;
   default:
    break;
   }

   if (VAR_11.word == 0x42000018)
    goto done;
  }

  if (VAR_5 == VAR_7 && VAR_9 == 0)
   break;

  VAR_6 += VAR_9;
  VAR_5 = VAR_7;
  VAR_7 = 0;
 }
done:
 return;
}
