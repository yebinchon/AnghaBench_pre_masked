
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_ndis_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct wpa_driver_ndis_data*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct wpa_driver_ndis_data *VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2[VAR_3] = FUNC_0() & 0xff;
 return FUNC_1(VAR_1, (u8 *) VAR_2, VAR_0);
}
