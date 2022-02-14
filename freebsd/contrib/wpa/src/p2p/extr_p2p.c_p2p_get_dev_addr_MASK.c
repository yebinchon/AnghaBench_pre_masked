
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int p2p_device_addr; } ;
struct p2p_device {TYPE_1__ info; } ;
struct p2p_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct p2p_device* FUNC_1 (struct p2p_data*,int const*) ;

int FUNC_2(struct p2p_data *VAR_1, const u8 *VAR_2,
      u8 *VAR_3)
{
 struct p2p_device *VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
  return -1;
 FUNC_0(VAR_3, VAR_4->info.p2p_device_addr, VAR_0);
 return 0;
}
