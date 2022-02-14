
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct inet_frags {TYPE_1__ secret_timer; scalar_t__ secret_interval; scalar_t__ rnd; int lock; int * hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,unsigned long) ;

void FUNC_4(struct inet_frags *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(&VAR_4->hash[VAR_5]);

 FUNC_2(&VAR_4->lock);

 VAR_4->rnd = (u32) ((VAR_3 ^ (VAR_3>>7)) ^
       (VAR_2 ^ (VAR_2 >> 6)));

 FUNC_3(&VAR_4->secret_timer, VAR_1,
   (unsigned long)VAR_4);
 VAR_4->secret_timer.expires = VAR_2 + VAR_4->secret_interval;
 FUNC_1(&VAR_4->secret_timer);
}
