
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmmdev_softc {int vm; } ;


 int FUNC_0 (struct vmmdev_softc*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct vmmdev_softc *VAR_0)
{
 int VAR_1;
 uint16_t VAR_2;

 VAR_2 = FUNC_1(VAR_0->vm);
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
