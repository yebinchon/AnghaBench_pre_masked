
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct vmspace {TYPE_1__ vm_map; } ;
struct thread {int dummy; } ;
struct proc {int p_flag2; int p_flag; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_5 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 struct vmspace* FUNC_4 (struct proc*) ;
 int FUNC_5 (struct vmspace*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_6, struct proc *VAR_7, int *VAR_8)
{
 struct vmspace *VAR_9;
 int VAR_10;

 switch (VAR_7->p_flag2 & (128 | 129)) {
 case 0:
  VAR_10 = VAR_4;
  break;
 case 128:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_2;
  break;
 }
 if ((VAR_7->p_flag & VAR_5) == 0) {
  FUNC_2(VAR_7);
  FUNC_1(VAR_7);
  VAR_9 = FUNC_4(VAR_7);
  if (VAR_9 != ((void*)0) && (VAR_9->vm_map.flags & VAR_0) != 0) {
   VAR_10 |= VAR_1;
   FUNC_5(VAR_9);
  }
  FUNC_0(VAR_7);
  FUNC_3(VAR_7);
 }
 *VAR_8 = VAR_10;
 return (0);
}
