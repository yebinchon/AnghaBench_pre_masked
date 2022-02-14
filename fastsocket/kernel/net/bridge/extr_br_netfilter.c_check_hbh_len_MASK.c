
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u32 ;
struct sk_buff {unsigned char* data; int len; } ;
struct ipv6hdr {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int payload_len; } ;


 int VAR_0 ;



 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1)
{
 unsigned char *VAR_2 = (u8 *)(FUNC_0(VAR_1) + 1);
 u32 VAR_3;
 const unsigned char *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = VAR_2 - VAR_4;
 int VAR_6 = (VAR_2[1] + 1) << 3;

 if ((VAR_2 + VAR_6) - VAR_1->data > FUNC_3(VAR_1))
  goto bad;

 VAR_5 += 2;
 VAR_6 -= 2;

 while (VAR_6 > 0) {
  int VAR_7 = VAR_4[VAR_5 + 1] + 2;

  switch (VAR_4[VAR_5]) {
  case 129:
   VAR_7 = 1;
   break;

  case 128:
   break;

  case 130:
   if (VAR_4[VAR_5 + 1] != 4 || (VAR_5 & 3) != 2)
    goto bad;
   VAR_3 = FUNC_1(*(__be32 *) (VAR_4 + VAR_5 + 2));
   if (VAR_3 <= VAR_0 ||
       FUNC_0(VAR_1)->payload_len)
    goto bad;
   if (VAR_3 > VAR_1->len - sizeof(struct ipv6hdr))
    goto bad;
   if (FUNC_2(VAR_1,
         VAR_3 + sizeof(struct ipv6hdr)))
    goto bad;
   VAR_4 = FUNC_4(VAR_1);
   break;
  default:
   if (VAR_7 > VAR_6)
    goto bad;
   break;
  }
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }
 if (VAR_6 == 0)
  return 0;
bad:
 return -1;

}
