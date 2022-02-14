
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct stge_softc*,int) ;
 int FUNC_1 (struct stge_softc*) ;
 int FUNC_2 (struct stge_softc*) ;
 int VAR_0 ;
 struct stge_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct stge_softc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_2);

 if (VAR_4 == VAR_0) {

  FUNC_1(VAR_5);
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  FUNC_2(VAR_5);
  return (VAR_6);
 }

 FUNC_1(VAR_5);
 VAR_7 = FUNC_4(VAR_2, &VAR_1, VAR_3, VAR_4);
 FUNC_2(VAR_5);
 return (VAR_7);
}
