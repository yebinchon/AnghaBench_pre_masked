
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_priority; int td_owepreempt; int td_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,int ) ;
 scalar_t__ VAR_2 ;
 struct thread* VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int,int,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct thread *VAR_5)
{
 struct thread *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_1(VAR_3, VAR_0);

 VAR_6 = VAR_3;
 VAR_8 = VAR_5->td_priority;
 VAR_7 = VAR_6->td_priority;
 if (VAR_8 < VAR_7)
  VAR_6->td_flags |= VAR_1;
 if (VAR_4 != ((void*)0) || VAR_8 >= VAR_7 || VAR_2 || FUNC_0(VAR_6))
  return;
 if (!FUNC_2(VAR_8, VAR_7, 0))
  return;
 VAR_6->td_owepreempt = 1;
}
