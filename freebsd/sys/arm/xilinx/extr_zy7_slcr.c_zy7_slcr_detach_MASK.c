
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zy7_slcr_softc {int * mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct zy7_slcr_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct zy7_slcr_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct zy7_slcr_softc *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(VAR_3);


 if (VAR_4->mem_res != ((void*)0))
  FUNC_2(VAR_3, VAR_0,
        FUNC_4(VAR_4->mem_res), VAR_4->mem_res);

 VAR_1 = ((void*)0);
 VAR_2 = ((void*)0);

 FUNC_0(VAR_4);

 return (0);
}
