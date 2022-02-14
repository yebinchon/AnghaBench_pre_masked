
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_device {int interface_addr; } ;
struct p2p_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct p2p_device* FUNC_2 (struct p2p_data*,int const*) ;

int FUNC_3(struct p2p_data *VAR_1, const u8 *VAR_2,
      u8 *VAR_3)
{
 struct p2p_device *VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0) || FUNC_0(VAR_4->interface_addr))
  return -1;
 FUNC_1(VAR_3, VAR_4->interface_addr, VAR_0);
 return 0;
}
