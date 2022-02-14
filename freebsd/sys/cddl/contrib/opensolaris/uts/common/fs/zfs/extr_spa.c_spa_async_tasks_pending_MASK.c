
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int spa_async_tasks; scalar_t__ spa_ccw_fail_time; } ;
typedef TYPE_1__ spa_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;

__attribute__((used)) static boolean_t
FUNC_1(spa_t *VAR_5)
{
 uint_t VAR_6;
 uint_t VAR_7;
 boolean_t VAR_8;

 VAR_6 = VAR_5->spa_async_tasks & ~(VAR_2 |
     VAR_3);
 VAR_7 = VAR_5->spa_async_tasks & VAR_2;
 if (VAR_5->spa_ccw_fail_time == 0) {
  VAR_8 = VAR_0;
 } else {
  VAR_8 =
      (FUNC_0() - VAR_5->spa_ccw_fail_time) <
      (VAR_4 * VAR_1);
 }

 return (VAR_6 || (VAR_7 && !VAR_8));
}
