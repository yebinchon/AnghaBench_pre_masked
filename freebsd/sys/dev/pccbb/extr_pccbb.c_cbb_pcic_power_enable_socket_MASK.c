
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int * exca; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct cbb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct cbb_softc *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_0(("cbb_pcic_socket_enable:\n"));


 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return (VAR_3);
 FUNC_3(&VAR_2->exca[0], VAR_1);

 return (0);
}
