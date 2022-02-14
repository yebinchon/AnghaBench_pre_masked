
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_dst_cache; } ;
struct TYPE_2__ {int opt_data; int opt_status; int opt_optl; } ;
struct dn_scp {int addrloc; int addrrem; TYPE_1__ discdata_out; } ;
typedef int gfp_t ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 unsigned char VAR_0 ;
 int FUNC_1 (struct sock*,unsigned char,unsigned short,int ,int ,int,int ,int ,int ) ;
 void* FUNC_2 (int ) ;

void FUNC_3(struct sock *VAR_1, unsigned char VAR_2,
   unsigned short VAR_3, gfp_t VAR_4)
{
 struct dn_scp *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = 0;

 if (VAR_2 == VAR_0)
  VAR_6 = FUNC_2(VAR_5->discdata_out.opt_optl);

 if (VAR_3 == 0)
  VAR_3 = FUNC_2(VAR_5->discdata_out.opt_status);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_1->sk_dst_cache, VAR_6,
  VAR_5->discdata_out.opt_data, VAR_5->addrrem, VAR_5->addrloc);
}
