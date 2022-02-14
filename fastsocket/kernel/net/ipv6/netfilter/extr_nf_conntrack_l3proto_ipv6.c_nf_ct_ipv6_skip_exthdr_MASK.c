
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ipv6_opt_hdr {int hdrlen; scalar_t__ nexthdr; } ;
typedef int hdr ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ipv6_opt_hdr*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*,int,struct ipv6_opt_hdr*,int) ;

__attribute__((used)) static int FUNC_4(const struct sk_buff *VAR_3, int VAR_4,
      u8 *VAR_5, int VAR_6)
{
 u8 VAR_7 = *VAR_5;

 while (FUNC_1(VAR_7)) {
  struct ipv6_opt_hdr VAR_8;
  int VAR_9;

  if (VAR_6 < (int)sizeof(struct ipv6_opt_hdr))
   return -1;
  if (VAR_7 == VAR_2)
   break;
  if (VAR_7 == VAR_1)
   break;
  if (FUNC_3(VAR_3, VAR_4, &VAR_8, sizeof(VAR_8)))
   FUNC_0();
  if (VAR_7 == VAR_0)
   VAR_9 = (VAR_8.hdrlen+2)<<2;
  else
   VAR_9 = FUNC_2(&VAR_8);

  VAR_7 = VAR_8.nexthdr;
  VAR_6 -= VAR_9;
  VAR_4 += VAR_9;
 }

 *VAR_5 = VAR_7;
 return VAR_4;
}
