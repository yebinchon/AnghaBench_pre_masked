
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_softc {int as_memory; int as_allocated; } ;
struct agp_memory {int am_obj; scalar_t__ am_size; scalar_t__ am_is_bound; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct agp_memory*,int ) ;
 int VAR_2 ;
 struct agp_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct agp_memory*,int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_3, struct agp_memory *VAR_4)
{
 struct agp_softc *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4->am_is_bound)
  return VAR_0;

 VAR_5->as_allocated -= VAR_4->am_size;
 FUNC_0(&VAR_5->as_memory, VAR_4, VAR_2);
 FUNC_3(VAR_4->am_obj);
 FUNC_2(VAR_4, VAR_1);
 return 0;
}
