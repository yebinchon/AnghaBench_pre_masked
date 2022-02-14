
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
struct agp_memory {int am_type; scalar_t__ am_obj; int am_size; scalar_t__ am_is_bound; } ;
struct TYPE_2__ {int as_memory; int as_allocated; } ;
struct agp_i810_softc {TYPE_1__ agp; int * argb_cursor; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct agp_memory*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int ) ;
 struct agp_i810_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct agp_memory*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5, struct agp_memory *VAR_6)
{
 struct agp_i810_softc *VAR_7;
 vm_page_t VAR_8;

 if (VAR_6->am_is_bound)
  return (VAR_1);

 VAR_7 = FUNC_4(VAR_5);

 if (VAR_6->am_type == 2) {
  if (VAR_6->am_size == VAR_0) {



   FUNC_1(VAR_6->am_obj);
   VAR_8 = FUNC_7(VAR_6->am_obj, 0);
   FUNC_8(VAR_8, VAR_3);
   FUNC_2(VAR_6->am_obj);
  } else {
   FUNC_3(VAR_7->argb_cursor, VAR_6->am_size, VAR_2);
   VAR_7->argb_cursor = ((void*)0);
  }
 }

 VAR_7->agp.as_allocated -= VAR_6->am_size;
 FUNC_0(&VAR_7->agp.as_memory, VAR_6, VAR_4);
 if (VAR_6->am_obj)
  FUNC_6(VAR_6->am_obj);
 FUNC_5(VAR_6, VAR_2);
 return (0);
}
