
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_pem_softc {int * reg; int mem_rman; int io_rman; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 struct thunder_pem_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1)
{
 struct thunder_pem_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->io_rman);
 FUNC_2(&VAR_2->mem_rman);

 if (VAR_2->reg != ((void*)0))
  FUNC_0(VAR_1, VAR_0, VAR_2->reg);
}
