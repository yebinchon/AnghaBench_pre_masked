
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_bss {int dummy; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (struct wpa_bss*,int ) ;

__attribute__((used)) static int FUNC_1(struct wpa_bss *VAR_1)
{
 const u8 *VAR_2;
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2 == ((void*)0) || VAR_2[1] == 0)
  return 0;
 return VAR_2[2];
}
