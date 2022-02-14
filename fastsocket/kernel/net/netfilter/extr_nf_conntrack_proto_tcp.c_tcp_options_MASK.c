
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tcphdr {int doff; } ;
struct sk_buff {int dummy; } ;
struct ip_ct_tcp_state {int td_scale; int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 unsigned char* FUNC_1 (struct sk_buff const*,unsigned int,int,unsigned char*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_6,
   unsigned int VAR_7,
   const struct tcphdr *VAR_8,
   struct ip_ct_tcp_state *VAR_9)
{
 unsigned char VAR_10[(15 * 4) - sizeof(struct tcphdr)];
 const unsigned char *VAR_11;
 int VAR_12 = (VAR_8->doff*4) - sizeof(struct tcphdr);

 if (!VAR_12)
  return;

 VAR_11 = FUNC_1(VAR_6, VAR_7 + sizeof(struct tcphdr),
     VAR_12, VAR_10);
 FUNC_0(VAR_11 == ((void*)0));

 VAR_9->td_scale =
 VAR_9->flags = 0;

 while (VAR_12 > 0) {
  int VAR_13=*VAR_11++;
  int VAR_14;

  switch (VAR_13) {
  case 129:
   return;
  case 128:
   VAR_12--;
   continue;
  default:
   VAR_14=*VAR_11++;
   if (VAR_14 < 2)
    return;
   if (VAR_14 > VAR_12)
    break;

   if (VAR_13 == VAR_4
       && VAR_14 == VAR_2)
    VAR_9->flags |= VAR_0;
   else if (VAR_13 == VAR_5
     && VAR_14 == VAR_3) {
    VAR_9->td_scale = *(u_int8_t *)VAR_11;

    if (VAR_9->td_scale > 14) {

     VAR_9->td_scale = 14;
    }
    VAR_9->flags |=
     VAR_1;
   }
   VAR_11 += VAR_14 - 2;
   VAR_12 -= VAR_14;
  }
 }
}
