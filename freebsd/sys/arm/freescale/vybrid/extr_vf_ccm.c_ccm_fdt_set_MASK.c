
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccm_softc {int dummy; } ;
typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,char*,void**) ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ccm_softc*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct ccm_softc *VAR_0)
{
 phandle_t VAR_1, VAR_2, VAR_3;
 int VAR_4;
 char *VAR_5, *VAR_6;

 VAR_3 = FUNC_1("/");
 VAR_4 = 0;
 VAR_2 = VAR_3;


 for (VAR_1 = FUNC_0(VAR_2); VAR_1 != 0; VAR_1 = FUNC_5(VAR_1)) {


  while (FUNC_0(VAR_1)) {
   VAR_2 = VAR_1;
   VAR_1 = FUNC_0(VAR_1);
  }

  if (!FUNC_6(VAR_1))
   continue;

  if ((VAR_4 = FUNC_3(VAR_1, "clock_names")) > 0) {
   VAR_4 = FUNC_3(VAR_1, "clock_names");
   FUNC_2(VAR_1, "clock_names",
       (void **)&VAR_5);

   while (VAR_4 > 0) {
    VAR_6 = VAR_5;
    VAR_5 += FUNC_8(VAR_6) + 1;
    VAR_4 -= FUNC_8(VAR_6) + 1;
    FUNC_7(VAR_0, VAR_6);
   }
  }

  if (FUNC_5(VAR_1) == 0) {

   VAR_1 = VAR_2;
   VAR_2 = FUNC_4(VAR_1);
  }
 }

 return (0);
}
