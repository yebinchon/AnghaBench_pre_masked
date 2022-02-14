
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct ahd_softc *VAR_4)
{
 int VAR_5;

 VAR_5 = 5000;
 while ((FUNC_0(VAR_4, VAR_3) & (VAR_1|VAR_2)) != 0 && --VAR_5)
  FUNC_1(5);

 if (VAR_5 == 0)
  return (VAR_0);
 return (0);
}
