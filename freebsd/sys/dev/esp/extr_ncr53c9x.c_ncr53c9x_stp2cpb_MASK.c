
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int sc_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 int FUNC_1 (struct ncr53c9x_softc*,int) ;

__attribute__((used)) static inline int
FUNC_2(struct ncr53c9x_softc *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, VAR_0);

 VAR_3 = (VAR_1->sc_freq * VAR_2) / 250;
 if (FUNC_1(VAR_1, VAR_3) < VAR_2)

  VAR_3++;
 return (VAR_3);
}
