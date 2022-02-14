
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int assoc_ie_taxonomy; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int ) ;

void FUNC_2(const struct hostapd_data *VAR_0,
     struct sta_info *VAR_1,
     const u8 *VAR_2, size_t VAR_3)
{
 FUNC_1(VAR_1->assoc_ie_taxonomy);
 VAR_1->assoc_ie_taxonomy = FUNC_0(VAR_2, VAR_3);
}
