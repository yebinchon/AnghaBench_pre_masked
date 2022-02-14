
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nlattr {scalar_t__ nla_type; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* setbcncfg ) (struct net_device*,int,int ) ;int (* setbcnrp ) (struct net_device*,scalar_t__,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,size_t,int ,int ,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ) ;
 int FUNC_5 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10, struct nlattr **VAR_11,
                            u32 VAR_12, u32 VAR_13, u16 VAR_14)
{
 struct nlattr *VAR_15[VAR_2 + 1];
 int VAR_16;
 int VAR_17 = -VAR_7;
 u8 VAR_18;
 u32 VAR_19;

 if (!VAR_11[VAR_0] || !VAR_10->dcbnl_ops->setbcncfg ||
     !VAR_10->dcbnl_ops->setbcnrp)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_15, VAR_2,
                        VAR_11[VAR_0],
                        VAR_9);
 if (VAR_17)
  goto err;

 for (VAR_16 = VAR_4; VAR_16 <= VAR_5; VAR_16++) {
  if (VAR_15[VAR_16] == ((void*)0))
   continue;
  VAR_18 = FUNC_2(VAR_15[VAR_16]);
  VAR_10->dcbnl_ops->setbcnrp(VAR_10,
   VAR_15[VAR_16]->nla_type - VAR_4, VAR_18);
 }

 for (VAR_16 = VAR_1; VAR_16 <= VAR_3; VAR_16++) {
  if (VAR_15[VAR_16] == ((void*)0))
   continue;
  VAR_19 = FUNC_1(VAR_15[VAR_16]);
  VAR_10->dcbnl_ops->setbcncfg(VAR_10,
                                      VAR_16, VAR_19);
 }

 VAR_17 = FUNC_0(0, VAR_8, VAR_6, VAR_0,
                   VAR_12, VAR_13, VAR_14);
err:
 return VAR_17;
}
