
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_softc {int * mipi_mem_res; int * mux_mem_res; int * pad_mem_res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 struct pinmux_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct pinmux_softc * VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dev = VAR_3;

 VAR_5 = 0;
 VAR_4->pad_mem_res = FUNC_0(VAR_3, VAR_2, &VAR_5,
     VAR_1);
 if (VAR_4->pad_mem_res == ((void*)0)) {
  FUNC_2(VAR_3, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 VAR_5 = 1;
 VAR_4->mux_mem_res = FUNC_0(VAR_3, VAR_2, &VAR_5,
     VAR_1);
 if (VAR_4->mux_mem_res == ((void*)0)) {
  FUNC_2(VAR_3, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 VAR_5 = 2;
 VAR_4->mipi_mem_res = FUNC_0(VAR_3, VAR_2, &VAR_5,
     VAR_1);
 if (VAR_4->mipi_mem_res == ((void*)0)) {
  FUNC_2(VAR_3, "Cannot allocate memory resources\n");
  return (VAR_0);
 }


 FUNC_4(VAR_3, ((void*)0));
 FUNC_3(VAR_3, "boot");

 return (0);
}
