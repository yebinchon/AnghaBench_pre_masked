
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {int optlen; scalar_t__ ts_needtime; scalar_t__ ts_needaddr; scalar_t__ rr_needaddr; scalar_t__ rr; scalar_t__ ts; } ;
struct TYPE_2__ {struct ip_options opt; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned char) ;


 int FUNC_2 (unsigned char*,int const,int) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct sk_buff * VAR_0)
{
 unsigned char *VAR_1 = FUNC_3(VAR_0) + sizeof(struct iphdr);
 struct ip_options * VAR_2 = &(FUNC_0(VAR_0)->opt);
 int VAR_3 = VAR_2->optlen;
 int VAR_4;

 while (VAR_3 > 0) {
  switch (*VAR_1) {
  case 129:
   return;
  case 128:
   VAR_3--;
   VAR_1++;
   continue;
  }
  VAR_4 = VAR_1[1];
  if (VAR_4<2 || VAR_4>VAR_3)
    return;
  if (!FUNC_1(*VAR_1))
   FUNC_2(VAR_1, 128, VAR_4);
  VAR_3 -= VAR_4;
  VAR_1 += VAR_4;
 }
 VAR_2->ts = 0;
 VAR_2->rr = 0;
 VAR_2->rr_needaddr = 0;
 VAR_2->ts_needaddr = 0;
 VAR_2->ts_needtime = 0;
 return;
}
