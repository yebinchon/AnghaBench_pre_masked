
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ previous; scalar_t__ delay_s; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void)
{
 time_t VAR_1 = FUNC_0(((void*)0));
 if ((VAR_0.previous + VAR_0.delay_s) < VAR_1) {
  VAR_0.previous = VAR_1;
  return 1;
 }
 return 0;
}
