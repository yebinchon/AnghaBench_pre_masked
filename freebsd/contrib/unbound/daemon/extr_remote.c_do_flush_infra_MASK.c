
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* now; TYPE_1__* infra_cache; } ;
struct worker {TYPE_2__ env; } ;
struct sockaddr_storage {int dummy; } ;
struct del_info {int expired; int addr; int addrlen; scalar_t__ num_keys; scalar_t__ num_msgs; scalar_t__ num_rrsets; scalar_t__ labs; scalar_t__ len; scalar_t__ name; struct worker* worker; } ;
typedef int socklen_t ;
struct TYPE_3__ {int hosts; } ;
typedef int RES ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,struct sockaddr_storage*,int *) ;
 int FUNC_1 (int *,struct sockaddr_storage*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int *,struct del_info*) ;
 int FUNC_5 (int *,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(RES* VAR_2, struct worker* VAR_3, char* VAR_4)
{
 struct sockaddr_storage VAR_5;
 socklen_t VAR_6;
 struct del_info VAR_7;
 if(FUNC_6(VAR_4, "all") == 0) {
  FUNC_3(VAR_3->env.infra_cache->hosts);
  FUNC_2(VAR_2);
  return;
 }
 if(!FUNC_0(VAR_4, VAR_0, &VAR_5, &VAR_6)) {
  (void)FUNC_5(VAR_2, "error parsing ip addr: '%s'\n", VAR_4);
  return;
 }


 VAR_7.worker = VAR_3;
 VAR_7.name = 0;
 VAR_7.len = 0;
 VAR_7.labs = 0;
 VAR_7.expired = *VAR_3->env.now;
 VAR_7.expired -= 3;
 VAR_7.num_rrsets = 0;
 VAR_7.num_msgs = 0;
 VAR_7.num_keys = 0;
 VAR_7.addrlen = VAR_6;
 FUNC_1(&VAR_7.addr, &VAR_5, VAR_6);
 FUNC_4(VAR_3->env.infra_cache->hosts, 1, &VAR_1,
  &VAR_7);
 FUNC_2(VAR_2);
}
