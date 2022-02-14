
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iomuxc_softc {int dev; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,int*,int) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct iomuxc_softc*,int ,int) ;
 int FUNC_8 (int ,char*,int,int) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct iomuxc_softc *VAR_1)
{
 phandle_t VAR_2, VAR_3, VAR_4;
 pcell_t VAR_5[VAR_0];
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_4 = FUNC_2("/");
 VAR_6 = 0;
 VAR_3 = VAR_4;


 for (VAR_2 = FUNC_1(VAR_3); VAR_2 != 0; VAR_2 = FUNC_6(VAR_2)) {


  while (FUNC_1(VAR_2)) {
   VAR_3 = VAR_2;
   VAR_2 = FUNC_1(VAR_2);
  }

  if (!FUNC_9(VAR_2))
   continue;

  if ((VAR_6 = FUNC_4(VAR_2, "iomux_config")) > 0) {
   FUNC_3(VAR_2, "iomux_config", VAR_5, VAR_6);

   VAR_7 = VAR_6 / (sizeof(uint32_t));
   for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += 2) {
    VAR_8 = VAR_5[VAR_10];
    VAR_9 = VAR_5[VAR_10+1];




    FUNC_7(VAR_1, FUNC_0(VAR_8), VAR_9);
   }
  }

  if (FUNC_6(VAR_2) == 0) {

   VAR_2 = VAR_3;
   VAR_3 = FUNC_5(VAR_2);
  }
 }

 return (0);
}
