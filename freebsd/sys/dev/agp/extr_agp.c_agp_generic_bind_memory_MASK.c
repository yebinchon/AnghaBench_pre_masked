
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int uintmax_t ;
struct agp_softc {int as_lock; } ;
struct agp_memory {int am_size; int am_is_bound; int am_offset; int am_obj; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct agp_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;

int
FUNC_18(device_t VAR_6, struct agp_memory *VAR_7,
   vm_offset_t VAR_8)
{
 struct agp_softc *VAR_9 = FUNC_10(VAR_6);
 vm_offset_t VAR_10, VAR_11, VAR_12;
 vm_page_t VAR_13;
 int VAR_14;


 if ((VAR_8 & (VAR_0 - 1)) != 0 ||
     VAR_8 + VAR_7->am_size > FUNC_3(VAR_6)) {
  FUNC_11(VAR_6, "binding memory at bad offset %#x\n",
      (int)VAR_8);
  return VAR_1;
 }






 FUNC_7(VAR_7->am_obj);
 for (VAR_10 = 0; VAR_10 < VAR_7->am_size; VAR_10 += VAR_2) {







  VAR_13 = FUNC_14(VAR_7->am_obj, FUNC_5(VAR_10),
      VAR_4 | VAR_5);
  FUNC_1("found page pa=%#jx\n", (uintmax_t)FUNC_9(VAR_13));
 }
 FUNC_8(VAR_7->am_obj);

 FUNC_12(&VAR_9->as_lock);

 if (VAR_7->am_is_bound) {
  FUNC_11(VAR_6, "memory already bound\n");
  VAR_14 = VAR_1;
  FUNC_7(VAR_7->am_obj);
  VAR_10 = 0;
  goto bad;
 }





 FUNC_7(VAR_7->am_obj);
 for (VAR_10 = 0; VAR_10 < VAR_7->am_size; VAR_10 += VAR_2) {
  VAR_13 = FUNC_15(VAR_7->am_obj, FUNC_5(VAR_10));







  for (VAR_11 = 0; VAR_11 < VAR_2 && VAR_10 + VAR_11 < VAR_7->am_size;
       VAR_11 += VAR_0) {
   vm_offset_t VAR_15 = FUNC_9(VAR_13) + VAR_11;
   FUNC_1("binding offset %#jx to pa %#jx\n",
    (uintmax_t)VAR_8 + VAR_10 + VAR_11, (uintmax_t)VAR_15);
   VAR_14 = FUNC_0(VAR_6, VAR_8 + VAR_10 + VAR_11, VAR_15);
   if (VAR_14) {




    for (VAR_12 = 0; VAR_12 < VAR_10 + VAR_11; VAR_12 += VAR_0)
     FUNC_4(VAR_6, VAR_8 + VAR_12);
    goto bad;
   }
  }
  FUNC_17(VAR_13);
 }
 FUNC_8(VAR_7->am_obj);




 FUNC_2(VAR_6);

 VAR_7->am_offset = VAR_8;
 VAR_7->am_is_bound = 1;

 FUNC_13(&VAR_9->as_lock);

 return 0;
bad:
 FUNC_13(&VAR_9->as_lock);
 FUNC_6(VAR_7->am_obj);
 for (VAR_12 = 0; VAR_12 < VAR_7->am_size; VAR_12 += VAR_2) {
  VAR_13 = FUNC_15(VAR_7->am_obj, FUNC_5(VAR_12));
  if (VAR_12 >= VAR_10)
   FUNC_17(VAR_13);
  FUNC_16(VAR_13, VAR_3);
 }
 FUNC_8(VAR_7->am_obj);

 return VAR_14;
}
