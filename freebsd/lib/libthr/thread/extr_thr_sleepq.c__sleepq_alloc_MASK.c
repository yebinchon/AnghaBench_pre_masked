
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleepqueue {int sq_freeq; int sq_blocked; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sleepqueue* FUNC_2 (int,int) ;

struct sleepqueue *
FUNC_3(void)
{
 struct sleepqueue *VAR_0;

 VAR_0 = FUNC_2(1, sizeof(struct sleepqueue));
 FUNC_1(&VAR_0->sq_blocked);
 FUNC_0(&VAR_0->sq_freeq);
 return (VAR_0);
}
