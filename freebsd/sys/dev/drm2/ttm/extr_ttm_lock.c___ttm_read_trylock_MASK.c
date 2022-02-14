
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {scalar_t__ rw; scalar_t__ flags; int signal; int kill_takers; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ttm_lock *VAR_0, bool *VAR_1)
{
 bool VAR_2 = 1;

 *VAR_1 = 0;

 if (FUNC_1(VAR_0->kill_takers)) {
  FUNC_0(VAR_0->signal);
  return 0;
 }
 if (VAR_0->rw >= 0 && VAR_0->flags == 0) {
  ++VAR_0->rw;
  VAR_2 = 0;
  *VAR_1 = 1;
 } else if (VAR_0->flags == 0) {
  VAR_2 = 0;
 }

 return !VAR_2;
}
