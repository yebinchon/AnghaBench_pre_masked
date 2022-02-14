
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct amd_ntb_softc {scalar_t__ spad_count; int device; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct amd_ntb_softc *VAR_0)
{
 uint8_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->spad_count; VAR_1++)
  FUNC_0(VAR_0->device, VAR_1, 0);
}
