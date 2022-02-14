
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_ndis_data {scalar_t__ wired; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void *VAR_3, u8 *VAR_4)
{
 struct wpa_driver_ndis_data *VAR_5 = VAR_3;

 if (VAR_5->wired) {




  FUNC_1(VAR_4, VAR_2, VAR_0);
  return 0;
 }

 return FUNC_0(VAR_5, VAR_1, (char *) VAR_4, VAR_0) <
  0 ? -1 : 0;
}
