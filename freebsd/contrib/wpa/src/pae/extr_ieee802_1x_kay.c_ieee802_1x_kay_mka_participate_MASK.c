
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mka_key_name {int len; int name; } ;
struct ieee802_1x_mka_participant {int active; } ;
struct ieee802_1x_kay {int dummy; } ;
typedef int Boolean ;


 struct ieee802_1x_mka_participant* FUNC_0 (struct ieee802_1x_kay*,int ,int ) ;

void FUNC_1(struct ieee802_1x_kay *VAR_0,
        struct mka_key_name *VAR_1,
        Boolean VAR_2)
{
 struct ieee802_1x_mka_participant *VAR_3;

 if (!VAR_0 || !VAR_1)
  return;

 VAR_3 = FUNC_0(VAR_0, VAR_1->name, VAR_1->len);
 if (!VAR_3)
  return;

 VAR_3->active = VAR_2;
}
