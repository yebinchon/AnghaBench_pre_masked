
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_softc {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct vmmdev_softc *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 < 0 || VAR_3 >= FUNC_1(VAR_2->vm))
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_2->vm, VAR_3, VAR_1, 1);
 return (VAR_4);
}
