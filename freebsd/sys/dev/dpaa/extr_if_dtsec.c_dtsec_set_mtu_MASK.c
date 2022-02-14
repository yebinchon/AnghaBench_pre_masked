
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int sc_mem; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct dtsec_softc *VAR_6, unsigned int VAR_7)
{

 VAR_7 += VAR_4 + VAR_5 + VAR_3;

 FUNC_0(VAR_6);

 if (VAR_7 >= VAR_1 && VAR_7 <= VAR_0) {
  FUNC_1(VAR_6->sc_mem, VAR_2, VAR_7);
  return (VAR_7);
 }

 return (0);
}
