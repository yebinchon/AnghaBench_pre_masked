
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vlapic {int vcpuid; int vm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct vlapic*,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (struct vlapic*) ;

void
FUNC_5(struct vlapic *VAR_1, uint64_t VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_4(VAR_1), ("SELF_IPI does not exist in xAPIC mode"));

 VAR_3 = VAR_2 & 0xff;
 FUNC_2(VAR_1->vm, VAR_1->vcpuid, VAR_3);
 FUNC_3(VAR_1->vm, VAR_1->vcpuid, VAR_0,
     VAR_1->vcpuid, 1);
 FUNC_1(VAR_1, "vlapic self-ipi %d", VAR_3);
}
