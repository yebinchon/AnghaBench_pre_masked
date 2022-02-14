
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int frag_off; void* tos; void* ttl; void* daddr; void* saddr; int protocol; } ;
struct ip_tunnel_parm {TYPE_1__ iph; void* o_key; void* i_key; void* o_flags; void* i_flags; int link; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ip_tunnel_parm*,int ,int) ;
 int FUNC_3 (struct nlattr*) ;
 void* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 void* FUNC_6 (struct nlattr*) ;

__attribute__((used)) static void FUNC_7(struct nlattr *VAR_12[], struct nlattr *VAR_13[],
          struct ip_tunnel_parm *VAR_14)
{
 FUNC_2(VAR_14, 0, sizeof(*VAR_14));

 VAR_14->iph.protocol = VAR_10;

 if (!VAR_12)
  return;

 if (VAR_12[VAR_2])
  VAR_14->link = FUNC_5(VAR_12[VAR_2]);

 if (VAR_12[VAR_0])
  VAR_14->i_flags = FUNC_0(FUNC_3(VAR_12[VAR_0]));

 if (VAR_12[VAR_4])
  VAR_14->o_flags = FUNC_0(FUNC_3(VAR_12[VAR_4]));

 if (VAR_12[VAR_1])
  VAR_14->i_key = FUNC_4(VAR_12[VAR_1]);

 if (VAR_12[VAR_5])
  VAR_14->o_key = FUNC_4(VAR_12[VAR_5]);

 if (VAR_12[VAR_3])
  VAR_14->iph.saddr = FUNC_4(VAR_12[VAR_3]);

 if (VAR_12[VAR_7])
  VAR_14->iph.daddr = FUNC_4(VAR_12[VAR_7]);

 if (VAR_12[VAR_9])
  VAR_14->iph.ttl = FUNC_6(VAR_12[VAR_9]);

 if (VAR_12[VAR_8])
  VAR_14->iph.tos = FUNC_6(VAR_12[VAR_8]);

 if (!VAR_12[VAR_6] || FUNC_6(VAR_12[VAR_6]))
  VAR_14->iph.frag_off = FUNC_1(VAR_11);
}
