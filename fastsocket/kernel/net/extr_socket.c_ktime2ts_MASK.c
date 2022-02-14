
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_4__ {scalar_t__ tv64; } ;
typedef TYPE_1__ ktime_t ;


 struct timespec FUNC_0 (TYPE_1__) ;

__attribute__((used)) static int FUNC_1(ktime_t VAR_0, struct timespec *VAR_1)
{
 if (VAR_0.tv64) {
  *VAR_1 = FUNC_0(VAR_0);
  return 1;
 } else {
  return 0;
 }
}
