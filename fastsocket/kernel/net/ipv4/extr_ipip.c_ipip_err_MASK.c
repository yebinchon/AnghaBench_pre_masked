
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct iphdr {int saddr; int daddr; } ;
struct TYPE_4__ {scalar_t__ daddr; scalar_t__ ttl; } ;
struct TYPE_5__ {TYPE_1__ iph; } ;
struct ip_tunnel {int err_count; scalar_t__ err_time; TYPE_2__ parms; } ;
struct TYPE_6__ {int type; int code; } ;


 int VAR_0 ;

 int const VAR_1 ;





 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 struct ip_tunnel* FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5, u32 VAR_6)
{





 struct iphdr *VAR_7 = (struct iphdr *)VAR_5->data;
 const int VAR_8 = FUNC_1(VAR_5)->type;
 const int VAR_9 = FUNC_1(VAR_5)->code;
 struct ip_tunnel *VAR_10;
 int VAR_11;

 switch (VAR_8) {
 default:
 case 131:
  return 0;

 case 133:
  switch (VAR_9) {
  case 129:
  case 130:

   return 0;
  case 132:

   return 0;
  default:




   break;
  }
  break;
 case 128:
  if (VAR_9 != VAR_1)
   return 0;
  break;
 }

 VAR_11 = -VAR_0;

 FUNC_3(&VAR_3);
 VAR_10 = FUNC_2(FUNC_0(VAR_5->dev), VAR_7->daddr, VAR_7->saddr);
 if (VAR_10 == ((void*)0) || VAR_10->parms.iph.daddr == 0)
  goto out;

 VAR_11 = 0;
 if (VAR_10->parms.iph.ttl == 0 && VAR_8 == 128)
  goto out;

 if (FUNC_5(VAR_4, VAR_10->err_time + VAR_2))
  VAR_10->err_count++;
 else
  VAR_10->err_count = 1;
 VAR_10->err_time = VAR_4;
out:
 FUNC_4(&VAR_3);
 return VAR_11;
}
