
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_bss {int dummy; } ;
typedef enum mbo_attr_id { ____Placeholder_mbo_attr_id } mbo_attr_id ;


 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (int const*,int,int) ;
 int* FUNC_1 (struct wpa_bss*,int ) ;

const u8 * FUNC_2(struct wpa_bss *VAR_2, enum mbo_attr_id VAR_3)
{
 const u8 *VAR_4, *VAR_5;

 if (!VAR_2)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = VAR_4 + 2 + VAR_4[1];
 VAR_4 += VAR_0;

 return FUNC_0(VAR_4, VAR_5 - VAR_4, VAR_3);
}
