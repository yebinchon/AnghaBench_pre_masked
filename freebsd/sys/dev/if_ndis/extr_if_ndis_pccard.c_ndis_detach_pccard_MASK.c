
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_softc {int ndis_rl; int * ndis_res_am; int ndis_am_rid; int ndis_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct ndis_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct ndis_softc *VAR_2 = FUNC_1(VAR_1);

 (void) FUNC_2(VAR_1);

 if (VAR_2->ndis_res_am != ((void*)0))
  FUNC_0(VAR_2->ndis_dev, VAR_0,
      VAR_2->ndis_am_rid, VAR_2->ndis_res_am);
 FUNC_3(&VAR_2->ndis_rl);

 return (0);
}
