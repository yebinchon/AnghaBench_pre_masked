
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct thr_param {scalar_t__ rtp; } ;
struct rtprio {int dummy; } ;


 int FUNC_0 (scalar_t__,struct rtprio*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*,struct rtprio*,int ,struct thr_param*) ;

int
FUNC_2(struct thread *VAR_1, struct thr_param *VAR_2)
{
 struct rtprio VAR_3, *VAR_4;
 int VAR_5;

 VAR_4 = ((void*)0);
 if (VAR_2->rtp != 0) {
  VAR_5 = FUNC_0(VAR_2->rtp, &VAR_3, sizeof(struct rtprio));
  if (VAR_5)
   return (VAR_5);
  VAR_4 = &VAR_3;
 }
 return (FUNC_1(VAR_1, VAR_4, VAR_0, VAR_2));
}
