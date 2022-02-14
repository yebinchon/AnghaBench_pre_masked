
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umutex {int m_flags; int m_owner; } ;
struct thread {scalar_t__ td_proc; int td_tid; } ;
typedef int m ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,struct umutex*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct thread*,struct umutex*,int) ;
 int FUNC_3 (struct thread*,struct umutex*,uintptr_t*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_4, uintptr_t VAR_5, uintptr_t *VAR_6, bool VAR_7)
{
 struct umutex VAR_8;
 int VAR_9;

 FUNC_0(VAR_4->td_proc == VAR_3, ("need current vmspace"));
 VAR_9 = FUNC_1((void *)VAR_5, &VAR_8, sizeof(VAR_8));
 if (VAR_9 != 0)
  return (VAR_9);
 if (VAR_6 != ((void*)0))
  FUNC_3(VAR_4, &VAR_8, VAR_6);
 if ((VAR_8.m_flags & VAR_2) == 0)
  return (VAR_0);
 if ((VAR_8.m_owner & ~VAR_1) != VAR_4->td_tid)

  return (VAR_7 ? 0 : VAR_0);
 return (FUNC_2(VAR_4, (struct umutex *)VAR_5, 1));
}
