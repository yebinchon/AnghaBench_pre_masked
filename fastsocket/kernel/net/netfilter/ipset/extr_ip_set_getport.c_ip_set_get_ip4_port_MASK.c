
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct iphdr {int protocol; int frag_off; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff const*,int,unsigned int,int,int *,int *) ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 unsigned int FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (int ) ;

bool
FUNC_4(const struct sk_buff *VAR_1, bool VAR_2,
      __be16 *VAR_3, u8 *VAR_4)
{
 const struct iphdr *VAR_5 = FUNC_1(VAR_1);
 unsigned int VAR_6 = FUNC_2(VAR_1);
 int VAR_7 = VAR_5->protocol;


 if (VAR_7 <= 0 || (FUNC_3(VAR_5->frag_off) & VAR_0))
  return 0;

 return FUNC_0(VAR_1, VAR_7, VAR_6, VAR_2, VAR_3, VAR_4);
}
