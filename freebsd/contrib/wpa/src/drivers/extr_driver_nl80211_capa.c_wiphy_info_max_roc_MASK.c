
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_capa {int max_remain_on_chan; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static void FUNC_1(struct wpa_driver_capa *VAR_0,
          struct nlattr *VAR_1)
{
 if (VAR_1)
  VAR_0->max_remain_on_chan = FUNC_0(VAR_1);
}
