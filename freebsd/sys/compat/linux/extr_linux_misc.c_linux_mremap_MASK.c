
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {uintptr_t* td_retval; } ;
struct linux_mremap_args {int flags; int addr; uintptr_t new_len; uintptr_t old_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct thread*,uintptr_t,size_t) ;
 void* FUNC_1 (uintptr_t) ;

int
FUNC_2(struct thread *VAR_5, struct linux_mremap_args *VAR_6)
{
 uintptr_t VAR_7;
 size_t VAR_8;
 int VAR_9 = 0;

 if (VAR_6->flags & ~(VAR_2 | VAR_3)) {
  VAR_5->td_retval[0] = 0;
  return (VAR_0);
 }





 if (VAR_6->addr & VAR_4) {
  VAR_5->td_retval[0] = 0;
  return (VAR_0);
 }

 VAR_6->new_len = FUNC_1(VAR_6->new_len);
 VAR_6->old_len = FUNC_1(VAR_6->old_len);

 if (VAR_6->new_len > VAR_6->old_len) {
  VAR_5->td_retval[0] = 0;
  return (VAR_1);
 }

 if (VAR_6->new_len < VAR_6->old_len) {
  VAR_7 = VAR_6->addr + VAR_6->new_len;
  VAR_8 = VAR_6->old_len - VAR_6->new_len;
  VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_8);
 }

 VAR_5->td_retval[0] = VAR_9 ? 0 : (uintptr_t)VAR_6->addr;
 return (VAR_9);
}
