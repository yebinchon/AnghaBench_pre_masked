
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_disk_softc {int flags; int qlock; int disk; int tq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfi_disk_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct cfi_disk_softc *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->flags & VAR_0)
  return VAR_1;
 FUNC_3(VAR_3->tq);

 FUNC_1(VAR_3->disk);
 FUNC_2(&VAR_3->qlock);
 return 0;
}
