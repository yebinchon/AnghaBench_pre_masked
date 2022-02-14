
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* setpgbwgcfgtx ) (struct net_device*,int,int ) ;int (* setpgbwgcfgrx ) (struct net_device*,int,int ) ;int (* setpgtccfgtx ) (struct net_device*,int,int ,int ,int ,int ) ;int (* setpgtccfgrx ) (struct net_device*,int,int ,int ,int ,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,int ,size_t,int ,int ,int ) ;
 int VAR_17 ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_3 (struct net_device*,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct net_device*,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,int,int ) ;
 int FUNC_6 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_18, struct nlattr **VAR_19,
                             u32 VAR_20, u32 VAR_21, u16 VAR_22, int VAR_23)
{
 struct nlattr *VAR_24[VAR_6 + 1];
 struct nlattr *VAR_25[VAR_10 + 1];
 int VAR_26 = -VAR_14;
 int VAR_27;
 u8 VAR_28;
 u8 VAR_29;
 u8 VAR_30;
 u8 VAR_31;

 if (!VAR_19[VAR_0] ||
     !VAR_18->dcbnl_ops->setpgtccfgtx ||
     !VAR_18->dcbnl_ops->setpgtccfgrx ||
     !VAR_18->dcbnl_ops->setpgbwgcfgtx ||
     !VAR_18->dcbnl_ops->setpgbwgcfgrx)
  return VAR_26;

 VAR_26 = FUNC_2(VAR_24, VAR_6,
                        VAR_19[VAR_0], VAR_16);
 if (VAR_26)
  goto err;

 for (VAR_27 = VAR_7; VAR_27 <= VAR_8; VAR_27++) {
  if (!VAR_24[VAR_27])
   continue;

  VAR_26 = FUNC_2(VAR_25, VAR_10,
                         VAR_24[VAR_27], VAR_17);
  if (VAR_26)
   goto err;

  VAR_28 = VAR_1;
  VAR_30 = VAR_1;
  VAR_31 = VAR_1;
  VAR_29 = VAR_1;

  if (VAR_25[VAR_12])
   VAR_30 =
       FUNC_1(VAR_25[VAR_12]);

  if (VAR_25[VAR_11])
   VAR_28 = FUNC_1(VAR_25[VAR_11]);

  if (VAR_25[VAR_9])
   VAR_31 = FUNC_1(VAR_25[VAR_9]);

  if (VAR_25[VAR_13])
   VAR_29 =
        FUNC_1(VAR_25[VAR_13]);


  if (VAR_23) {

   VAR_18->dcbnl_ops->setpgtccfgrx(VAR_18,
    VAR_27 - VAR_7,
    VAR_30, VAR_28, VAR_31, VAR_29);
  } else {

   VAR_18->dcbnl_ops->setpgtccfgtx(VAR_18,
    VAR_27 - VAR_7,
    VAR_30, VAR_28, VAR_31, VAR_29);
  }
 }

 for (VAR_27 = VAR_4; VAR_27 <= VAR_5; VAR_27++) {
  if (!VAR_24[VAR_27])
   continue;

  VAR_31 = FUNC_1(VAR_24[VAR_27]);


  if (VAR_23) {

   VAR_18->dcbnl_ops->setpgbwgcfgrx(VAR_18,
      VAR_27 - VAR_4, VAR_31);
  } else {

   VAR_18->dcbnl_ops->setpgbwgcfgtx(VAR_18,
      VAR_27 - VAR_4, VAR_31);
  }
 }

 VAR_26 = FUNC_0(0, VAR_15,
     (VAR_23 ? VAR_2 : VAR_3),
     VAR_0, VAR_20, VAR_21, VAR_22);

err:
 return VAR_26;
}
