
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int uintmax_t ;
struct agp_softc {int as_lock; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 size_t FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 struct agp_softc* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

int
FUNC_11(device_t VAR_3, vm_page_t *VAR_4, vm_size_t VAR_5,
    vm_offset_t VAR_6)
{
 struct agp_softc *VAR_7;
 vm_offset_t VAR_8, VAR_9, VAR_10, VAR_11;
 vm_page_t VAR_12;
 int VAR_13;

 if ((VAR_5 & (VAR_0 - 1)) != 0 ||
     (VAR_6 & (VAR_0 - 1)) != 0)
  return (VAR_1);

 VAR_7 = FUNC_7(VAR_3);

 FUNC_8(&VAR_7->as_lock);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_2) {
  VAR_12 = VAR_4[FUNC_5(VAR_8)];
  FUNC_4(FUNC_10(VAR_12),
      ("agp_bind_pages: page %p hasn't been wired", VAR_12));







  for (VAR_9 = 0; VAR_9 < VAR_2 && VAR_8 + VAR_9 < VAR_5; VAR_9 += VAR_0) {
   VAR_11 = FUNC_6(VAR_12) + VAR_9;
   FUNC_1("binding offset %#jx to pa %#jx\n",
    (uintmax_t)VAR_6 + VAR_8 + VAR_9, (uintmax_t)VAR_11);
   VAR_13 = FUNC_0(VAR_3, VAR_6 + VAR_8 + VAR_9, VAR_11);
   if (VAR_13) {



    for (VAR_10 = 0; VAR_10 < VAR_8 + VAR_9; VAR_10 += VAR_0)
     FUNC_3(VAR_3, VAR_6 + VAR_10);

    FUNC_9(&VAR_7->as_lock);
    return (VAR_13);
   }
  }
 }

 FUNC_2(VAR_3);

 FUNC_9(&VAR_7->as_lock);
 return (0);
}
