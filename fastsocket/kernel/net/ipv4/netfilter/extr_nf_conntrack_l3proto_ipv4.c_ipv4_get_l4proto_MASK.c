
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct iphdr {int frag_off; int ihl; int protocol; } ;
typedef int _iph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff const*,unsigned int,int,struct iphdr*) ;

__attribute__((used)) static int FUNC_2(const struct sk_buff *VAR_3, unsigned int VAR_4,
       unsigned int *VAR_5, u_int8_t *VAR_6)
{
 const struct iphdr *VAR_7;
 struct iphdr VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_4, sizeof(VAR_8), &VAR_8);
 if (VAR_7 == ((void*)0))
  return -VAR_2;



 if (VAR_7->frag_off & FUNC_0(VAR_0))
  return -VAR_2;

 *VAR_5 = VAR_4 + (VAR_7->ihl << 2);
 *VAR_6 = VAR_7->protocol;

 return VAR_1;
}
