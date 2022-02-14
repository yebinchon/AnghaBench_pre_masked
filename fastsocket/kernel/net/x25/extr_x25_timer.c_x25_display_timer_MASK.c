
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long expires; } ;
struct x25_sock {TYPE_1__ timer; } ;
struct sock {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct x25_sock* FUNC_1 (struct sock*) ;

unsigned long FUNC_2(struct sock *VAR_1)
{
 struct x25_sock *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_0(&VAR_2->timer))
  return 0;

 return VAR_2->timer.expires - VAR_0;
}
