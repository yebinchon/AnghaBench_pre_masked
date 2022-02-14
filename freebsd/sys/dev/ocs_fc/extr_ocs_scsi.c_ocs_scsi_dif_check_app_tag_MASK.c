
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int ocs_t ;
struct TYPE_5__ {int check_app_tag; } ;
typedef TYPE_1__ ocs_hw_dif_info_t ;
struct TYPE_6__ {int app_tag; } ;
typedef TYPE_2__ ocs_dif_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_2(ocs_t *VAR_1, ocs_hw_dif_info_t *VAR_2, uint16_t VAR_3, ocs_dif_t *VAR_4)
{
 if ((VAR_4 == ((void*)0)) || !VAR_2->check_app_tag) {
  return VAR_0;
 }

 FUNC_1(VAR_1, "expected app tag 0x%x,  actual 0x%x\n",
  VAR_3, FUNC_0(VAR_4->app_tag));

 return (VAR_3 == FUNC_0(VAR_4->app_tag));
}
