
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int flags; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int,int ,struct net_device*,int ,unsigned char const*,unsigned char const*,unsigned char const*) ;
 int FUNC_1 (struct sk_buff*) ;

void FUNC_2(int VAR_1, int VAR_2, __be32 VAR_3,
       struct net_device *VAR_4, __be32 VAR_5,
       const unsigned char *VAR_6, const unsigned char *VAR_7,
       const unsigned char *VAR_8)
{
 struct sk_buff *VAR_9;





 if (VAR_4->flags&VAR_0)
  return;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, VAR_8);
 if (VAR_9 == ((void*)0)) {
  return;
 }

 FUNC_1(VAR_9);
}
