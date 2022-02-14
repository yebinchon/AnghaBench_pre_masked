
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct outdata {int seq; } ;
struct icmp {int icmp_cksum; void* icmp_seq; void* icmp_id; int icmp_type; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_2(struct outdata *VAR_4)
{
 struct icmp *const VAR_5 = (struct icmp *) VAR_2;

 VAR_5->icmp_type = VAR_0;
 VAR_5->icmp_id = FUNC_0(VAR_1);
 VAR_5->icmp_seq = FUNC_0(VAR_4->seq);
 VAR_5->icmp_cksum = 0;
 VAR_5->icmp_cksum = FUNC_1((u_short *)VAR_5, VAR_3);
 if (VAR_5->icmp_cksum == 0)
  VAR_5->icmp_cksum = 0xffff;
}
