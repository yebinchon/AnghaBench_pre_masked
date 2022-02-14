
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef scalar_t__ u_short ;
struct ucred {int dummy; } ;
struct netmap_vm_handle_t {int dev; } ;
typedef int intmax_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,void*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, vm_ooffset_t VAR_2, vm_prot_t VAR_3,
  vm_ooffset_t VAR_4, struct ucred *VAR_5, u_short *VAR_6)
{
 struct netmap_vm_handle_t *VAR_7 = VAR_1;

 if (VAR_0)
  FUNC_1("handle %p size %jd prot %d foff %jd",
   VAR_1, (intmax_t)VAR_2, VAR_3, (intmax_t)VAR_4);
 if (VAR_6)
  *VAR_6 = 0;
 FUNC_0(VAR_7->dev);
 return 0;
}
