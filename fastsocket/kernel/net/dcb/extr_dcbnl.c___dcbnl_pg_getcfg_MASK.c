
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct dcbmsg {int cmd; int dcb_family; } ;
struct TYPE_2__ {int (* getpgbwgcfgtx ) (struct net_device*,int,int *) ;int (* getpgbwgcfgrx ) (struct net_device*,int,int *) ;int (* getpgtccfgtx ) (struct net_device*,int,int *,int *,int *,int *) ;int (* getpgtccfgrx ) (struct net_device*,int,int *,int *,int *,int *) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_20 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_7 (struct sk_buff*,int,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sk_buff*,int *,int ) ;
 int FUNC_11 (struct net_device*,int,int *,int *,int *,int *) ;
 int FUNC_12 (struct net_device*,int,int *,int *,int *,int *) ;
 int FUNC_13 (struct net_device*,int,int *) ;
 int FUNC_14 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_25, struct nlattr **VAR_26,
                             u32 VAR_27, u32 VAR_28, u16 VAR_29, int VAR_30)
{
 struct sk_buff *VAR_31;
 struct nlmsghdr *VAR_32;
 struct dcbmsg *VAR_33;
 struct nlattr *VAR_34, *VAR_35, *VAR_36;
 struct nlattr *VAR_37[VAR_8 + 1];
 struct nlattr *VAR_38[VAR_14 + 1];
 u8 VAR_39, VAR_40, VAR_41, VAR_42;
 int VAR_43 = -VAR_18;
 int VAR_44 = 0;
 int VAR_45;

 if (!VAR_26[VAR_1] ||
     !VAR_25->dcbnl_ops->getpgtccfgtx ||
     !VAR_25->dcbnl_ops->getpgtccfgrx ||
     !VAR_25->dcbnl_ops->getpgbwgcfgtx ||
     !VAR_25->dcbnl_ops->getpgbwgcfgrx)
  return VAR_43;

 VAR_43 = FUNC_6(VAR_37, VAR_8,
                        VAR_26[VAR_1], VAR_22);

 if (VAR_43)
  goto err_out;

 VAR_31 = FUNC_9(VAR_20, VAR_19);
 if (!VAR_31)
  goto err_out;

 VAR_32 = FUNC_1(VAR_31, VAR_27, VAR_28, VAR_21, sizeof(*VAR_33), VAR_29);

 VAR_33 = FUNC_0(VAR_32);
 VAR_33->dcb_family = VAR_0;
 VAR_33->cmd = (VAR_30) ? VAR_3 : VAR_4;

 VAR_34 = FUNC_5(VAR_31, VAR_1);
 if (!VAR_34)
  goto err;

 if (VAR_37[VAR_11])
  VAR_44 = 1;

 for (VAR_45 = VAR_9; VAR_45 <= VAR_10; VAR_45++) {
  if (!VAR_44 && !VAR_37[VAR_45])
   continue;

  if (VAR_37[VAR_11])
   VAR_36 = VAR_37[VAR_11];
  else
   VAR_36 = VAR_37[VAR_45];
  VAR_43 = FUNC_6(VAR_38, VAR_14,
           VAR_36, VAR_23);
  if (VAR_43)
   goto err_pg;

  VAR_35 = FUNC_5(VAR_31, VAR_45);
  if (!VAR_35)
   goto err_pg;

  VAR_40 = VAR_2;
  VAR_39 = VAR_2;
  VAR_41 = VAR_2;
  VAR_42 = VAR_2;

  if (VAR_30) {

   VAR_25->dcbnl_ops->getpgtccfgrx(VAR_25,
      VAR_45 - VAR_9, &VAR_39,
      &VAR_40, &VAR_41, &VAR_42);
  } else {

   VAR_25->dcbnl_ops->getpgtccfgtx(VAR_25,
      VAR_45 - VAR_9, &VAR_39,
      &VAR_40, &VAR_41, &VAR_42);
  }

  if (VAR_38[VAR_15] ||
      VAR_38[VAR_12]) {
   VAR_43 = FUNC_7(VAR_31,
                    VAR_15, VAR_40);
   if (VAR_43)
    goto err_param;
  }
  if (VAR_38[VAR_17] ||
      VAR_38[VAR_12]) {
   VAR_43 = FUNC_7(VAR_31,
                    VAR_17, VAR_42);
   if (VAR_43)
    goto err_param;
  }
  if (VAR_38[VAR_16] ||
      VAR_38[VAR_12]) {
   VAR_43 = FUNC_7(VAR_31,
                    VAR_16, VAR_39);
   if (VAR_43)
    goto err_param;
  }
  if (VAR_38[VAR_13] ||
      VAR_38[VAR_12]) {
   VAR_43 = FUNC_7(VAR_31, VAR_13,
                    VAR_41);
   if (VAR_43)
    goto err_param;
  }
  FUNC_4(VAR_31, VAR_35);
 }

 if (VAR_37[VAR_7])
  VAR_44 = 1;
 else
  VAR_44 = 0;

 for (VAR_45 = VAR_5; VAR_45 <= VAR_6; VAR_45++) {
  if (!VAR_44 && !VAR_37[VAR_45])
   continue;

  VAR_41 = VAR_2;

  if (VAR_30) {

   VAR_25->dcbnl_ops->getpgbwgcfgrx(VAR_25,
     VAR_45 - VAR_5, &VAR_41);
  } else {

   VAR_25->dcbnl_ops->getpgbwgcfgtx(VAR_25,
     VAR_45 - VAR_5, &VAR_41);
  }
  VAR_43 = FUNC_7(VAR_31, VAR_45, VAR_41);

  if (VAR_43)
   goto err_pg;
 }

 FUNC_4(VAR_31, VAR_34);

 FUNC_8(VAR_31, VAR_32);

 VAR_43 = FUNC_10(VAR_31, &VAR_24, VAR_27);
 if (VAR_43)
  goto err_out;

 return 0;

err_param:
 FUNC_3(VAR_31, VAR_35);
err_pg:
 FUNC_3(VAR_31, VAR_34);
nlmsg_failure:
err:
 FUNC_2(VAR_31);
err_out:
 VAR_43 = -VAR_18;
 return VAR_43;
}
