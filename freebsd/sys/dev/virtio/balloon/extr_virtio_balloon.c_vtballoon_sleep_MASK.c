
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vtballoon_softc {scalar_t__ vtballoon_current_npages; int vtballoon_flags; int vtballoon_timeout; scalar_t__ vtballoon_desired_npages; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtballoon_softc*) ;
 int FUNC_1 (struct vtballoon_softc*) ;
 int FUNC_2 (struct vtballoon_softc*) ;
 int FUNC_3 (struct vtballoon_softc*,int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (struct vtballoon_softc*) ;

__attribute__((used)) static int
FUNC_5(struct vtballoon_softc *VAR_1)
{
 int VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_2 = 0;
 VAR_4 = VAR_1->vtballoon_current_npages;

 FUNC_0(VAR_1);
 for (;;) {
  if (VAR_1->vtballoon_flags & VAR_0) {
   VAR_2 = 1;
   break;
  }

  VAR_5 = FUNC_4(VAR_1);
  VAR_1->vtballoon_desired_npages = VAR_5;







  VAR_3 = VAR_1->vtballoon_timeout;
  VAR_1->vtballoon_timeout = 0;

  if (VAR_4 > VAR_5)
   break;
  if (VAR_4 < VAR_5 && VAR_3 == 0)
   break;

  FUNC_3(VAR_1, FUNC_1(VAR_1), 0, "vtbslp", VAR_3);
 }
 FUNC_2(VAR_1);

 return (VAR_2);
}
