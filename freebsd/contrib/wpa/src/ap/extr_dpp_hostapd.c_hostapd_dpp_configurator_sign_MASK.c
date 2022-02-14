
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_data {int msg_ctx; TYPE_1__* iface; } ;
struct dpp_authentication {int dummy; } ;
struct TYPE_4__ {int dpp; } ;
struct TYPE_3__ {TYPE_2__* interfaces; } ;


 int FUNC_0 (struct dpp_authentication*) ;
 scalar_t__ FUNC_1 (struct dpp_authentication*,char*,int) ;
 scalar_t__ FUNC_2 (int ,int ,struct dpp_authentication*,char const*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct hostapd_data*,struct dpp_authentication*) ;
 int FUNC_5 (struct hostapd_data*,struct dpp_authentication*) ;
 int FUNC_6 (char*) ;
 struct dpp_authentication* FUNC_7 (int) ;

int FUNC_8(struct hostapd_data *VAR_0, const char *VAR_1)
{
 struct dpp_authentication *VAR_2;
 int VAR_3 = -1;
 char *VAR_4 = ((void*)0);

 VAR_2 = FUNC_7(sizeof(*VAR_2));
 if (!VAR_2)
  return -1;

 VAR_4 = FUNC_3(VAR_1, " curve=");
 FUNC_5(VAR_0, VAR_2);
 if (FUNC_2(VAR_0->iface->interfaces->dpp, VAR_0->msg_ctx,
     VAR_2, VAR_1) == 0 &&
     FUNC_1(VAR_2, VAR_4, 1) == 0) {
  FUNC_4(VAR_0, VAR_2);
  VAR_3 = 0;
 }

 FUNC_0(VAR_2);
 FUNC_6(VAR_4);

 return VAR_3;
}
