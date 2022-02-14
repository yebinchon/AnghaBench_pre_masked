
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
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct scc_softc *VAR_5;
 const char *VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_2(VAR_4);
 if (!FUNC_4(VAR_6, "escc")) {
  FUNC_1(VAR_4, "Zilog Z8530 dual channel SCC");
  VAR_5->sc_class = &VAR_3;
  return (FUNC_3(VAR_4, VAR_2, VAR_1, 0));
 }
 return (VAR_0);
}
