
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct fio_timeval {int ftv_usec; int ftv_sec; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct timeval *VAR_0, struct fio_timeval *VAR_1)
{
  FUNC_1 (VAR_0->tv_sec, VAR_1->ftv_sec);
  FUNC_0 (VAR_0->tv_usec, VAR_1->ftv_usec);
}
