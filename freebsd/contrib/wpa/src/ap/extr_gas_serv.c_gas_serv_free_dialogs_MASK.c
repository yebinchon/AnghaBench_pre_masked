
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {TYPE_1__* gas_dialog; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ valid; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_1,
      const u8 *VAR_2)
{
 struct sta_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0) || VAR_3->gas_dialog == ((void*)0))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->gas_dialog[VAR_4].valid)
   return;
 }

 FUNC_1(VAR_3->gas_dialog);
 VAR_3->gas_dialog = ((void*)0);
}
