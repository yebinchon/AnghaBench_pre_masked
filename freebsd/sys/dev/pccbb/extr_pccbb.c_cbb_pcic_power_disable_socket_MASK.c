
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int * exca; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct cbb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, device_t VAR_6)
{
 struct cbb_softc *VAR_7 = FUNC_2(VAR_5);

 FUNC_0(("cbb_pcic_socket_disable\n"));


 FUNC_3(&VAR_7->exca[0], VAR_1, 0);
 FUNC_4("cbbP1", VAR_4 / 100);


 FUNC_1(VAR_5, VAR_0);
 FUNC_3(&VAR_7->exca[0], VAR_3, 0);


 FUNC_4("cbbP2", VAR_4 * 300 / 1000);


 FUNC_3(&VAR_7->exca[0], VAR_1, VAR_2);
 return (0);
}
