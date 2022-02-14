
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_softc {int core_region; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct chipc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct chipc_softc*) ;
 int FUNC_4 (struct chipc_softc*,int ,int) ;
 int FUNC_5 (int ) ;
 struct chipc_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct chipc_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(VAR_3);

 if ((VAR_5 = FUNC_2(VAR_3)))
  return (VAR_5);

 if ((VAR_5 = FUNC_5(VAR_3)))
  return (VAR_5);

 if ((VAR_5 = FUNC_1(VAR_3, VAR_0)))
  return (VAR_5);

 FUNC_4(VAR_4, VAR_4->core_region, VAR_2|VAR_1);
 FUNC_3(VAR_4);

 FUNC_0(VAR_4);

 return (0);
}
