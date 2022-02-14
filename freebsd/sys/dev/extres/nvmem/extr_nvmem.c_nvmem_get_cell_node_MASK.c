
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int,void**) ;
 int FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(phandle_t VAR_2, int VAR_3, phandle_t *VAR_4)
{
 phandle_t *VAR_5;
 phandle_t VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_2, "nvmem-cells") ||
     !FUNC_1(VAR_2, "nvmem-cell-names"))
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_2, "nvmem-cells", sizeof(*VAR_5), (void **)&VAR_5);
 if (VAR_7 <= 0)
  return (VAR_0);

 VAR_6 = FUNC_2(VAR_5[VAR_3]);
 if (VAR_6 == VAR_5[VAR_3]) {
  if (VAR_1)
   FUNC_4("nvmem_get_node: Cannot resolve phandle %x\n",
       VAR_5[VAR_3]);
  FUNC_3(VAR_5);
  return (VAR_0);
 }

 FUNC_3(VAR_5);
 *VAR_4 = VAR_6;

 return (0);
}
