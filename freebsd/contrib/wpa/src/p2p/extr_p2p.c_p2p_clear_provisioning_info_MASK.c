
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_device {scalar_t__ wps_prov_info; } ;
struct p2p_data {int dummy; } ;


 struct p2p_device* FUNC_0 (struct p2p_data*,int const*) ;

void FUNC_1(struct p2p_data *VAR_0, const u8 *VAR_1)
{
 struct p2p_device *VAR_2 = ((void*)0);

 if (!VAR_1 || !VAR_0)
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_2->wps_prov_info = 0;
}
