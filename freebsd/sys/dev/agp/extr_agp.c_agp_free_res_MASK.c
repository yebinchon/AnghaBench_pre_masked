
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_softc {int as_lock; int * as_aperture; int as_aperture_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct agp_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(device_t VAR_1)
{
 struct agp_softc *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->as_aperture != ((void*)0))
  FUNC_0(VAR_1, VAR_0, VAR_2->as_aperture_rid,
      VAR_2->as_aperture);
 FUNC_2(&VAR_2->as_lock);
}
