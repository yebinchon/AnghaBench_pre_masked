
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {int lock; struct timespec xtime; int wall_to_monotonic; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct timespec) ;
 int FUNC_4 (struct timespec const*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(const struct timespec *VAR_2)
{
 struct timespec VAR_3;
 unsigned long VAR_4;

 if (!FUNC_4(VAR_2))
  return -VAR_0;

 FUNC_5(&VAR_1.lock, VAR_4);

 FUNC_1();

 VAR_3.tv_sec = VAR_2->tv_sec - VAR_1.xtime.tv_sec;
 VAR_3.tv_nsec = VAR_2->tv_nsec - VAR_1.xtime.tv_nsec;
 VAR_1.wall_to_monotonic =
   FUNC_3(VAR_1.wall_to_monotonic, VAR_3);

 VAR_1.xtime = *VAR_2;
 FUNC_2(1);

 FUNC_6(&VAR_1.lock, VAR_4);


 FUNC_0();

 return 0;
}
