
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {int vcpuid; int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vlapic*,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

void
FUNC_2(struct vlapic *VAR_2)
{

 if (FUNC_0(VAR_2, VAR_0)) {
  FUNC_1(VAR_2->vm, VAR_2->vcpuid, VAR_1, 1);
 }
}
