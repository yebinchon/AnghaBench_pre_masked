
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct axge_softc {int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct axge_softc*) ;
 int FUNC_1 (struct axge_softc*) ;
 int FUNC_2 (struct axge_softc*,int ,int,int) ;
 struct axge_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, int VAR_2, int VAR_3)
{
 struct axge_softc *VAR_4;
 uint16_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_1);
 VAR_6 = FUNC_4(&VAR_4->sc_mtx);
 if (!VAR_6)
  FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_4, VAR_0, VAR_3, VAR_2);

 if (!VAR_6)
  FUNC_1(VAR_4);

 return (VAR_5);
}
