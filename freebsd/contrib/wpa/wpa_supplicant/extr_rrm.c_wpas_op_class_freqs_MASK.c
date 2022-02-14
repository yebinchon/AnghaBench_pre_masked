
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oper_class_map {scalar_t__ bw; } ;
struct hostapd_hw_modes {int dummy; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int* FUNC_1 (struct oper_class_map const*,struct hostapd_hw_modes*,int,int*,int ) ;

__attribute__((used)) static int * FUNC_2(const struct oper_class_map *VAR_3,
     struct hostapd_hw_modes *VAR_4, int VAR_5)
{
 u8 VAR_6[] = { 42, 58, 106, 122, 138, 155 };
 u8 VAR_7[] = { 50, 114 };






 if (VAR_3->bw == VAR_1 || VAR_3->bw == VAR_2)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
      FUNC_0(VAR_6));

 if (VAR_3->bw == VAR_0)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7,
      FUNC_0(VAR_7));

 return FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
}
