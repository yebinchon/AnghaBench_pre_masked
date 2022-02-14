
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4iov_softc {int * sc_main; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct t4iov_softc* FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct t4iov_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->sc_dev = VAR_1;

 VAR_2->sc_main = FUNC_2(FUNC_4(VAR_1), FUNC_3(VAR_1),
     FUNC_5(VAR_1), 4);
 if (VAR_2->sc_main == ((void*)0))
  return (VAR_0);
 if (FUNC_0(VAR_2->sc_main) == 0)
  return (FUNC_6(VAR_1));
 return (0);
}
