
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipv6_opt_hdr {int dummy; } ;



 int FUNC_0 (struct ipv6_opt_hdr*) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ipv6_opt_hdr *VAR_0)
{
 u8 *VAR_1 = (u8 *)VAR_0;
 int VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;
 int VAR_4 = 0;

 VAR_3 += 2;
 VAR_2 -= 2;

 while (VAR_2 > 0) {

  switch (VAR_1[VAR_3]) {

  case 128:
   VAR_4 = 1;
   break;
  default:
   if (VAR_2 < 2)
    goto bad;
   VAR_4 = VAR_1[VAR_3+1]+2;
   if (VAR_2 < VAR_4)
    goto bad;
   if (VAR_1[VAR_3] & 0x20)
    FUNC_1(&VAR_1[VAR_3+2], 0, VAR_1[VAR_3+1]);
   break;
  }

  VAR_3 += VAR_4;
  VAR_2 -= VAR_4;
 }
 if (VAR_2 == 0)
  return 1;

bad:
 return 0;
}
