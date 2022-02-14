
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {int dummy; } ;
struct hostapd_data {int * radius; scalar_t__ acct_session_id; TYPE_2__* conf; } ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* radius; } ;
struct TYPE_3__ {int acct_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct radius_msg* FUNC_0 (struct hostapd_data*,int *,int ) ;
 int FUNC_1 (char*,int,char*,unsigned long long) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,struct radius_msg*,int ,int *) ;
 int FUNC_4 (struct radius_msg*,int ,int *,int ) ;
 int FUNC_5 (struct radius_msg*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct hostapd_data *VAR_5, int VAR_6)
{
 struct radius_msg *VAR_7;

 if (!VAR_5->conf->radius->acct_server || VAR_5->radius == ((void*)0))
  return;



 VAR_7 = FUNC_0(VAR_5, ((void*)0),
        VAR_6 ? VAR_3 :
        VAR_2);
 if (!VAR_7)
  return;

 if (VAR_5->acct_session_id) {
  char VAR_8[20];

  FUNC_1(VAR_8, sizeof(VAR_8), "%016llX",
       (unsigned long long) VAR_5->acct_session_id);
  if (!FUNC_4(VAR_7, VAR_4,
      (u8 *) VAR_8, FUNC_2(VAR_8)))
   FUNC_6(VAR_0, "Could not add Acct-Session-Id");
 }

 if (FUNC_3(VAR_5->radius, VAR_7, VAR_1, ((void*)0)) < 0)
  FUNC_5(VAR_7);
}
