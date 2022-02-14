
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct idad_softc {TYPE_1__* controller; int drive; } ;
struct disk {struct idad_softc* d_drv1; } ;
typedef int off_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,void*,size_t,int ,int,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_5, void *VAR_6, vm_offset_t VAR_7, off_t VAR_8, size_t VAR_9)
{

 struct idad_softc *VAR_10;
 int VAR_11 = 0;
 struct disk *VAR_12;

 VAR_12 = VAR_5;
 VAR_10 = VAR_12->d_drv1;
 if (VAR_10 == ((void*)0))
  return (VAR_3);

 VAR_10->controller->flags &= ~VAR_4;

 if (VAR_9 > 0) {
  VAR_11 = FUNC_0(VAR_10->controller, VAR_0, VAR_6,
      VAR_9, VAR_10->drive, VAR_8 / VAR_1, VAR_2);
 }
 VAR_10->controller->flags |= VAR_4;
 return (VAR_11);
}
