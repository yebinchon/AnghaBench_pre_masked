
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int role; int ready; scalar_t__ is_fc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct mpt_softc*) ;
 scalar_t__ FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*,char*) ;

__attribute__((used)) static void
FUNC_4(struct mpt_softc *VAR_2)
{





 if (VAR_2->is_fc && (VAR_2->role & VAR_1)) {



  FUNC_0(VAR_2);
  if (FUNC_2(VAR_2) == VAR_0) {
   FUNC_3(VAR_2, "failed to add target commands\n");
  }
  FUNC_1(VAR_2);
 }
 VAR_2->ready = 1;
}
