
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_udma {int dummy; } ;
struct TYPE_2__ {int mask; int cfg_token_size_2; int cfg_token_size_1; int cfg_cycle; int cfg_1s; } ;


 int FUNC_0 (struct al_udma*,char*,char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct al_udma *VAR_3)
{
 FUNC_1("M2S stream rate limiter regs:\n");

 FUNC_0(VAR_3, " ", "\n", VAR_0, VAR_1,
   VAR_2.cfg_1s);
 FUNC_0(VAR_3, " ", "\n", VAR_0, VAR_1,
   VAR_2.cfg_cycle);
 FUNC_0(VAR_3, " ", "\n", VAR_0, VAR_1,
   VAR_2.cfg_token_size_1);
 FUNC_0(VAR_3, " ", "\n", VAR_0, VAR_1,
   VAR_2.cfg_token_size_2);
 FUNC_0(VAR_3, " ", "\n", VAR_0, VAR_1,
   VAR_2.mask);
}
