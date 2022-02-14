
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4iov_softc {scalar_t__ sc_attached; } ;
typedef int device_t ;


 struct t4iov_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct t4iov_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->sc_attached) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2)
   return (VAR_2);
 }
 return (0);
}
