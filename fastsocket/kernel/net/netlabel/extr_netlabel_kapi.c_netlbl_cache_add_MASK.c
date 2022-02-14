
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int flags; } ;


 scalar_t__ FUNC_0 (struct sk_buff const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff const*,struct netlbl_lsm_secattr const*) ;

int FUNC_2(const struct sk_buff *VAR_2,
       const struct netlbl_lsm_secattr *VAR_3)
{
 if ((VAR_3->flags & VAR_1) == 0)
  return -VAR_0;

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2, VAR_3);

 return -VAR_0;
}
