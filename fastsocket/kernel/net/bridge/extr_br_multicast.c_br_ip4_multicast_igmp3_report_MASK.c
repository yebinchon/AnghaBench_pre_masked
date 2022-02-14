
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct igmpv3_report {int ngrec; } ;
struct igmpv3_grec {int grec_type; int grec_nsrcs; int grec_mca; } ;
typedef int __be32 ;


 int VAR_0 ;






 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,int ) ;
 struct igmpv3_report* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct net_bridge *VAR_1,
      struct net_bridge_port *VAR_2,
      struct sk_buff *VAR_3)
{
 struct igmpv3_report *VAR_4;
 struct igmpv3_grec *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 __be32 VAR_11;

 if (!FUNC_3(VAR_3, sizeof(*VAR_4)))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 VAR_8 = FUNC_2(VAR_4->ngrec);
 VAR_7 = sizeof(*VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 += sizeof(*VAR_5);
  if (!FUNC_3(VAR_3, VAR_7))
   return -VAR_0;

  VAR_5 = (void *)(VAR_3->data + VAR_7 - sizeof(*VAR_5));
  VAR_11 = VAR_5->grec_mca;
  VAR_9 = VAR_5->grec_type;

  VAR_7 += FUNC_2(VAR_5->grec_nsrcs) * 4;
  if (!FUNC_3(VAR_3, VAR_7))
   return -VAR_0;


  switch (VAR_9) {
  case 128:
  case 129:
  case 130:
  case 131:
  case 133:
  case 132:
   break;

  default:
   continue;
  }

  VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_11);
  if (VAR_10)
   break;
 }

 return VAR_10;
}
