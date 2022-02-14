
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {int jme_flags; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct jme_softc*) ;
 int FUNC_4 (struct jme_softc*) ;

__attribute__((used)) static void
FUNC_5(struct jme_softc *VAR_7)
{
 uint32_t VAR_8, VAR_9;


 FUNC_3(VAR_7);
 FUNC_4(VAR_7);


 FUNC_1(VAR_7, VAR_5, VAR_0);
 FUNC_0(VAR_7, VAR_5);
 FUNC_2(10);





 if ((VAR_7->jme_flags & (VAR_4 | VAR_3)) != 0) {

  FUNC_1(VAR_7, VAR_5, VAR_0 | VAR_1);

  VAR_9 = FUNC_0(VAR_7, VAR_6);
  FUNC_1(VAR_7, VAR_6, VAR_9 | VAR_2);
  VAR_9 = FUNC_0(VAR_7, VAR_6);

  FUNC_1(VAR_7, VAR_5, VAR_1);
  VAR_8 = FUNC_0(VAR_7, VAR_5);


  FUNC_1(VAR_7, VAR_5, VAR_8 & ~VAR_1);

  FUNC_1(VAR_7, VAR_6, VAR_9 & ~VAR_2);
  FUNC_0(VAR_7, VAR_6);


  FUNC_1(VAR_7, VAR_5, VAR_1);
  FUNC_1(VAR_7, VAR_6, VAR_9 | VAR_2);
 } else
  FUNC_1(VAR_7, VAR_5, 0);
 FUNC_0(VAR_7, VAR_5);
 FUNC_2(10);
}
