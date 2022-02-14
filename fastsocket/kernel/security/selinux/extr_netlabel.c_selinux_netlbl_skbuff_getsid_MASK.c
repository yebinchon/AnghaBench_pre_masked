
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {scalar_t__ flags; int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct netlbl_lsm_secattr*) ;
 int FUNC_3 (struct sk_buff*,int ,struct netlbl_lsm_secattr*) ;
 int FUNC_4 (struct sk_buff*,struct netlbl_lsm_secattr*,int *) ;

int FUNC_5(struct sk_buff *VAR_2,
     u16 VAR_3,
     u32 *VAR_4,
     u32 *VAR_5)
{
 int VAR_6;
 struct netlbl_lsm_secattr VAR_7;

 if (!FUNC_0()) {
  *VAR_5 = VAR_1;
  return 0;
 }

 FUNC_2(&VAR_7);
 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_7);
 if (VAR_6 == 0 && VAR_7.flags != VAR_0)
  VAR_6 = FUNC_4(VAR_2, &VAR_7, VAR_5);
 else
  *VAR_5 = VAR_1;
 *VAR_4 = VAR_7.type;
 FUNC_1(&VAR_7);

 return VAR_6;
}
