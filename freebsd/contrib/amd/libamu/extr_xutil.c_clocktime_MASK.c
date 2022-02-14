
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int ;
typedef int time_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {void* nt_useconds; void* nt_seconds; } ;
typedef TYPE_1__ nfstime ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int ,char*) ;

time_t
FUNC_2(nfstime *VAR_1)
{
  static struct timeval VAR_2;

  if (FUNC_0(&VAR_2, ((void*)0)) < 0) {
    FUNC_1(VAR_0, "clocktime: gettimeofday: %m");

    VAR_2.tv_sec++;
  }

  if (VAR_1) {
    VAR_1->nt_seconds = (u_int) VAR_2.tv_sec;
    VAR_1->nt_useconds = (u_int) VAR_2.tv_usec;
  }
  return (time_t) VAR_2.tv_sec;
}
