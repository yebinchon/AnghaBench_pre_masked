
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct abs_timeout {int clockid; int is_abs_real; struct timespec end; int cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct abs_timeout*) ;
 int FUNC_1 (int *,struct timespec const*,struct timespec*) ;

__attribute__((used)) static void
FUNC_2(struct abs_timeout *VAR_3, int VAR_4, int VAR_5,
 const struct timespec *VAR_6)
{

 VAR_3->clockid = VAR_4;
 if (!VAR_5) {
  VAR_3->is_abs_real = 0;
  FUNC_0(VAR_3);
  FUNC_1(&VAR_3->cur, VAR_6, &VAR_3->end);
 } else {
  VAR_3->end = *VAR_6;
  VAR_3->is_abs_real = VAR_4 == VAR_0 ||
      VAR_4 == VAR_1 ||
      VAR_4 == VAR_2;




  if (!VAR_3->is_abs_real) {
   FUNC_0(VAR_3);
  }
 }
}
