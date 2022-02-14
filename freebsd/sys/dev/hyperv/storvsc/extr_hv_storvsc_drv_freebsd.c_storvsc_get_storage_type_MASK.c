
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hv_storage_type { ____Placeholder_hv_storage_type } hv_storage_type ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum hv_storage_type
FUNC_2(device_t VAR_5)
{
 device_t VAR_6 = FUNC_1(VAR_5);

 if (FUNC_0(VAR_6, VAR_5, &VAR_3) == 0)
  return VAR_0;
 if (FUNC_0(VAR_6, VAR_5, &VAR_4) == 0)
  return VAR_1;
 return VAR_2;
}
