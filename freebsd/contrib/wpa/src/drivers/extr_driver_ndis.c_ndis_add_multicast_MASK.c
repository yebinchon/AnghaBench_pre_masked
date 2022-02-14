
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_ndis_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wpa_driver_ndis_data*,int ,char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct wpa_driver_ndis_data *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_2,
    (const char *) VAR_3, VAR_0) < 0) {
  FUNC_1(VAR_1, "NDIS: Failed to add PAE group address "
      "to the multicast list");
  return -1;
 }

 return 0;
}
