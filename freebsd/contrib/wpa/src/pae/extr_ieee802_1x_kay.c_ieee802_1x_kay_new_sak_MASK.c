
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_participant {int new_sak; } ;
struct ieee802_1x_kay {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee802_1x_mka_participant* FUNC_0 (struct ieee802_1x_kay*) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2(struct ieee802_1x_kay *VAR_2)
{
 struct ieee802_1x_mka_participant *VAR_3;

 if (!VAR_2)
  return -1;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -1;

 VAR_3->new_sak = VAR_1;
 FUNC_1(VAR_0, "KaY: new SAK signal");

 return 0;
}
