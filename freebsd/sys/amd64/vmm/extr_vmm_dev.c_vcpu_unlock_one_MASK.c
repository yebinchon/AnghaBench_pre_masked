
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_softc {int vm; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct vmmdev_softc *VAR_2, int VAR_3)
{
 enum vcpu_state VAR_4;

 VAR_4 = FUNC_1(VAR_2->vm, VAR_3, ((void*)0));
 if (VAR_4 != VAR_0) {
  FUNC_0("vcpu %s(%d) has invalid state %d", FUNC_3(VAR_2->vm),
      VAR_3, VAR_4);
 }

 FUNC_2(VAR_2->vm, VAR_3, VAR_1, 0);
}
