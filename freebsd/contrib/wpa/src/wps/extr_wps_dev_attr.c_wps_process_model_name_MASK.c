
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_device_data {int * model_name; } ;


 int VAR_0 ;
 int * FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct wps_device_data *VAR_1, const u8 *VAR_2,
      size_t VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_3(VAR_0, "WPS: No Model Name received");
  return -1;
 }

 FUNC_2(VAR_0, "WPS: Model Name", VAR_2, VAR_3);

 FUNC_1(VAR_1->model_name);
 VAR_1->model_name = FUNC_0(VAR_2, VAR_3);
 if (VAR_1->model_name == ((void*)0))
  return -1;

 return 0;
}
