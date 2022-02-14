
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aw_ccu_softc {int mtx; int bsh; int bst; int flags; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 struct aw_ccu_softc* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int *,scalar_t__,int ,int *,int,int *) ;
 int FUNC_13 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_3)
{
 struct aw_ccu_softc *VAR_4;
 phandle_t VAR_5, VAR_6;
 device_t VAR_7;
 int VAR_8;

 VAR_4 = FUNC_7(VAR_3);
 VAR_5 = FUNC_11(VAR_3);

 FUNC_13(VAR_3, VAR_5);

 VAR_4->flags = FUNC_2()->ocd_data;






 VAR_4->bst = FUNC_4(VAR_3);
 VAR_8 = FUNC_5(VAR_4->bst, VAR_0, VAR_1, 0,
     &VAR_4->bsh);
 if (VAR_8 != 0) {
  FUNC_8(VAR_3, "couldn't map CCU: %d\n", VAR_8);
  return (VAR_8);
 }

 FUNC_10(&VAR_4->mtx, FUNC_6(VAR_3), ((void*)0), VAR_2);


 for (VAR_6 = FUNC_0(VAR_5); VAR_6 > 0; VAR_6 = FUNC_1(VAR_6)) {
  VAR_7 = FUNC_12(VAR_3, VAR_6, 0, ((void*)0), -1, ((void*)0));
  if (VAR_7 != ((void*)0))
   FUNC_9(VAR_7);
 }

 return (FUNC_3(VAR_3));
}
