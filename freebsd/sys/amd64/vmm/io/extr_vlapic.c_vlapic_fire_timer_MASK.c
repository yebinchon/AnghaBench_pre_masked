
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {int vcpuid; int vm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct vlapic*,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct vlapic*) ;
 scalar_t__ FUNC_3 (struct vlapic*,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct vlapic *VAR_2)
{

 FUNC_0(FUNC_2(VAR_2), ("vlapic_fire_timer not locked"));

 if (FUNC_3(VAR_2, VAR_0)) {
  FUNC_1(VAR_2, "vlapic timer fired");
  FUNC_4(VAR_2->vm, VAR_2->vcpuid, VAR_1, 1);
 }
}
