
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct agp_softc {int as_lock; } ;
struct agp_memory {int am_size; scalar_t__ am_is_bound; scalar_t__ am_offset; int am_obj; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct agp_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

int
FUNC_11(device_t VAR_4, struct agp_memory *VAR_5)
{
 struct agp_softc *VAR_6 = FUNC_5(VAR_4);
 vm_page_t VAR_7;
 int VAR_8;

 FUNC_7(&VAR_6->as_lock);

 if (!VAR_5->am_is_bound) {
  FUNC_6(VAR_4, "memory is not bound\n");
  FUNC_8(&VAR_6->as_lock);
  return VAR_1;
 }






 for (VAR_8 = 0; VAR_8 < VAR_5->am_size; VAR_8 += VAR_0)
  FUNC_1(VAR_4, VAR_5->am_offset + VAR_8);

 FUNC_0(VAR_4);

 FUNC_2(VAR_5->am_obj);
 for (VAR_8 = 0; VAR_8 < VAR_5->am_size; VAR_8 += VAR_2) {
  VAR_7 = FUNC_9(VAR_5->am_obj, FUNC_4(VAR_8));
  FUNC_10(VAR_7, VAR_3);
 }
 FUNC_3(VAR_5->am_obj);

 VAR_5->am_offset = 0;
 VAR_5->am_is_bound = 0;

 FUNC_8(&VAR_6->as_lock);

 return 0;
}
