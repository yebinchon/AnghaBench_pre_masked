
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_q_entry {int rl_q_flags; } ;
struct rangelock {struct rl_q_entry* rl_currdep; int rl_waiters; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rl_q_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct rl_q_entry*,int ) ;
 struct rl_q_entry* FUNC_2 (struct rl_q_entry*,int ) ;
 int FUNC_3 (int *,struct rl_q_entry*,int ) ;
 scalar_t__ FUNC_4 (struct rl_q_entry*,struct rl_q_entry*) ;
 int VAR_2 ;
 int FUNC_5 (struct rl_q_entry*) ;

__attribute__((used)) static void
FUNC_6(struct rangelock *VAR_3)
{
 struct rl_q_entry *VAR_4, *VAR_5, *VAR_6;

 for (VAR_4 = VAR_3->rl_currdep; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  if (VAR_4->rl_q_flags & VAR_1) {

   for (VAR_6 = FUNC_0(&VAR_3->rl_waiters);
       !(VAR_6->rl_q_flags & VAR_1);
       VAR_6 = FUNC_2(VAR_6, VAR_2)) {
    if (FUNC_4(VAR_4, VAR_6))
     goto out;
   }
  } else {

   for (VAR_6 = FUNC_0(&VAR_3->rl_waiters);
       VAR_6 != VAR_4;
       VAR_6 = FUNC_2(VAR_6, VAR_2)) {
    if (FUNC_4(VAR_4, VAR_6))
     goto out;
   }


   FUNC_3(&VAR_3->rl_waiters, VAR_4, VAR_2);
   FUNC_1(&VAR_3->rl_waiters, VAR_4, VAR_2);
  }


  VAR_4->rl_q_flags |= VAR_0;
  FUNC_5(VAR_4);
 }
out:
 VAR_3->rl_currdep = VAR_4;
}
