
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
struct TYPE_2__ {int (* setnumtcs ) (struct net_device*,int,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ,size_t,int ,int ,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int,struct nlattr*,int ) ;
 int FUNC_3 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7, struct nlattr **VAR_8,
                           u32 VAR_9, u32 VAR_10, u16 VAR_11)
{
 struct nlattr *VAR_12[VAR_3 + 1];
 int VAR_13 = -VAR_4;
 u8 VAR_14;
 int VAR_15;

 if (!VAR_8[VAR_0] || !VAR_7->dcbnl_ops->setnumtcs)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_12, VAR_3, VAR_8[VAR_0],
                        VAR_6);

 if (VAR_13) {
  VAR_13 = -VAR_4;
  goto err;
 }

 for (VAR_15 = VAR_2+1; VAR_15 <= VAR_3; VAR_15++) {
  if (VAR_12[VAR_15] == ((void*)0))
   continue;

  VAR_14 = FUNC_1(VAR_12[VAR_15]);

  VAR_13 = VAR_7->dcbnl_ops->setnumtcs(VAR_7, VAR_15, VAR_14);

  if (VAR_13)
   goto operr;
 }

operr:
 VAR_13 = FUNC_0(!!VAR_13, VAR_5, VAR_1,
                   VAR_0, VAR_9, VAR_10, VAR_11);

err:
 return VAR_13;
}
