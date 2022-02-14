
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_participant {scalar_t__ retry_count; scalar_t__ mode; } ;
struct ieee802_1x_kay {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee802_1x_mka_participant* FUNC_0 (struct ieee802_1x_kay*) ;
 int FUNC_1 (struct ieee802_1x_mka_participant*) ;

int FUNC_2(struct ieee802_1x_kay *VAR_2)
{
 struct ieee802_1x_mka_participant *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -1;

 if (VAR_3->retry_count < VAR_0 || VAR_3->mode == VAR_1) {
  FUNC_1(VAR_3);
  VAR_3->retry_count++;
 }

 return 0;
}
