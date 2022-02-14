
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ** ifname; TYPE_2__** ifp; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;
struct TYPE_7__ {int if_flags; TYPE_1__* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int * FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (char*,int,char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(e6000sw_softc_t *VAR_9, int VAR_10)
{
 char VAR_11[VAR_5];

 FUNC_6(VAR_11, VAR_5, "%sport", FUNC_0(VAR_9->dev));

 VAR_9->ifp[VAR_10] = FUNC_1(VAR_6);
 if (VAR_9->ifp[VAR_10] == ((void*)0))
  return (VAR_0);
 VAR_9->ifp[VAR_10]->if_softc = VAR_9;
 VAR_9->ifp[VAR_10]->if_flags |= VAR_4 | VAR_1 |
     VAR_2 | VAR_3;
 VAR_9->ifname[VAR_10] = FUNC_4(FUNC_7(VAR_11) + 1, VAR_7, VAR_8);
 if (VAR_9->ifname[VAR_10] == ((void*)0)) {
  FUNC_2(VAR_9->ifp[VAR_10]);
  return (VAR_0);
 }
 FUNC_5(VAR_9->ifname[VAR_10], VAR_11, FUNC_7(VAR_11) + 1);
 FUNC_3(VAR_9->ifp[VAR_10], VAR_9->ifname[VAR_10], VAR_10);

 return (0);
}
