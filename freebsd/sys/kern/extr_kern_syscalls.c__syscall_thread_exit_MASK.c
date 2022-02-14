
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct thread {int dummy; } ;
struct sysent {scalar_t__ sy_thrcnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;

void
FUNC_1(struct thread *VAR_1, struct sysent *VAR_2)
{
 u_int32_t VAR_3, VAR_4;

 do {
  VAR_4 = VAR_2->sy_thrcnt;
  VAR_3 = VAR_4 - VAR_0;
 } while (FUNC_0(&VAR_2->sy_thrcnt, VAR_4, VAR_3) == 0);
}
