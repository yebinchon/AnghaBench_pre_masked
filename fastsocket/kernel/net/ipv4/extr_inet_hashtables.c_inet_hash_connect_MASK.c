
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_timewait_death_row {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inet_timewait_death_row*,struct sock*,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct inet_timewait_death_row*,struct sock*,int ,int ,int ) ;

int FUNC_3(struct inet_timewait_death_row *VAR_3,
        struct sock *VAR_4)
{
 int VAR_5;
 if (VAR_2)
  VAR_5 = FUNC_2(VAR_3, VAR_4, FUNC_1(VAR_4),
    VAR_0, VAR_1);
 else
  VAR_5 = FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_4),
   VAR_0, VAR_1);

 return VAR_5;
}
