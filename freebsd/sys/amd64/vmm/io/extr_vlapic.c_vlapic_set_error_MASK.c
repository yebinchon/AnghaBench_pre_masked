
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int vcpuid; int vm; int esr_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vlapic*,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct vlapic *VAR_2, uint32_t VAR_3, bool VAR_4)
{

 VAR_2->esr_pending |= VAR_3;





 if (VAR_4)
  return;

 if (FUNC_0(VAR_2, VAR_0)) {
  FUNC_1(VAR_2->vm, VAR_2->vcpuid, VAR_1, 1);
 }
}
