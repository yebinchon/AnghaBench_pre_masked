
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct resource *VAR_3)
{

 vm_offset_t VAR_4;
 vm_size_t VAR_5;
 int VAR_6;

 VAR_4 = (vm_offset_t)FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_3);

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (FUNC_4(VAR_6 != 0)) {
  FUNC_0(VAR_0, "pmap_change_attr failed, %d\n", VAR_6);
  return (VAR_6);
 }

 return (0);

 return (VAR_1);
}
