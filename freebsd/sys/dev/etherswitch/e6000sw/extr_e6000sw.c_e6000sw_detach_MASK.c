
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_ports; int ** ifname; int ** ifp; int ** miibus; int sx; } ;
typedef TYPE_1__ e6000sw_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 int VAR_2;
 e6000sw_softc_t *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_5(&VAR_3->sx);
 for (VAR_2 = 0; VAR_2 < VAR_3->num_ports; VAR_2++) {
  if (VAR_3->miibus[VAR_2] != ((void*)0))
   FUNC_1(VAR_1, VAR_3->miibus[VAR_2]);
  if (VAR_3->ifp[VAR_2] != ((void*)0))
   FUNC_4(VAR_3->ifp[VAR_2]);
  if (VAR_3->ifname[VAR_2] != ((void*)0))
   FUNC_3(VAR_3->ifname[VAR_2], VAR_0);
 }

 return (0);
}
