
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4iov_softc {int sc_attached; int sc_main; } ;
typedef int nvlist_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 struct t4iov_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int *,char*,int ) ;
 int * FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0)
{
 struct t4iov_softc *VAR_1;



 device_t VAR_2;
 int VAR_3;

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(!VAR_1->sc_attached);







 VAR_3 = FUNC_1(VAR_1->sc_main, FUNC_5(VAR_0), &VAR_2);
 if (VAR_3)
  return (0);
 VAR_1->sc_attached = 1;
 return (0);
}
