
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {void* dev_addr; } ;


 unsigned short VAR_0 ;
 int * FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1, struct net_device *VAR_2,
    unsigned short VAR_3, const void *VAR_4,
    const void *VAR_5, unsigned VAR_6)
{
 u8 *VAR_7 = FUNC_0(VAR_1, 1);

 if (VAR_3 != VAR_0)
  return -1;

 if (!VAR_5)
  VAR_5 = VAR_2->dev_addr;
 *VAR_7 = *(const u8 *)VAR_5;
 return 1;
}
