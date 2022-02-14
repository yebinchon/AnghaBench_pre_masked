
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_scan_res {size_t ie_len; size_t beacon_ie_len; } ;


 int const* FUNC_0 (int const*,size_t,int ) ;

const u8 * FUNC_1(const struct wpa_scan_res *VAR_0, u8 VAR_1)
{
 size_t VAR_2 = VAR_0->ie_len;


 if (!VAR_2)
  VAR_2 = VAR_0->beacon_ie_len;

 return FUNC_0((const u8 *) (VAR_0 + 1), VAR_2, VAR_1);
}
