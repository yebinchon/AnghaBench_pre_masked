
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb {int dummy; } ;
struct ahd_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scb*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct ahd_softc *VAR_5, struct scb *VAR_6)
{







 if (FUNC_1(VAR_5) != FUNC_0(VAR_6)
  || ((FUNC_2(VAR_5, VAR_2+1) & VAR_1) != 0
   && (FUNC_2(VAR_5, VAR_4) & (VAR_0|VAR_3)) == 0))
  return (0);

 return (1);
}
