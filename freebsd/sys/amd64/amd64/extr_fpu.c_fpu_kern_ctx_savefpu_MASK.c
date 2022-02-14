
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct savefpu {int dummy; } ;
struct fpu_kern_ctx {int hwstate1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static struct savefpu *
FUNC_1(struct fpu_kern_ctx *VAR_1)
{
 vm_offset_t VAR_2;

 VAR_2 = (vm_offset_t)&VAR_1->hwstate1;
 VAR_2 = FUNC_0(VAR_2, VAR_0);
 return ((struct savefpu *)VAR_2);
}
