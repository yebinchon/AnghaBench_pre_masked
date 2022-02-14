
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {int jme_dev; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct jme_softc *VAR_10)
{
 uint32_t VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_10->jme_dev, VAR_8, 4);
 if ((VAR_11 & (VAR_1 | VAR_0)) !=
     VAR_0)
  return (VAR_6);

 VAR_11 = FUNC_2(VAR_10->jme_dev, VAR_9, 4);
 VAR_11 |= VAR_5;
 FUNC_3(VAR_10->jme_dev, VAR_9, VAR_11, 4);
 VAR_11 = FUNC_2(VAR_10->jme_dev, VAR_9, 4);
 VAR_11 &= ~VAR_5;
 FUNC_3(VAR_10->jme_dev, VAR_9, VAR_11, 4);


 VAR_11 = FUNC_2(VAR_10->jme_dev, VAR_8, 4);
 VAR_11 &= ~VAR_3;
 VAR_11 |= VAR_2 | VAR_4;
 FUNC_3(VAR_10->jme_dev, VAR_8, VAR_11, 4);





 FUNC_0(110);
 for (VAR_12 = 10; VAR_12 > 0; VAR_12--) {
  VAR_11 = FUNC_2(VAR_10->jme_dev, VAR_8, 4);
  if ((VAR_11 & (VAR_1 |
      VAR_0)) != VAR_0) {
   FUNC_0(20);
   continue;
  }
  if ((VAR_11 & VAR_4) == 0)
   break;

  FUNC_0(20);
 }
 if (VAR_12 == 0) {
  FUNC_1(VAR_10->jme_dev, "eFuse autoload timed out.\n");
  return (VAR_7);
 }

 return (0);
}
