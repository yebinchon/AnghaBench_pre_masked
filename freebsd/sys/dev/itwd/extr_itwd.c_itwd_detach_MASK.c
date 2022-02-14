
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itwd_softc {scalar_t__ intr_res; int intr_rid; scalar_t__ intr_handle; int * wd_ev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 struct itwd_softc* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct itwd_softc *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 if (VAR_3->wd_ev != ((void*)0))
  FUNC_0(VAR_1, VAR_3->wd_ev);
 FUNC_4(VAR_2, 0, &VAR_4);
 if (VAR_3->intr_handle)
  FUNC_2(VAR_2, VAR_3->intr_res, VAR_3->intr_handle);
 if (VAR_3->intr_res)
  FUNC_1(VAR_2, VAR_0, VAR_3->intr_rid,
      VAR_3->intr_res);
 return (0);
}
