
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmmdev_softc {int vm; } ;


 int FUNC_0 (struct vmmdev_softc*,int) ;
 int FUNC_1 (struct vmmdev_softc*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vmmdev_softc *VAR_0)
{
 int VAR_1, VAR_2;
 uint16_t VAR_3;

 VAR_3 = FUNC_2(VAR_0->vm);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, VAR_2);
  if (VAR_1)
   break;
 }

 if (VAR_1) {
  while (--VAR_2 >= 0)
   FUNC_1(VAR_0, VAR_2);
 }

 return (VAR_1);
}
