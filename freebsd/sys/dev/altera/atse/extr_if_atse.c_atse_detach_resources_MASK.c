
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atse_softc {int * atse_mem_res; int atse_mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct atse_softc* FUNC_1 (int ) ;

void
FUNC_2(device_t VAR_1)
{
 struct atse_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->atse_mem_res != ((void*)0)) {
  FUNC_0(VAR_1, VAR_0, VAR_2->atse_mem_rid,
      VAR_2->atse_mem_res);
  VAR_2->atse_mem_res = ((void*)0);
 }
}
