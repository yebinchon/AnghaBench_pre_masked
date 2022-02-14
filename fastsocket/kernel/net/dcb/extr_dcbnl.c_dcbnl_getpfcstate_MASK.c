
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* getpfcstate ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, struct nlattr **VAR_5,
                             u32 VAR_6, u32 VAR_7, u16 VAR_8)
{
 int VAR_9 = -VAR_2;

 if (!VAR_4->dcbnl_ops->getpfcstate)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_4->dcbnl_ops->getpfcstate(VAR_4), VAR_3,
                   VAR_1, VAR_0,
                   VAR_6, VAR_7, VAR_8);

 return VAR_9;
}
