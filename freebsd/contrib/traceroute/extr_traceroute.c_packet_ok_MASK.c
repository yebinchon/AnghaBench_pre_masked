
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_char ;
struct sockaddr_in {int sin_addr; } ;
struct my_pmtu {int ipm_nextmtu; } ;
struct ip {int ip_hl; int ip_dst; } ;
struct TYPE_4__ {int ip_hl; scalar_t__ ip_p; } ;
struct icmp {scalar_t__ icmp_type; scalar_t__ icmp_code; TYPE_2__ icmp_ip; int icmp_void; int icmp_nextmtu; } ;
struct TYPE_3__ {scalar_t__ num; scalar_t__ (* check ) (scalar_t__*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,scalar_t__,...) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_11 ;

int
FUNC_7(register u_char *VAR_12, int VAR_13, register struct sockaddr_in *VAR_14,
    register int VAR_15)
{
 register struct icmp *VAR_16;
 register u_char VAR_17, VAR_18;
 register int VAR_19;

 register struct ip *VAR_20;

 VAR_20 = (struct ip *) VAR_12;
 VAR_19 = VAR_20->ip_hl << 2;
 if (VAR_13 < VAR_19 + VAR_1) {
  if (VAR_11)
   FUNC_0("packet too short (%d bytes) from %s\n", VAR_13,
    FUNC_1(VAR_14->sin_addr));
  return (0);
 }
 VAR_13 -= VAR_19;
 VAR_16 = (struct icmp *)(VAR_12 + VAR_19);



 VAR_17 = VAR_16->icmp_type;
 VAR_18 = VAR_16->icmp_code;

 if (VAR_18 != VAR_5)
  VAR_9 = 0;
 else {



  VAR_9 = FUNC_3(((struct my_pmtu *)&VAR_16->icmp_void)->ipm_nextmtu);

 }
 if (VAR_17 == VAR_0
     && VAR_10->num == VAR_6
     && (*VAR_10->check)((u_char *)VAR_16, (u_char)VAR_15))
  return -2;
 if ((VAR_17 == VAR_2 && VAR_18 == VAR_3) ||
     VAR_17 == VAR_4) {
  u_char *VAR_21;

  VAR_7 = &VAR_16->icmp_ip;
  VAR_8 = ((u_char *)VAR_16 + VAR_13) - (u_char *)VAR_7;
  VAR_19 = VAR_7->ip_hl << 2;
  VAR_21 = (u_char *)((u_char *)VAR_7 + VAR_19);
  if (VAR_19 + 16 <= VAR_13
      && VAR_7->ip_p == VAR_10->num
      && (*VAR_10->check)(VAR_21, (u_char)VAR_15))
   return (VAR_17 == VAR_2 ? -1 : VAR_18 + 1);
 }

 if (VAR_11) {
  register int VAR_22;
  u_int32_t *VAR_23 = (u_int32_t *)&VAR_16->icmp_ip;

  FUNC_0("\n%d bytes from %s to ", VAR_13, FUNC_1(VAR_14->sin_addr));
  FUNC_0("%s: icmp type %d (%s) code %d\n",
      FUNC_1(VAR_20->ip_dst), VAR_17, FUNC_4(VAR_17), VAR_16->icmp_code);
  for (VAR_22 = 4; VAR_22 <= VAR_13 - VAR_1; VAR_22 += sizeof(*VAR_23))
   FUNC_0("%2d: %8.8x\n", VAR_22, FUNC_2(*VAR_23++));
 }

 return(0);
}
