
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alc_softc {int alc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*) ;
 int FUNC_1 (struct alc_softc*) ;

__attribute__((used)) static void
FUNC_2(struct alc_softc *VAR_1)
{

 if ((VAR_1->alc_flags & VAR_0) != 0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
