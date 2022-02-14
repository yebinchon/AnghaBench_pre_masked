
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpp_bootstrap_info {int uri; int type; } ;
struct dpp_authentication {struct dpp_bootstrap_info* own_bi; struct dpp_bootstrap_info* tmp_own_bi; TYPE_2__* peer_bi; } ;
struct TYPE_4__ {TYPE_1__* curve; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpp_bootstrap_info*) ;
 char* FUNC_1 (struct dpp_bootstrap_info*,int ,int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ,size_t,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 struct dpp_bootstrap_info* FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct dpp_authentication *VAR_2)
{
 struct dpp_bootstrap_info *VAR_3;
 char *VAR_4 = ((void*)0);
 size_t VAR_5;

 if (VAR_2->own_bi)
  return 0;

 VAR_3 = FUNC_6(sizeof(*VAR_3));
 if (!VAR_3)
  return -1;
 VAR_3->type = VAR_0;
 VAR_4 = FUNC_1(VAR_3, VAR_2->peer_bi->curve->name, ((void*)0), 0);
 if (!VAR_4)
  goto fail;

 VAR_5 = 4;
 VAR_5 += 4 + FUNC_5(VAR_4);
 VAR_3->uri = FUNC_3(VAR_5 + 1);
 if (!VAR_3->uri)
  goto fail;
 FUNC_4(VAR_3->uri, VAR_5 + 1, "DPP:K:%s;;", VAR_4);
 FUNC_7(VAR_1,
     "DPP: Auto-generated own bootstrapping key info: URI %s",
     VAR_3->uri);

 VAR_2->tmp_own_bi = VAR_2->own_bi = VAR_3;

 FUNC_2(VAR_4);

 return 0;
fail:
 FUNC_2(VAR_4);
 FUNC_0(VAR_3);
 return -1;
}
