
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ahc_softc {int chip; int features; int dev_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_10)
{
 u_int VAR_11;
 int VAR_12;
 int VAR_13;
 uint32_t VAR_14;

 VAR_11 = VAR_10->chip & VAR_3;
 VAR_14 = FUNC_1(VAR_10->dev_softc,
     VAR_5, 4);
 VAR_13 = (VAR_14 & VAR_7) != 0;

 if ((VAR_10->features & VAR_4) != 0)
  VAR_12 = (FUNC_0(VAR_10, VAR_6) & VAR_8) != 0;
 else if (VAR_11 == VAR_1 || VAR_11 == VAR_2)






  VAR_12 = 0;
 else if (VAR_11 >= VAR_0)
  VAR_12 = (VAR_14 & VAR_9) != 0;
 else
  VAR_12 = 0;

 if (VAR_12 && VAR_13)
  return (1);
 return (0);
}
