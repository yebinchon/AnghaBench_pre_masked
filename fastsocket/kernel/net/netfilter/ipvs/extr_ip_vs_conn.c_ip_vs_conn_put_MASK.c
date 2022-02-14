
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {unsigned long timeout; int flags; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_vs_conn*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(struct ip_vs_conn *VAR_2)
{
 unsigned long VAR_3 = VAR_2->timeout;

 if (VAR_2->flags & VAR_0)
  VAR_3 = 0;


 FUNC_1(&VAR_2->timer, VAR_1+VAR_3);

 FUNC_0(VAR_2);
}
