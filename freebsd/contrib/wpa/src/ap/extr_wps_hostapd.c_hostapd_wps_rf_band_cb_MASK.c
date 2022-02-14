
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* iconf; } ;
struct TYPE_2__ {scalar_t__ hw_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(void *VAR_5)
{
 struct hostapd_data *VAR_6 = VAR_5;

 return VAR_6->iconf->hw_mode == VAR_0 ?
  VAR_3 :
  VAR_6->iconf->hw_mode == VAR_1 ?
  VAR_4 : VAR_2;
}
