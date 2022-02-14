
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int dummy; } ;
struct rtprio {int dummy; } ;
typedef int lwpid_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct sched_param const*,struct rtprio*) ;
 int FUNC_1 (int ,int ,struct rtprio*) ;

int
FUNC_2(lwpid_t VAR_1, int VAR_2, const struct sched_param *VAR_3)
{
 struct rtprio VAR_4;

 FUNC_0(VAR_2, VAR_3, &VAR_4);
 return (FUNC_1(VAR_0, VAR_1, &VAR_4));
}
