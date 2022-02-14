
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ie_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*,size_t,struct wpa_ie_data*) ;
 int FUNC_2 (int const*,size_t,struct wpa_ie_data*) ;

int FUNC_3(const u8 *VAR_3, size_t VAR_4,
       struct wpa_ie_data *VAR_5)
{
 if (VAR_4 >= 1 && VAR_3[0] == VAR_1)
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_4 >= 6 && VAR_3[0] == VAR_2 &&
     VAR_3[1] >= 4 && FUNC_0(&VAR_3[2]) == VAR_0)
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  return FUNC_2(VAR_3, VAR_4, VAR_5);
}
