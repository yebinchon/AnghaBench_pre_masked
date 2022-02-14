
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahc_softc {int features; int qinfifonext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_3)
{
 uint8_t VAR_4;
 uint8_t VAR_5;

 if ((VAR_3->features & VAR_0) != 0) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  FUNC_1(VAR_3, VAR_2, VAR_4);
 } else
  VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_5 = VAR_3->qinfifonext - VAR_4;
 return (VAR_5);
}
