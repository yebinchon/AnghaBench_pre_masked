
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct amd_ntb_softc {int device; TYPE_1__* hw_info; } ;
struct TYPE_2__ {scalar_t__ db_count; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct amd_ntb_softc *VAR_0, uint16_t VAR_1)
{
 if (VAR_1 < VAR_0->hw_info->db_count)
  FUNC_1(VAR_0->device, VAR_1);
 else
  FUNC_0(0, "Invalid vector %d\n", VAR_1);
}
