
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdfx_softc {int devt; int memrange; int memrid2; int * memrange2; int memrid; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct tdfx_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3) {
 struct tdfx_softc* VAR_4;
 int VAR_5;
 VAR_4 = FUNC_2(VAR_3);


 FUNC_0(VAR_3, VAR_2, VAR_4->memrid,
   VAR_4->memrange);


 if(FUNC_3(VAR_3) == VAR_0 ||
   FUNC_3(VAR_3) == VAR_1) {
  if(VAR_4->memrange2 != ((void*)0))
   FUNC_0(VAR_3, VAR_2, VAR_4->memrid2,
    VAR_4->memrange);



 }




 VAR_5 = FUNC_5(VAR_3);





   FUNC_1(VAR_4->devt);
 return(0);
}
