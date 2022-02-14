
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_security_struct {int sclass; int sid; } ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {scalar_t__ flags; } ;
struct common_audit_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int ,scalar_t__,struct common_audit_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct netlbl_lsm_secattr*) ;
 int FUNC_3 (struct netlbl_lsm_secattr*) ;
 int FUNC_4 (struct sk_buff*,int,int ) ;
 int FUNC_5 (struct sk_buff*,int ,struct netlbl_lsm_secattr*) ;
 int FUNC_6 (struct sk_buff*,struct netlbl_lsm_secattr*,scalar_t__*) ;

int FUNC_7(struct sk_security_struct *VAR_5,
    struct sk_buff *VAR_6,
    u16 VAR_7,
    struct common_audit_data *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 struct netlbl_lsm_secattr VAR_12;

 if (!FUNC_1())
  return 0;

 FUNC_3(&VAR_12);
 VAR_9 = FUNC_5(VAR_6, VAR_7, &VAR_12);
 if (VAR_9 == 0 && VAR_12.flags != VAR_0)
  VAR_9 = FUNC_6(VAR_6, &VAR_12, &VAR_10);
 else
  VAR_10 = VAR_2;
 FUNC_2(&VAR_12);
 if (VAR_9 != 0)
  return VAR_9;

 switch (VAR_5->sclass) {
 case 128:
  VAR_11 = VAR_4;
  break;
 case 129:
  VAR_11 = VAR_3;
  break;
 default:
  VAR_11 = VAR_1;
 }

 VAR_9 = FUNC_0(VAR_5->sid, VAR_10, VAR_5->sclass, VAR_11, VAR_8);
 if (VAR_9 == 0)
  return 0;

 if (VAR_10 != VAR_2)
  FUNC_4(VAR_6, VAR_9, 0);
 return VAR_9;
}
