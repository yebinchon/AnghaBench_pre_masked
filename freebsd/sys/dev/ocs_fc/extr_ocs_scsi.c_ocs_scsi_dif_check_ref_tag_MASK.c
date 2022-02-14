
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ocs_t ;
struct TYPE_5__ {int check_ref_tag; } ;
typedef TYPE_1__ ocs_hw_dif_info_t ;
struct TYPE_6__ {int ref_tag; } ;
typedef TYPE_2__ ocs_dif_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_2(ocs_t *VAR_2, ocs_hw_dif_info_t *VAR_3, uint32_t VAR_4, ocs_dif_t *VAR_5)
{
 if ((VAR_5 == ((void*)0)) || !VAR_3->check_ref_tag) {
  return VAR_1;
 }

 if (VAR_4 != FUNC_0(VAR_5->ref_tag)) {
  FUNC_1(VAR_2, "expected ref tag 0x%x, actual 0x%x\n",
   VAR_4, FUNC_0(VAR_5->ref_tag));
  return VAR_0;
 } else {
  return VAR_1;
 }
}
