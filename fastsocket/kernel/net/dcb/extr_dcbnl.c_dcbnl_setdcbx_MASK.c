
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
struct TYPE_2__ {int (* setdcbx ) (struct net_device*,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,size_t,int ,int ,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, struct nlattr **VAR_6,
    u32 VAR_7, u32 VAR_8, u16 VAR_9)
{
 int VAR_10;
 u8 VAR_11;

 if (!VAR_5->dcbnl_ops->setdcbx)
  return -VAR_3;

 if (!VAR_6[VAR_0])
  return -VAR_2;

 VAR_11 = FUNC_1(VAR_6[VAR_0]);

 VAR_10 = FUNC_0(VAR_5->dcbnl_ops->setdcbx(VAR_5, VAR_11),
     VAR_4, VAR_1, VAR_0,
     VAR_7, VAR_8, VAR_9);

 return VAR_10;
}
