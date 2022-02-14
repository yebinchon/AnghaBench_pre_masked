
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int reg ;
typedef int phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t,size_t,void*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,size_t*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (char*,...) ;

int
FUNC_7(phandle_t VAR_4, int VAR_5, void *VAR_6, size_t VAR_7)
{
 phandle_t VAR_8;
 device_t VAR_9;
 uint32_t VAR_10[2];
 int VAR_11;

 VAR_11 = FUNC_5(VAR_4, VAR_5, &VAR_8);
 if (VAR_11 != 0)
  return (VAR_11);


 if (FUNC_2(VAR_8, "reg", VAR_10, sizeof(VAR_10)) != sizeof(VAR_10)) {
  if (VAR_3)
   FUNC_6("nvmem_get_cell_by_name: Cannot parse reg property of cell %d\n",
       VAR_5);
  return (VAR_1);
 }

 if (VAR_7 != VAR_10[1])
  return (VAR_0);

 VAR_9 = FUNC_1(FUNC_4(FUNC_3(VAR_8)));
 if (VAR_9 == ((void*)0)) {
  if (VAR_3)
   FUNC_6("nvmem_get_cell_by_idx: Cannot find the nvmem device\n");
  return (VAR_2);
 }

 VAR_11 = FUNC_0(VAR_9, VAR_10[0], VAR_10[1], VAR_6);
 if (VAR_11 != 0) {
  return (VAR_11);
 }

 return (0);
}
