
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_mfd_softc {int * mem_res; int * syscon; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct simple_mfd_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct simple_mfd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct simple_mfd_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_4(VAR_2, "syscon")) {
  if (VAR_3->syscon != ((void*)0)) {
   FUNC_5(VAR_3->syscon);
   FUNC_3(VAR_3->syscon, VAR_0);
  }

  FUNC_0(VAR_3);

  if (VAR_3->mem_res != ((void*)0))
   FUNC_1(VAR_2, VAR_1, 0,
       VAR_3->mem_res);
 }
 return (0);
}
