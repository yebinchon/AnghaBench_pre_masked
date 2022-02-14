
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ckb_softc {int sc_flags; int cols; scalar_t__* scan_local; scalar_t__* scan; scalar_t__ sc_repeating; } ;
struct TYPE_4__ {struct ckb_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_1)
{
 struct ckb_softc *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->kb_data;

 FUNC_0();

 if (!FUNC_1(VAR_1))
  return (0);

 if (VAR_2->sc_flags & VAR_0) {
  return (1);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->cols; VAR_3++)
  if (VAR_2->scan_local[VAR_3] != VAR_2->scan[VAR_3]) {
   return (1);
  }

 if (VAR_2->sc_repeating)
  return (1);

 return (0);
}
