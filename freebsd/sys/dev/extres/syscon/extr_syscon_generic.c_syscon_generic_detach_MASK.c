
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscon_generic_softc {int * mem_res; int * syscon; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct syscon_generic_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct syscon_generic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct syscon_generic_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3->syscon != ((void*)0)) {
  FUNC_4(VAR_3->syscon);
  FUNC_3(VAR_3->syscon, VAR_0);
 }

 FUNC_0(VAR_3);

 if (VAR_3->mem_res != ((void*)0))
  FUNC_1(VAR_2, VAR_1, 0, VAR_3->mem_res);
 return (0);
}
