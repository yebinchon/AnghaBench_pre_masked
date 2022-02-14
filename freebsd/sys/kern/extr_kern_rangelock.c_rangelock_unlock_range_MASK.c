
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_q_entry {int rl_q_flags; scalar_t__ rl_q_start; scalar_t__ rl_q_end; } ;
struct rangelock {int dummy; } ;
struct mtx {int dummy; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct rangelock*) ;
 int FUNC_5 (struct rangelock*,void*,struct mtx*,int) ;

void *
FUNC_6(struct rangelock *VAR_1, void *VAR_2, off_t VAR_3,
    off_t VAR_4, struct mtx *VAR_5)
{
 struct rl_q_entry *VAR_6;

 FUNC_1(VAR_1 != ((void*)0) && VAR_2 != ((void*)0) && VAR_5 != ((void*)0));
 VAR_6 = VAR_2;
 FUNC_0(VAR_6->rl_q_flags & VAR_0,
     ("Unlocking non-granted lock"));
 FUNC_0(VAR_6->rl_q_start == VAR_3, ("wrong start"));
 FUNC_0(VAR_6->rl_q_end >= VAR_4, ("wrong end"));

 FUNC_2(VAR_5);
 if (VAR_6->rl_q_end == VAR_4) {
  FUNC_5(VAR_1, VAR_2, VAR_5, 1);
  return (((void*)0));
 }
 VAR_6->rl_q_end = VAR_4;
 FUNC_4(VAR_1);
 FUNC_3(VAR_5);
 return (VAR_2);
}
