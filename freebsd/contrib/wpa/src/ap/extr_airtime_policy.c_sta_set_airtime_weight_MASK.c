
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {unsigned int airtime_weight; int addr; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (struct hostapd_data*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_0,
      struct sta_info *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 != VAR_1->airtime_weight &&
     (VAR_3 = FUNC_0(VAR_0, VAR_1->addr, VAR_2)))
  return VAR_3;

 VAR_1->airtime_weight = VAR_2;
 return VAR_3;
}
