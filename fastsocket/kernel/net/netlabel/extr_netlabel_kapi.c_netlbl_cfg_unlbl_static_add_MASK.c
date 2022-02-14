
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct netlbl_audit {int dummy; } ;
struct net {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct net*,char const*,void const*,void const*,int,int,struct netlbl_audit*) ;

int FUNC_1(struct net *VAR_1,
    const char *VAR_2,
    const void *VAR_3,
    const void *VAR_4,
    u16 VAR_5,
    u32 VAR_6,
    struct netlbl_audit *VAR_7)
{
 u32 VAR_8;

 switch (VAR_5) {
 case 129:
  VAR_8 = sizeof(struct in_addr);
  break;
 case 128:
  VAR_8 = sizeof(struct in6_addr);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_1,
     VAR_2, VAR_3, VAR_4, VAR_8,
     VAR_6, VAR_7);
}
