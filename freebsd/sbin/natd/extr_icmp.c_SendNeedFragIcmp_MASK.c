
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct in_addr {int dummy; } ;
struct sockaddr_in {scalar_t__ sin_port; struct in_addr sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct ip {scalar_t__ ip_p; int ip_hl; int ip_len; int ip_v; struct in_addr ip_dst; struct in_addr ip_src; scalar_t__ ip_tos; int ip_off; } ;
struct icmp {scalar_t__ icmp_cksum; struct ip icmp_ip; void* icmp_nextmtu; scalar_t__ icmp_void; int icmp_code; int icmp_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ip*,struct ip*,int) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,struct icmp*,int,int ,struct sockaddr*,int) ;

int FUNC_7 (int VAR_9, struct ip* VAR_10, int VAR_11)
{
 char VAR_12[VAR_6];
 struct ip* VAR_13;
 struct icmp* VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 struct sockaddr_in VAR_18;
 int VAR_19;
 struct in_addr VAR_20;




 if (FUNC_5 (VAR_10->ip_off) & ~(VAR_7 | VAR_5))
  return 0;



 if (VAR_10->ip_p == VAR_4)
  return 0;



 VAR_13 = (struct ip*) VAR_12;
 VAR_14 = (struct icmp*) (VAR_12 + sizeof (struct ip));



 VAR_14->icmp_type = VAR_2;
 VAR_14->icmp_code = VAR_3;
 VAR_14->icmp_cksum = 0;
 VAR_14->icmp_void = 0;
 VAR_14->icmp_nextmtu = FUNC_3 (VAR_11);



 VAR_17 = (VAR_10->ip_hl << 2);
 VAR_16 = VAR_10->ip_len - VAR_17;
 if (VAR_16 > 8)
  VAR_16 = 8;

 VAR_16 += VAR_17;
 VAR_15 = VAR_1 + VAR_16;

 FUNC_4 (&VAR_14->icmp_ip, VAR_10, VAR_16);



 VAR_14->icmp_cksum = FUNC_1 (VAR_8, (u_short*) VAR_14,
       VAR_15);



 FUNC_4 (VAR_13, VAR_10, sizeof (struct ip));

 VAR_13->ip_v = 4;
 VAR_13->ip_hl = 5;
 VAR_13->ip_len = FUNC_3 (sizeof (struct ip) + VAR_15);
 VAR_13->ip_p = VAR_4;
 VAR_13->ip_tos = 0;

 VAR_20 = VAR_13->ip_dst;
 VAR_13->ip_dst = VAR_13->ip_src;
 VAR_13->ip_src = VAR_20;

 FUNC_0 (VAR_8, (char*) VAR_13, VAR_6);

 VAR_18.sin_family = VAR_0;
 VAR_18.sin_addr = VAR_13->ip_dst;
 VAR_18.sin_port = 0;



 VAR_19 = FUNC_6 (VAR_9,
          VAR_14,
       VAR_15,
       0,
       (struct sockaddr*) &VAR_18,
       sizeof VAR_18);

 if (VAR_19 != VAR_15)
  FUNC_2 ("Cannot send ICMP message.");

 return 1;
}
