
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct event_base {int n_common_timeouts; } ;


 int FUNC_0 (struct timeval const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_1(const struct timeval *VAR_2,
    const struct event_base *VAR_3)
{
 int VAR_4;
 if ((VAR_2->tv_usec & VAR_1) != VAR_0)
  return 0;
 VAR_4 = FUNC_0(VAR_2);
 return VAR_4 < VAR_3->n_common_timeouts;
}
