
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_int32_t ;
struct csa_midi_softc {int io; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_3(struct csa_midi_softc *VAR_1, u_long VAR_2)
{
 if (VAR_2 < VAR_0)
  return FUNC_0(FUNC_2(VAR_1->io), FUNC_1(VAR_1->io), VAR_2) & 0xffffffff;
 else
  return (0);
}
