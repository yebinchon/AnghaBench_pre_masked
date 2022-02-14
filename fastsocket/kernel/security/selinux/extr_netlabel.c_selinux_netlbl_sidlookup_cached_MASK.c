
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
        struct netlbl_lsm_secattr *VAR_3,
        u32 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 == 0 &&
     (VAR_3->flags & VAR_1) &&
     (VAR_3->flags & VAR_0))
  FUNC_0(VAR_2, VAR_3);

 return VAR_5;
}
