
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; } ;
struct ntptimeval {int time_state; } ;
struct ntp_gettime_args {int ntvp; } ;
typedef int ntv ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct ntptimeval*,int ,int) ;
 int FUNC_3 (struct ntptimeval*,int ,int) ;
 int FUNC_4 (struct ntptimeval*) ;

int
FUNC_5(struct thread *VAR_0, struct ntp_gettime_args *VAR_1)
{
 struct ntptimeval VAR_2;

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));

 FUNC_0();
 FUNC_4(&VAR_2);
 FUNC_1();

 VAR_0->td_retval[0] = VAR_2.time_state;
 return (FUNC_2(&VAR_2, VAR_1->ntvp, sizeof(VAR_2)));
}
