
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvram_src; } ;
struct chipc_softc {scalar_t__ sprom_refcnt; TYPE_1__ caps; } ;
typedef int device_t ;




 int FUNC_0 (struct chipc_softc*) ;
 int FUNC_1 (struct chipc_softc*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct chipc_softc*) ;
 int FUNC_4 (struct chipc_softc*) ;
 struct chipc_softc* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_0)
{
 struct chipc_softc *VAR_1;

 VAR_1 = FUNC_5(VAR_0);
 FUNC_0(VAR_1);


 FUNC_2(VAR_1->sprom_refcnt > 0, ("sprom refcnt overrelease"));
 VAR_1->sprom_refcnt--;
 if (VAR_1->sprom_refcnt > 0) {
  FUNC_1(VAR_1);
  return;
 }

 switch (VAR_1->caps.nvram_src) {
 case 128:
  FUNC_4(VAR_1);
  break;
 case 129:
  FUNC_3(VAR_1);
  break;
 default:
  break;
 }


 FUNC_1(VAR_1);
}
