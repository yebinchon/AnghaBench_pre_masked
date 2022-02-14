
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iicoc_softc {int sc_mtx; } ;
typedef int device_t ;


 struct iicoc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, u_char VAR_1, u_char VAR_2, u_char *VAR_3)
{
 int VAR_4;
 struct iicoc_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 FUNC_2(&VAR_5->sc_mtx);
 VAR_4 = FUNC_1(VAR_0);
 FUNC_3(&VAR_5->sc_mtx);
 return (VAR_4);
}
