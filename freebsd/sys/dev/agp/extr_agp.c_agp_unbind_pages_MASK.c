
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
struct agp_softc {int as_lock; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 struct agp_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(device_t VAR_2, vm_size_t VAR_3, vm_offset_t VAR_4)
{
 struct agp_softc *VAR_5;
 vm_offset_t VAR_6;

 if ((VAR_3 & (VAR_0 - 1)) != 0 ||
     (VAR_4 & (VAR_0 - 1)) != 0)
  return (VAR_1);

 VAR_5 = FUNC_2(VAR_2);

 FUNC_3(&VAR_5->as_lock);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += VAR_0)
  FUNC_1(VAR_2, VAR_4 + VAR_6);

 FUNC_0(VAR_2);

 FUNC_4(&VAR_5->as_lock);
 return (0);
}
