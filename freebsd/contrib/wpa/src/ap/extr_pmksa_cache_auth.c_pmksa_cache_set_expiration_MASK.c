
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsn_pmksa_cache {TYPE_1__* pmksa; } ;
struct os_reltime {int sec; } ;
struct TYPE_2__ {int expiration; } ;


 int FUNC_0 (int ,struct rsn_pmksa_cache*,int *) ;
 int FUNC_1 (int,int ,int ,struct rsn_pmksa_cache*,int *) ;
 int FUNC_2 (struct os_reltime*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct rsn_pmksa_cache *VAR_1)
{
 int VAR_2;
 struct os_reltime VAR_3;

 FUNC_0(VAR_0, VAR_1, ((void*)0));
 if (VAR_1->pmksa == ((void*)0))
  return;
 FUNC_2(&VAR_3);
 VAR_2 = VAR_1->pmksa->expiration - VAR_3.sec;
 if (VAR_2 < 0)
  VAR_2 = 0;
 FUNC_1(VAR_2 + 1, 0, VAR_0, VAR_1, ((void*)0));
}
