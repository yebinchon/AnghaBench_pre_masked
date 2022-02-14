
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct vtblk_softc {int dummy; } ;
struct disk {struct vtblk_softc* d_drv1; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (struct vtblk_softc*) ;
 int FUNC_1 (struct vtblk_softc*) ;
 int FUNC_2 (struct vtblk_softc*) ;
 int FUNC_3 (struct vtblk_softc*) ;
 int FUNC_4 (struct vtblk_softc*,void*,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_5(void *VAR_1, void *VAR_2, vm_offset_t VAR_3, off_t VAR_4,
    size_t VAR_5)
{
 struct disk *VAR_6;
 struct vtblk_softc *VAR_7;
 int VAR_8;

 VAR_6 = VAR_1;
 VAR_8 = 0;

 if ((VAR_7 = VAR_6->d_drv1) == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_7);

 FUNC_3(VAR_7);

 if (VAR_5 > 0)
  VAR_8 = FUNC_4(VAR_7, VAR_2, VAR_4, VAR_5);
 if (VAR_8 || (VAR_2 == ((void*)0) && VAR_4 == 0))
  FUNC_2(VAR_7);

 FUNC_1(VAR_7);

 return (VAR_8);
}
