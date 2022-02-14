
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct bman_softc* t_Handle ;
struct bman_softc {int sc_dev; } ;
typedef int e_BmExceptions ;


 int FUNC_0 (int ,char*,char const*) ;





__attribute__((used)) static void
FUNC_1(t_Handle VAR_0, e_BmExceptions VAR_1)
{
 struct bman_softc *VAR_2;
 const char *VAR_3;

 VAR_2 = VAR_0;

 switch (VAR_1) {
     case 130:
  VAR_3 = "Invalid Command Verb";
  break;
 case 131:
  VAR_3 = "FBPR pool exhaused. Consider increasing "
      "BMAN_MAX_BUFFERS";
  break;
 case 128:
  VAR_3 = "Single bit ECC error";
  break;
 case 129:
  VAR_3 = "Multi bit ECC error";
  break;
 default:
  VAR_3 = "Unknown error";
 }

 FUNC_0(VAR_2->sc_dev, "BMAN Exception: %s.\n", VAR_3);
}
