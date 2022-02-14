
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvram2env_softc {int bsh; int bst; scalar_t__ need_swap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static uint32_t FUNC_2(struct nvram2env_softc * VAR_0, int VAR_1)
{
 if (VAR_0->need_swap)
  return (FUNC_0(FUNC_1(VAR_0->bst, VAR_0->bsh, VAR_1)));
 else
  return (FUNC_1(VAR_0->bst, VAR_0->bsh, VAR_1));
}
