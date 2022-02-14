
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hostapd_data {int dummy; } ;
struct anqp_element {int payload; } ;


 struct anqp_element* FUNC_0 (struct hostapd_data*,int const) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(struct hostapd_data *VAR_0,
        const u16 *VAR_1,
        unsigned int VAR_2)
{
 size_t VAR_3 = 0;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct anqp_element *VAR_5 = FUNC_0(VAR_0, VAR_1[VAR_4]);

  if (VAR_5)
   VAR_3 += 2 + 2 + FUNC_1(VAR_5->payload);
 }

 return VAR_3;
}
