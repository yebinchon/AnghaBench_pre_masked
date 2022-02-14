
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_long ;
struct devmap_entry {void* pd_size; void* pd_pa; int pd_va; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,void**) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct devmap_entry *VAR_4)
{
 phandle_t VAR_5, VAR_6;
 u_long VAR_7, VAR_8;



 if ((VAR_6 = FUNC_0("/")) == 0)
  return (VAR_2);

 if ((VAR_5 = FUNC_0("/sram")) != 0)
  if (FUNC_3(VAR_5, "mrvl,cesa-sram") ||
      FUNC_3(VAR_5, "mrvl,scratchpad"))
   goto moveon;

 if ((VAR_5 = FUNC_1(VAR_6, "mrvl,cesa-sram", 0)) == 0 &&
     (VAR_5 = FUNC_1(VAR_6, "mrvl,scratchpad", 0)) == 0)
   goto out;

moveon:
 if (FUNC_2(VAR_5, &VAR_7, &VAR_8) != 0)
  return (VAR_0);

 VAR_4->pd_va = VAR_3;
 VAR_4->pd_pa = VAR_7;
 VAR_4->pd_size = VAR_8;

 return (0);
out:
 return (VAR_1);

}
