
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {int iif; int lock; int dst; int src; TYPE_1__ stamp; } ;


 int FUNC_0 (int *,struct in6_addr*) ;
 int FUNC_1 (int *,struct in6_addr*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct timeval *VAR_1,
           struct in6_addr *VAR_2,
           struct in6_addr *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(&VAR_0.lock);
 if (VAR_0.stamp.tv_sec != VAR_1->tv_sec ||
     VAR_0.stamp.tv_usec != VAR_1->tv_usec ||
     VAR_0.iif != VAR_4 ||
     !FUNC_1(&VAR_0.src, VAR_3) ||
     !FUNC_1(&VAR_0.dst, VAR_2)) {
  VAR_0.stamp.tv_sec = VAR_1->tv_sec;
  VAR_0.stamp.tv_usec = VAR_1->tv_usec;
  VAR_0.iif = VAR_4;
  FUNC_0(&VAR_0.src, VAR_3);
  FUNC_0(&VAR_0.dst, VAR_2);
  VAR_5 = 1;
 }
 FUNC_3(&VAR_0.lock);
 return VAR_5;
}
