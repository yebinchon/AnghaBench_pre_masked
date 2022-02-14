
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_info {int qos_map_enabled; int ecsa_supported; size_t* ext_capability; } ;
struct hostapd_data {int dummy; } ;


 int const FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (size_t*) ;
 size_t* FUNC_2 (int) ;
 int FUNC_3 (size_t*,int const*,size_t) ;

__attribute__((used)) static u16 FUNC_4(struct hostapd_data *VAR_1, struct sta_info *VAR_2,
      const u8 *VAR_3, size_t VAR_4)
{
 if (VAR_4 > 0) {
  VAR_2->ecsa_supported = !!(VAR_3[0] & FUNC_0(2));
  FUNC_1(VAR_2->ext_capability);
  VAR_2->ext_capability = FUNC_2(1 + VAR_4);
  if (VAR_2->ext_capability) {
   VAR_2->ext_capability[0] = VAR_4;
   FUNC_3(VAR_2->ext_capability + 1, VAR_3,
      VAR_4);
  }
 }

 return VAR_0;
}
