
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct muge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct muge_softc*,int ,int*) ;
 int FUNC_1 (struct muge_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct muge_softc *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 uint32_t VAR_7;
 bool VAR_8;


 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_7);
 VAR_8 = ((VAR_7 & VAR_1) != 0);

 if (VAR_8) {
  VAR_7 &= ~VAR_1;
  VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_7);
 }


 VAR_7 &= ~VAR_2;
 VAR_7 |= (((VAR_5 + 4) << VAR_3) &
     VAR_2);
 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_7);



 if (VAR_8) {
  VAR_7 |= VAR_1;
  VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_7);
 }

 return (0);
}
