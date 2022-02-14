
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct udphdr {int dummy; } ;
struct tcphdr {int th_off; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
struct ip {int ip_hl; int ip_p; int ip_off; int ip_len; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct ip* FUNC_0 (struct mbuf const*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const struct mbuf *VAR_3, int VAR_4)
{
 const struct ip *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 const struct tcphdr *VAR_9;
 int VAR_10;

 VAR_6 = VAR_4 + sizeof(struct ip);


 if (VAR_3->m_pkthdr.len < VAR_6)
  return VAR_0;


 if (VAR_3->m_len < VAR_6)
  return VAR_0;

 VAR_5 = FUNC_0(VAR_3, VAR_4);


 VAR_7 = VAR_5->ip_hl << 2;
 if (VAR_7 < sizeof(struct ip))
  return VAR_0;


 if (VAR_3->m_len < VAR_4 + VAR_7)
  return VAR_0;

 VAR_8 = FUNC_1(VAR_5->ip_len);





 if (VAR_3->m_pkthdr.len < VAR_4 + VAR_8)
  return VAR_0;




 if (FUNC_1(VAR_5->ip_off) & (VAR_2 | VAR_1))
  return VAR_0;





 switch (VAR_5->ip_p) {
 case 129:
  if (VAR_8 < VAR_7 + sizeof(struct tcphdr))
   return VAR_0;
  if (VAR_3->m_len < VAR_4 + VAR_7 + sizeof(struct tcphdr))
   return VAR_0;
  VAR_9 = (const struct tcphdr *)((const uint8_t *)VAR_5 + VAR_7);
  VAR_10 = VAR_9->th_off << 2;
  if (VAR_10 < sizeof(struct tcphdr) || VAR_10 + VAR_7 > VAR_8)
   return VAR_0;
  if (VAR_3->m_len < VAR_4 + VAR_7 + VAR_10)
   return VAR_0;
  break;
 case 128:
  if (VAR_8 < VAR_7 + sizeof(struct udphdr))
   return VAR_0;
  if (VAR_3->m_len < VAR_4 + VAR_7 + sizeof(struct udphdr))
   return VAR_0;
  break;
 default:
  if (VAR_8 < VAR_7)
   return VAR_0;
  break;
 }
 return VAR_5->ip_p;
}
