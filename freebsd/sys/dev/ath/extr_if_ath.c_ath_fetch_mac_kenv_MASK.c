
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ath_softc {int sc_dev; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char*,int) ;
 int FUNC_6 (char*,char*,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_7(struct ath_softc *VAR_1, uint8_t *VAR_2)
{
 char VAR_3[32];
 int VAR_4 = 0;
 char *VAR_5;
 FUNC_5(VAR_3, 32, "hint.%s.%d.macaddr",
     FUNC_0(VAR_1->sc_dev),
     FUNC_1(VAR_1->sc_dev));

 if ((VAR_5 = FUNC_4(VAR_3)) != ((void*)0)) {
  uint32_t VAR_6[VAR_0];
  int VAR_7;
  int VAR_8;


  FUNC_2(VAR_1->sc_dev,
      "Overriding MAC address from environment: '%s'\n",
      VAR_5);


  VAR_7 = FUNC_6(VAR_5, "%x%*c%x%*c%x%*c%x%*c%x%*c%x",
      &VAR_6[0], &VAR_6[1],
      &VAR_6[2], &VAR_6[3],
      &VAR_6[4], &VAR_6[5]);
  if (VAR_7 == 6) {

   VAR_4 = 1;
   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
    VAR_2[VAR_8] = VAR_6[VAR_8];
  }

  FUNC_3(VAR_5);
  VAR_5 = ((void*)0);
 }

 if (VAR_4)
  return (0);
 return (-1);
}
