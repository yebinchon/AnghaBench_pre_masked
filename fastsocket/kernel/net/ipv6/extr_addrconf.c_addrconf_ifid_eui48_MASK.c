
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {scalar_t__ addr_len; int dev_id; scalar_t__ dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, struct net_device *VAR_2)
{
 if (VAR_2->addr_len != VAR_0)
  return -1;
 FUNC_0(VAR_1, VAR_2->dev_addr, 3);
 FUNC_0(VAR_1 + 5, VAR_2->dev_addr + 3, 3);
 if (VAR_2->dev_id) {
  VAR_1[3] = (VAR_2->dev_id >> 8) & 0xFF;
  VAR_1[4] = VAR_2->dev_id & 0xFF;
 } else {
  VAR_1[3] = 0xFF;
  VAR_1[4] = 0xFE;
  VAR_1[0] ^= 2;
 }
 return 0;
}
