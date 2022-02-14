
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pbio_softc {int iomode; TYPE_1__* pd; int * res; int bsh; int bst; } ;
typedef int device_t ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int*,int ,int ) ;
 struct pbio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int ,int ,int,char*,int,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7 (device_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct pbio_softc *VAR_10;

 VAR_10 = FUNC_2(VAR_6);
 VAR_7 = FUNC_3(VAR_6);
 VAR_9 = 0;
 VAR_10->res = FUNC_1(VAR_6, VAR_4, &VAR_9,
     VAR_1, VAR_3);
 if (VAR_10->res == ((void*)0))
  return (VAR_0);
 VAR_10->bst = FUNC_6(VAR_10->res);
 VAR_10->bsh = FUNC_5(VAR_10->res);




 VAR_10->iomode = 0x9b;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_10->pd[VAR_8].port = FUNC_4(&VAR_5, (VAR_7 << 2) + VAR_8, 0, 0,
      0600, "pbio%d%s", VAR_7, FUNC_0(VAR_8));
 return (0);
}
