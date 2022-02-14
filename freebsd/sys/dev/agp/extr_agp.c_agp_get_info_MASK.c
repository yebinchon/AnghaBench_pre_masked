
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_softc {int as_allocated; int as_maxmem; int * as_aperture; } ;
struct agp_info {int ai_memory_used; int ai_memory_allowed; int ai_aperture_size; int ai_aperture_base; int ai_mode; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct agp_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int *) ;

void
FUNC_5(device_t VAR_1, struct agp_info *VAR_2)
{
 struct agp_softc *VAR_3 = FUNC_2(VAR_1);

 VAR_2->ai_mode =
  FUNC_3(VAR_1, FUNC_1(VAR_1) + VAR_0, 4);
 if (VAR_3->as_aperture != ((void*)0))
  VAR_2->ai_aperture_base = FUNC_4(VAR_3->as_aperture);
 else
  VAR_2->ai_aperture_base = 0;
 VAR_2->ai_aperture_size = FUNC_0(VAR_1);
 VAR_2->ai_memory_allowed = VAR_3->as_maxmem;
 VAR_2->ai_memory_used = VAR_3->as_allocated;
}
