
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct TYPE_4__ {int type; int protocol; int fwmark; int timeout; int dport; int daddr; } ;
struct TYPE_3__ {int protocol; int fwmark; int timeout; int dport; int daddr; int state; int flags; int type; } ;
union ip_vs_sync_conn {TYPE_2__ v6; TYPE_1__ v4; } ;
struct ip_vs_sync_v6 {int dummy; } ;
struct ip_vs_sync_v4 {int dummy; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_protocol {unsigned int num_states; int name; } ;
struct ip_vs_conn_param {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (unsigned int,union ip_vs_sync_conn*,struct ip_vs_conn_param*,int *,unsigned int,int *,unsigned int) ;
 int FUNC_2 (struct ip_vs_conn_param*,int,unsigned int,int,unsigned int,union nf_inet_addr*,int ,int,int,struct ip_vs_sync_conn_options*,struct ip_vs_protocol*) ;
 int FUNC_3 (int *,int,int*,struct ip_vs_sync_conn_options*) ;
 int FUNC_4 (int *,int,unsigned int*,int **,int ,int*,int ) ;
 struct ip_vs_protocol* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;

__attribute__((used)) static inline int FUNC_8(__u8 *VAR_12, __u8 *VAR_13)
{
 struct ip_vs_sync_conn_options VAR_14;
 union ip_vs_sync_conn *VAR_15;
 struct ip_vs_protocol *VAR_16;
 struct ip_vs_conn_param VAR_17;
 __u32 VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21=0, VAR_22=0;
 __u8 *VAR_23=((void*)0), *VAR_24=((void*)0);
 __u32 VAR_25=0;
 int VAR_26=0;

 VAR_15 = (union ip_vs_sync_conn *) VAR_12;

 if (VAR_15->v6.type & VAR_11) {




  FUNC_0(3,"BACKUP, IPv6 msg received, and IPVS is not compiled for IPv6\n");
  VAR_26 = 10;
  goto out;

 } else if (!VAR_15->v4.type) {
  VAR_19 = VAR_0;
  VAR_12 += sizeof(struct ip_vs_sync_v4);
 } else {
  return -10;
 }
 if (VAR_12 > VAR_13)
  return -20;


 while (VAR_12 < VAR_13) {
  int VAR_27;
  int VAR_28;

  if (VAR_12+2 > VAR_13)
   return -30;
  VAR_27 = *(VAR_12++);
  VAR_28 = *(VAR_12++);

  if (!VAR_28 || ((VAR_12 + VAR_28) > VAR_13))
   return -40;

  switch (VAR_27 & ~VAR_2) {
  case 128:
   if (FUNC_3(VAR_12, VAR_28, &VAR_25, &VAR_14))
    return -50;
   break;

  case 130:
   if (FUNC_4(VAR_12, VAR_28, &VAR_21, &VAR_23,
        VAR_9, &VAR_25,
        VAR_3))
    return -60;
   break;

  case 129:
   if (FUNC_4(VAR_12, VAR_28,&VAR_22, &VAR_24,
        VAR_10, &VAR_25,
        VAR_4))
    return -70;
   break;

  default:

   if (!(VAR_27 & VAR_2)) {
    FUNC_0(3, "BACKUP, Unknown mandatory param %d found\n",
       VAR_27 & ~VAR_2);
    VAR_26 = 20;
    goto out;
   }
  }
  VAR_12 += VAR_28;
 }


 VAR_18 = FUNC_6(VAR_15->v4.flags) & VAR_6;
 VAR_18 |= VAR_7;
 VAR_20 = FUNC_7(VAR_15->v4.state);

 if (!(VAR_18 & VAR_8)) {
  VAR_16 = FUNC_5(VAR_15->v4.protocol);
  if (!VAR_16) {
   FUNC_0(3,"BACKUP, Unsupported protocol %u\n",
    VAR_15->v4.protocol);
   VAR_26 = 30;
   goto out;
  }
  if (VAR_20 >= VAR_16->num_states) {
   FUNC_0(3, "BACKUP, Invalid %s state %u\n",
    VAR_16->name, VAR_20);
   VAR_26 = 40;
   goto out;
  }
 } else {

  VAR_16 = ((void*)0);
  if (VAR_20 > 0) {
   FUNC_0(3, "BACKUP, Invalid template state %u\n",
    VAR_20);
   VAR_20 = 0;
  }
 }
 if (FUNC_1(VAR_19, VAR_15, &VAR_17,
     VAR_23, VAR_21,
     VAR_24, VAR_22)) {
  VAR_26 = 50;
  goto out;
 }

 if (VAR_19 == VAR_0)
  FUNC_2(&VAR_17, VAR_18, VAR_20, VAR_15->v4.protocol, VAR_19,
    (union nf_inet_addr *)&VAR_15->v4.daddr, VAR_15->v4.dport,
    FUNC_6(VAR_15->v4.timeout), FUNC_6(VAR_15->v4.fwmark),
    (VAR_25 & VAR_5 ? &VAR_14 : ((void*)0)),
    VAR_16);
 return 0;

out:
 FUNC_0(2, "BACKUP, Single msg dropped err:%d\n", VAR_26);
 return VAR_26;

}
