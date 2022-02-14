
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int FUNC_0 (int ,int,void*,size_t) ;
 int FUNC_1 (int ,char*,char const*,int*) ;

int
FUNC_2(phandle_t VAR_0, const char *VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, "nvmem-cell-names", VAR_1, &VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);

 return (FUNC_0(VAR_0, VAR_5, VAR_2, VAR_3));
}
