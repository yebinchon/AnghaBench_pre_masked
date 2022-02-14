
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvram_src; } ;
struct chipc_softc {int sprom_refcnt; TYPE_1__ caps; } ;
typedef int device_t ;




 int FUNC_0 (struct chipc_softc*) ;
 int FUNC_1 (struct chipc_softc*) ;
 int FUNC_2 (struct chipc_softc*) ;
 int FUNC_3 (struct chipc_softc*) ;
 struct chipc_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct chipc_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_4(VAR_0);
 FUNC_0(VAR_1);


 if (VAR_1->sprom_refcnt >= 1) {
  VAR_1->sprom_refcnt++;
  FUNC_1(VAR_1);

  return (0);
 }

 switch (VAR_1->caps.nvram_src) {
 case 128:
  VAR_2 = FUNC_3(VAR_1);
  break;
 case 129:
  VAR_2 = FUNC_2(VAR_1);
  break;
 default:
  VAR_2 = 0;
  break;
 }


 if (VAR_2 == 0)
  VAR_1->sprom_refcnt++;

 FUNC_1(VAR_1);
 return (VAR_2);
}
