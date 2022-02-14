
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct proc {TYPE_2__* p_stats; int p_pid; } ;
typedef int id ;
struct TYPE_3__ {int tv_usec; int tv_sec; } ;
struct TYPE_4__ {TYPE_1__ p_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void**,int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*) ;

void
FUNC_3(void *VAR_3, u_int8_t *VAR_4, int VAR_5)
{
 union {
  u_int32_t lval;
  u_int8_t cval[4];
 } VAR_6;
 struct proc *VAR_7;

 if (VAR_3 == ((void*)0)) {

  FUNC_1(VAR_4, VAR_2);
  return;
 }
 if ((VAR_5 & VAR_1) != 0) {
  VAR_7 = (struct proc *)VAR_3;
  VAR_6.lval = VAR_7->p_pid;
  *VAR_4++ = VAR_6.cval[0];
  *VAR_4++ = VAR_6.cval[1];
  *VAR_4++ = VAR_6.cval[2];
  *VAR_4++ = VAR_6.cval[3];
  VAR_6.lval = VAR_7->p_stats->p_start.tv_sec;
  *VAR_4++ = VAR_6.cval[0];
  *VAR_4++ = VAR_6.cval[1];
  *VAR_4++ = VAR_6.cval[2];
  *VAR_4++ = VAR_6.cval[3];
  VAR_6.lval = VAR_7->p_stats->p_start.tv_usec;
  *VAR_4++ = VAR_6.cval[0];
  *VAR_4++ = VAR_6.cval[1];
  *VAR_4++ = VAR_6.cval[2];
  *VAR_4 = VAR_6.cval[3];
 } else if ((VAR_5 & VAR_0) != 0) {
  FUNC_0(&VAR_3, VAR_4, sizeof(VAR_3));
  FUNC_1(&VAR_4[sizeof(VAR_3)], VAR_2 - sizeof(VAR_3));
 } else {
  FUNC_2("nfscl_filllockowner: not F_POSIX or F_FLOCK\n");
  FUNC_1(VAR_4, VAR_2);
 }
}
