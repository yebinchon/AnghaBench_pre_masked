
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_softc {int * sc_class; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,uintptr_t*) ;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct scc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,uintptr_t,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 device_t VAR_6;
 struct scc_softc *VAR_7;
 uintptr_t VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = FUNC_1(VAR_5);

 VAR_10 = FUNC_0(VAR_6, VAR_5, VAR_3, &VAR_8);
 if (VAR_10)
  return (VAR_10);
 if (VAR_8 != VAR_1)
  return (VAR_0);

 FUNC_3(VAR_5, "QUICC quad channel SCC");

 VAR_7 = FUNC_2(VAR_5);
 VAR_7->sc_class = &VAR_4;
 if (FUNC_0(VAR_6, VAR_5, VAR_2, &VAR_9))
  VAR_9 = 0;
 return (FUNC_4(VAR_5, 0, VAR_9, 0));
}
