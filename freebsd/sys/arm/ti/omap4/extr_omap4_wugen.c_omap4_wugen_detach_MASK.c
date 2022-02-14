
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_wugen_sc {int * sc_mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct omap4_wugen_sc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct omap4_wugen_sc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2->sc_mem_res != ((void*)0)) {
  FUNC_0(VAR_1, VAR_0, 0, VAR_2->sc_mem_res);
  VAR_2->sc_mem_res = ((void*)0);
 }
 return (0);
}
