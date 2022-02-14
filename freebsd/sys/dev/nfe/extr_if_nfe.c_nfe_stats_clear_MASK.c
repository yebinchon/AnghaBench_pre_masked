
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {int nfe_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfe_softc*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_1(struct nfe_softc *VAR_9)
{
 int VAR_10, VAR_11;

 if ((VAR_9->nfe_flags & VAR_0) != 0)
  VAR_11 = VAR_3;
 else if ((VAR_9->nfe_flags & (VAR_1 | VAR_2)) != 0)
  VAR_11 = VAR_4;
 else
  return;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  FUNC_0(VAR_9, VAR_7 + VAR_10 * sizeof(uint32_t));

 if ((VAR_9->nfe_flags & VAR_2) != 0) {
  FUNC_0(VAR_9, VAR_8);
  FUNC_0(VAR_9, VAR_6);
  FUNC_0(VAR_9, VAR_5);
 }
}
