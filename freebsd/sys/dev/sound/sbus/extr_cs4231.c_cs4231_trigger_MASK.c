
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs4231_softc {int sc_flags; } ;
struct cs4231_channel {struct cs4231_softc* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct cs4231_softc*,struct cs4231_channel*) ;
 int FUNC_1 (struct cs4231_softc*,struct cs4231_channel*) ;

__attribute__((used)) static void
FUNC_2(struct cs4231_channel *VAR_1)
{
 struct cs4231_softc *VAR_2;

 VAR_2 = VAR_1->parent;
 if ((VAR_2->sc_flags & VAR_0) != 0)
  FUNC_0(VAR_2, VAR_1);
 else
  FUNC_1(VAR_2, VAR_1);
}
