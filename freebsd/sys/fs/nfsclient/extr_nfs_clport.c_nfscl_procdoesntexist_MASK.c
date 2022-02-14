
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct proc {TYPE_2__* p_stats; } ;
typedef scalar_t__ pid_t ;
struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {TYPE_1__ p_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 struct proc* FUNC_1 (scalar_t__) ;

int
FUNC_2(u_int8_t *VAR_1)
{
 union {
  u_int32_t lval;
  u_int8_t cval[4];
 } VAR_2;
 struct proc *VAR_3;
 pid_t VAR_4;
 int VAR_5, VAR_6 = 0;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_1[VAR_5] != 0)
   break;
 if (VAR_5 == VAR_0)
  return (0);

 VAR_2.cval[0] = *VAR_1++;
 VAR_2.cval[1] = *VAR_1++;
 VAR_2.cval[2] = *VAR_1++;
 VAR_2.cval[3] = *VAR_1++;
 VAR_4 = VAR_2.lval;
 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3 == ((void*)0))
  return (1);
 if (VAR_3->p_stats == ((void*)0)) {
  FUNC_0(VAR_3);
  return (0);
 }
 VAR_2.cval[0] = *VAR_1++;
 VAR_2.cval[1] = *VAR_1++;
 VAR_2.cval[2] = *VAR_1++;
 VAR_2.cval[3] = *VAR_1++;
 if (VAR_2.lval != VAR_3->p_stats->p_start.tv_sec) {
  VAR_6 = 1;
 } else {
  VAR_2.cval[0] = *VAR_1++;
  VAR_2.cval[1] = *VAR_1++;
  VAR_2.cval[2] = *VAR_1++;
  VAR_2.cval[3] = *VAR_1;
  if (VAR_2.lval != VAR_3->p_stats->p_start.tv_usec)
   VAR_6 = 1;
 }
 FUNC_0(VAR_3);
 return (VAR_6);
}
