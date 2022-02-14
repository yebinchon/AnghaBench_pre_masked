
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * now; TYPE_2__* infra_cache; } ;
struct worker {TYPE_1__ env; } ;
struct ip_ratelimit_list_arg {int all; TYPE_2__* infra; int * ssl; int now; } ;
struct TYPE_4__ {int * client_ip_rates; } ;
typedef int RES ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,struct ip_ratelimit_list_arg*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(RES* VAR_2, struct worker* VAR_3, char* VAR_4)
{
 struct ip_ratelimit_list_arg VAR_5;
 VAR_5.all = 0;
 VAR_5.infra = VAR_3->env.infra_cache;
 VAR_5.now = *VAR_3->env.now;
 VAR_5.ssl = VAR_2;
 VAR_4 = FUNC_0(VAR_4);
 if(FUNC_2(VAR_4, "+a") == 0)
  VAR_5.all = 1;
 if(VAR_5.infra->client_ip_rates==((void*)0) ||
  (VAR_5.all == 0 && VAR_0 == 0))
  return;
 FUNC_1(VAR_5.infra->client_ip_rates, 0, VAR_1, &VAR_5);
}
