
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
struct TYPE_2__ {int (* setpfccfg ) (struct net_device*,scalar_t__,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,size_t,int ,int ,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_3 (struct net_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8, struct nlattr **VAR_9,
                           u32 VAR_10, u32 VAR_11, u16 VAR_12)
{
 struct nlattr *VAR_13[VAR_4 + 1];
 int VAR_14;
 int VAR_15 = -VAR_5;
 u8 VAR_16;

 if (!VAR_9[VAR_0] || !VAR_8->dcbnl_ops->setpfccfg)
  return VAR_15;

 VAR_15 = FUNC_2(VAR_13, VAR_4,
                        VAR_9[VAR_0],
                        VAR_7);
 if (VAR_15)
  goto err;

 for (VAR_14 = VAR_2; VAR_14 <= VAR_3; VAR_14++) {
  if (VAR_13[VAR_14] == ((void*)0))
   continue;
  VAR_16 = FUNC_1(VAR_13[VAR_14]);
  VAR_8->dcbnl_ops->setpfccfg(VAR_8,
   VAR_13[VAR_14]->nla_type - VAR_2, VAR_16);
 }

 VAR_15 = FUNC_0(0, VAR_6, VAR_1, VAR_0,
                   VAR_10, VAR_11, VAR_12);
err:
 return VAR_15;
}
