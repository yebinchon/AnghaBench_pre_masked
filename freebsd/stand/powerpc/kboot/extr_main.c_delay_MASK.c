
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct host_timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (struct host_timeval*,int *) ;

void
FUNC_1(int VAR_0)
{
 struct host_timeval VAR_1, VAR_2;
 uint64_t VAR_3, VAR_4;
 FUNC_0(&VAR_1, ((void*)0));
 VAR_3 = VAR_1.tv_sec*1000000 + VAR_1.tv_usec;
 do {
  FUNC_0(&VAR_2, ((void*)0));
  VAR_4 = VAR_2.tv_sec*1000000 + VAR_2.tv_usec;
 } while (VAR_4 < VAR_3 + VAR_0);
}
