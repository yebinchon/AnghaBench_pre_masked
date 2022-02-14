
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_mem_sync_args {int flags; int mapping_len; scalar_t__ mapping; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct thread*,uintptr_t,int ,int) ;

int
FUNC_1(struct thread *VAR_5, struct cloudabi_sys_mem_sync_args *VAR_6)
{
 int VAR_7;


 switch (VAR_6->flags & (129 | 128)) {
 case 129:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_4;
  break;
 default:
  return (VAR_1);
 }
 if ((VAR_6->flags & VAR_0) != 0)
  VAR_7 |= VAR_3;

 return (FUNC_0(VAR_5, (uintptr_t)VAR_6->mapping, VAR_6->mapping_len,
     VAR_7));
}
