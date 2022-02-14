
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {scalar_t__ dead; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inet6_ifaddr *VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_3);
 if (VAR_4->dead == VAR_1) {
  VAR_4->dead = VAR_2;
  VAR_5 = 0;
 }
 FUNC_1(&VAR_3);

 return VAR_5;
}
