
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stge_softc {scalar_t__ sc_nerr; int sc_dev; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static __inline int
FUNC_3(struct stge_softc *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;

 for (VAR_11 = 0;;) {
  VAR_10 = FUNC_0(VAR_9, VAR_4);
  if ((VAR_10 & VAR_7) == 0)
   break;

  if ((VAR_10 & VAR_8) != 0) {





   if (VAR_9->sc_nerr++ < VAR_3)
    FUNC_2(VAR_9->sc_dev, "Tx underrun, "
        "resetting...\n");
   if (VAR_9->sc_nerr == VAR_3)
    FUNC_2(VAR_9->sc_dev, "too many errors; "
        "not reporting any more\n");
   VAR_11 = -1;
   break;
  }

  if ((VAR_10 & (VAR_6|VAR_5)) != 0)
   FUNC_1(VAR_9, VAR_2,
       (FUNC_0(VAR_9, VAR_2) & VAR_0) |
       VAR_1);
 }

 return (VAR_11);
}
