
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct udphdr {int uh_sum; void* uh_ulen; void* uh_dport; void* uh_sport; } ;
struct outdata {int seq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int*,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_2(struct outdata *VAR_7)
{
 struct udphdr *const VAR_8 = (struct udphdr *) VAR_4;

 VAR_8->uh_sport = FUNC_0(VAR_2 + (VAR_1 ? VAR_7->seq : 0));
 VAR_8->uh_dport = FUNC_0(VAR_5 + (VAR_1 ? 0 : VAR_7->seq));
 VAR_8->uh_ulen = FUNC_0((u_short)VAR_6);
 VAR_8->uh_sum = 0;
 if (VAR_0) {
     u_short VAR_9 = FUNC_1(VAR_3, (u_short*)VAR_8, VAR_6, VAR_6);
     VAR_8->uh_sum = (VAR_9) ? VAR_9 : 0xffff;
 }

 return;
}
