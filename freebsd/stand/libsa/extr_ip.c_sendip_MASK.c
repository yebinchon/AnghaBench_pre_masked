
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_char ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct ip {int ip_hl; int ip_p; TYPE_1__ ip_dst; TYPE_1__ ip_src; int ip_sum; int ip_ttl; int ip_len; int ip_v; } ;
struct iodesc {TYPE_1__ destip; TYPE_1__ myip; int destport; int myport; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__,TYPE_1__,scalar_t__) ;
 int * FUNC_1 (struct iodesc*,TYPE_1__) ;
 int FUNC_2 (struct ip*,int) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct ip*,int) ;
 char* FUNC_5 (TYPE_1__) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,size_t) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct iodesc*,struct ip*,size_t,int *,int ) ;

ssize_t
FUNC_10(struct iodesc *VAR_7, void *VAR_8, size_t VAR_9, uint8_t VAR_10)
{
 ssize_t VAR_11;
 struct ip *VAR_12;
 u_char *VAR_13;
 VAR_12 = (struct ip *)VAR_8 - 1;
 VAR_9 += sizeof(*VAR_12);

 FUNC_2(VAR_12, sizeof(*VAR_12));

 VAR_12->ip_v = VAR_3;
 VAR_12->ip_hl = sizeof(*VAR_12) >> 2;
 VAR_12->ip_len = FUNC_3(VAR_9);
 VAR_12->ip_p = VAR_10;
 VAR_12->ip_ttl = VAR_2;
 VAR_12->ip_src = VAR_7->myip;
 VAR_12->ip_dst = VAR_7->destip;
 VAR_12->ip_sum = FUNC_4(VAR_12, sizeof(*VAR_12));

 if (VAR_12->ip_dst.s_addr == VAR_1 || VAR_12->ip_src.s_addr == 0 ||
     VAR_6 == 0 || FUNC_0(VAR_12->ip_src, VAR_12->ip_dst, VAR_6))
  VAR_13 = FUNC_1(VAR_7, VAR_12->ip_dst);
 else
  VAR_13 = FUNC_1(VAR_7, VAR_5);

 VAR_11 = FUNC_9(VAR_7, VAR_12, VAR_9, VAR_13, VAR_0);
 if (VAR_11 == -1)
  return (-1);
 if (VAR_11 != VAR_9)
  FUNC_7("sendip: bad write (%zd != %zd)", VAR_11, VAR_9);
 return (VAR_11 - sizeof(*VAR_12));
}
