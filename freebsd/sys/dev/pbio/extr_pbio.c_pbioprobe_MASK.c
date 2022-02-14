
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pbio_softc {int * res; int bsh; int bst; } ;
typedef int device_t ;
struct TYPE_2__ {int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int*,int ,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 struct pbio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct pbio_softc*,int ) ;
 int FUNC_6 (struct pbio_softc*,int ,int) ;
 int FUNC_7 (char*,unsigned char,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_7)
{
 int VAR_8;
 struct pbio_softc *VAR_9 = FUNC_2(VAR_7);




 if (FUNC_4(VAR_7))
  return (VAR_0);
 VAR_8 = 0;
 VAR_9->res = FUNC_0(VAR_7, VAR_5, &VAR_8,
     VAR_1, VAR_4);
 if (VAR_9->res == ((void*)0))
  return (VAR_0);
 FUNC_3(VAR_7, "Intel 8255 PPI (basic mode)");


 FUNC_1(VAR_7, VAR_5, VAR_8, VAR_9->res);
 return (0);
}
