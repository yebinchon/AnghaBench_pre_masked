
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sfxge_softc {int dummy; } ;
struct TYPE_6__ {int op; } ;
typedef TYPE_1__ sfxge_ioc_t ;


 int VAR_0 ;



 int FUNC_0 (struct sfxge_softc*,TYPE_1__*) ;
 int FUNC_1 (struct sfxge_softc*,TYPE_1__*) ;
 int FUNC_2 (struct sfxge_softc*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct sfxge_softc *VAR_1, sfxge_ioc_t *VAR_2)
{
 switch (VAR_2->op) {
 case 130:
  return (FUNC_0(VAR_1, VAR_2));
 case 129:
  return (FUNC_1(VAR_1, VAR_2));
 case 128:
  return (FUNC_2(VAR_1, VAR_2));
 default:
  return (VAR_0);
 }
}
