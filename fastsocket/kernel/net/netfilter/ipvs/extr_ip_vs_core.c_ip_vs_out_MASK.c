
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; int dev; scalar_t__ ipvs_property; } ;
struct net_device {int dummy; } ;
struct ip_vs_protocol {scalar_t__ protocol; struct ip_vs_conn* (* conn_out_get ) (int,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,int ,int ) ;int dont_defrag; } ;
struct ip_vs_iphdr {scalar_t__ protocol; int len; int saddr; } ;
struct ip_vs_conn {int dummy; } ;
typedef int _ports ;
typedef int __be16 ;
struct TYPE_2__ {int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int FUNC_2 (int,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int,int ,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (int,scalar_t__,int *,int ) ;
 int FUNC_10 (struct sk_buff*,int*) ;
 int FUNC_11 (struct sk_buff*,int*) ;
 struct ip_vs_protocol* FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int * FUNC_15 (struct sk_buff*,int ,int,int *) ;
 int FUNC_16 (struct sk_buff*) ;
 struct ip_vs_conn* FUNC_17 (int,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,int ,int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static unsigned int
FUNC_19(unsigned int VAR_19, struct sk_buff *VAR_20,
   const struct net_device *VAR_21, const struct net_device *VAR_22,
   int (*VAR_23)(struct sk_buff *))
{
 struct ip_vs_iphdr VAR_24;
 struct ip_vs_protocol *VAR_25;
 struct ip_vs_conn *VAR_26;
 int VAR_27;

 FUNC_0(11);

 VAR_27 = (VAR_20->protocol == FUNC_3(VAR_2)) ? VAR_0 : VAR_1;

 if (VAR_20->ipvs_property)
  return VAR_15;

 FUNC_7(VAR_27, FUNC_16(VAR_20), &VAR_24);
  if (FUNC_18(VAR_24.protocol == VAR_7)) {
   int VAR_28, VAR_29 = FUNC_10(VAR_20, &VAR_28);

   if (VAR_28)
    return VAR_29;
   FUNC_7(VAR_27, FUNC_16(VAR_20), &VAR_24);
  }

 VAR_25 = FUNC_12(VAR_24.protocol);
 if (FUNC_18(!VAR_25))
  return VAR_15;
  if (FUNC_18(FUNC_6(VAR_20)->frag_off & FUNC_3(VAR_13|VAR_14) &&
        !VAR_25->dont_defrag)) {
   if (FUNC_8(VAR_20, VAR_12))
    return VAR_17;

   FUNC_7(VAR_27, FUNC_16(VAR_20), &VAR_24);
  }




 VAR_26 = VAR_25->conn_out_get(VAR_27, VAR_20, VAR_25, &VAR_24, VAR_24.len, 0);

 if (FUNC_18(!VAR_26)) {
  if (VAR_18 &&
      (VAR_25->protocol == VAR_10 ||
       VAR_25->protocol == VAR_11 ||
       VAR_25->protocol == VAR_9)) {
   __be16 VAR_30[2], *VAR_31;

   VAR_31 = FUNC_15(VAR_20, VAR_24.len,
        sizeof(VAR_30), VAR_30);
   if (VAR_31 == ((void*)0))
    return VAR_15;
   if (FUNC_9(VAR_27, VAR_24.protocol,
            &VAR_24.saddr,
            VAR_31[0])) {





    if ((VAR_24.protocol != VAR_10 &&
         VAR_24.protocol != VAR_9)
         || ((VAR_24.protocol == VAR_10
       && !FUNC_14(VAR_20, VAR_24.len))
      || (VAR_24.protocol == VAR_9
      && !FUNC_13(VAR_20,
       VAR_24.len)))) {
      FUNC_4(VAR_20,
         VAR_5,
         VAR_6, 0);
     return VAR_16;
    }
   }
  }
  FUNC_1(12, VAR_25, VAR_20, 0,
         "packet continues traversal as normal");
  return VAR_15;
 }

 return FUNC_2(VAR_27, VAR_20, VAR_25, VAR_26, VAR_24.len);
}
