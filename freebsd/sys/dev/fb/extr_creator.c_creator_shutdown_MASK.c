
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct creator_softc {int sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct creator_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct creator_softc *VAR_2 = VAR_1;

 FUNC_1(VAR_2, 0);





 if (VAR_2->sc_flags & VAR_0) {
  FUNC_0("stdout @ is my-self 0 to column#", 0);
  FUNC_0("stdout @ is my-self #lines 1 - to line#", 0);
 }
}
