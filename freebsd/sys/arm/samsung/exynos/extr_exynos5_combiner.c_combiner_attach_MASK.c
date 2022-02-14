
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct combiner_softc {int * ih; int * res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int,int *,int ,struct combiner_softc*,int *) ;
 int VAR_4 ;
 struct combiner_softc* VAR_5 ;
 int VAR_6 ;
 struct combiner_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7)
{
 struct combiner_softc *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_7);
 VAR_8->dev = VAR_7;

 if (FUNC_0(VAR_7, VAR_6, VAR_8->res)) {
  FUNC_3(VAR_7, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_8->bst = FUNC_5(VAR_8->res[0]);
 VAR_8->bsh = FUNC_4(VAR_8->res[0]);

 VAR_5 = VAR_8;


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_9 = FUNC_1(VAR_7, VAR_8->res[1+VAR_10], VAR_2 | VAR_1, ((void*)0), VAR_4, VAR_8, &VAR_8->ih[VAR_10]);

  if (VAR_9) {
   FUNC_3(VAR_7, "Unable to alloc int resource.\n");
   return (VAR_0);
  }
 }

 return (0);
}
