
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_0 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_5, struct net_device *VAR_6,
         unsigned short VAR_7,
         const void *VAR_8, const void *VAR_9, unsigned VAR_10)
{
 unsigned char *VAR_11 = FUNC_0(VAR_5, VAR_3 + 2);

 *VAR_11++ = VAR_2 | VAR_4;
 *VAR_11++ = 0x00;
 *VAR_11++ = VAR_1;
 *VAR_11++ = 0x7F;
 *VAR_11++ = VAR_0;

 if (VAR_8 != ((void*)0))
  return 37;

 return -37;
}
