
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int ,char*,int*,int) ;

__attribute__((used)) static __inline void
FUNC_1(phandle_t VAR_0, pcell_t *VAR_1, pcell_t *VAR_2)
{

 *VAR_1 = 2;

 FUNC_0(VAR_0, "#address-cells", VAR_1, sizeof(*VAR_1));

 *VAR_2 = 2;

 FUNC_0(VAR_0, "#size-cells", VAR_2, sizeof(*VAR_2));
}
