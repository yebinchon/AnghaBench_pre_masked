
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mfi_softc {int mfi_config_lock; } ;






 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct mfi_softc *VAR_0, uint32_t VAR_1)
{

 switch (VAR_1) {
 case 128:
 case 131:
 case 130:
 case 129:
  FUNC_0(&VAR_0->mfi_config_lock);
  return (1);
 default:
  return (0);
 }
}
