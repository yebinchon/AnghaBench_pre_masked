
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vtballoon_softc {scalar_t__ vtballoon_current_npages; scalar_t__ vtballoon_desired_npages; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct vtballoon_softc*,scalar_t__) ;
 int FUNC_2 (struct vtballoon_softc*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct vtballoon_softc*) ;
 int FUNC_4 (struct vtballoon_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct vtballoon_softc *VAR_1;
 uint32_t VAR_2, VAR_3;

 VAR_1 = VAR_0;

 for (;;) {
  if (FUNC_3(VAR_1) != 0)
   break;

  VAR_2 = VAR_1->vtballoon_current_npages;
  VAR_3 = VAR_1->vtballoon_desired_npages;

  if (VAR_3 != VAR_2) {
   if (VAR_3 > VAR_2)
    FUNC_2(VAR_1, VAR_3 - VAR_2);
   else
    FUNC_1(VAR_1, VAR_2 - VAR_3);

   FUNC_4(VAR_1);
  }
 }

 FUNC_0();
}
