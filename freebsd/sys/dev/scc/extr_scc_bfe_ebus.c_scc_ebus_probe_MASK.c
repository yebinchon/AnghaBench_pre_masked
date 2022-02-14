
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_softc {int * sc_class; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct scc_softc *VAR_5;
 const char *VAR_6, *VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 VAR_7 = FUNC_3(VAR_4);
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 == ((void*)0))
  VAR_6 = "";
 if (!FUNC_5(VAR_7, "se") || !FUNC_5(VAR_7, "FJSV,se") ||
     !FUNC_5(VAR_6, "sab82532")) {
  FUNC_1(VAR_4, "Siemens SAB 82532 dual channel SCC");
  VAR_5->sc_class = &VAR_3;
  return (FUNC_4(VAR_4, VAR_1, VAR_0, 0));
 }
 return (VAR_2);
}
