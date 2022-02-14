
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int tail; int network_header; } ;
struct ipv6_opt_hdr {int hdrlen; } ;



 unsigned char* FUNC_0 (struct sk_buff*) ;

int FUNC_1(struct sk_buff *VAR_0, int VAR_1, int VAR_2)
{
 const unsigned char *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_0->tail - VAR_0->network_header;
 struct ipv6_opt_hdr *VAR_5;
 int VAR_6;

 if (VAR_1 + 2 > VAR_4)
  goto bad;
 VAR_5 = (struct ipv6_opt_hdr *)(VAR_3 + VAR_1);
 VAR_6 = ((VAR_5->hdrlen + 1) << 3);

 if (VAR_1 + VAR_6 > VAR_4)
  goto bad;

 VAR_1 += 2;
 VAR_6 -= 2;

 while (VAR_6 > 0) {
  int VAR_7 = VAR_3[VAR_1];
  int VAR_8;

  if (VAR_7 == VAR_2)
   return VAR_1;

  switch (VAR_7) {
  case 128:
   VAR_8 = 1;
   break;
  default:
   VAR_8 = VAR_3[VAR_1 + 1] + 2;
   if (VAR_8 > VAR_6)
    goto bad;
   break;
  }
  VAR_1 += VAR_8;
  VAR_6 -= VAR_8;
 }

 bad:
 return -1;
}
