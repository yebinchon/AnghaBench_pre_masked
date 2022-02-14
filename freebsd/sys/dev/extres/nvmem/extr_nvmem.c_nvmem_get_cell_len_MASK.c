
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int reg ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,char*,char const*,int*) ;
 int FUNC_3 (char*,char const*) ;

int
FUNC_4(phandle_t VAR_2, const char *VAR_3)
{
 phandle_t VAR_4;
 uint32_t VAR_5[2];
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_2, "nvmem-cell-names", VAR_3, &VAR_7);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_1(VAR_2, VAR_7, &VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);

 if (FUNC_0(VAR_4, "reg", VAR_5, sizeof(VAR_5)) != sizeof(VAR_5)) {
  if (VAR_1)
   FUNC_3("nvmem_get_cell_len: Cannot parse reg property of cell %s\n",
       VAR_3);
  return (VAR_0);
 }

 return (VAR_5[1]);
}
