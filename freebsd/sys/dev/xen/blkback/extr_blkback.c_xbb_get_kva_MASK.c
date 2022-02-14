
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ va; } ;
struct xbb_softc {int reqlist_kva_pages; int kva; int lock; int kva_shortages; int flags; TYPE_1__ ring_config; int kva_free; } ;


 int FUNC_0 (int,char*) ;
 intptr_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static uint8_t *
FUNC_6(struct xbb_softc *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 uint8_t *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3 != 0, ("xbb_get_kva of zero length"));

 VAR_4 = 0;
 VAR_6 = ((void*)0);

 FUNC_4(&VAR_2->lock);




 FUNC_1(VAR_2->kva_free, VAR_2->reqlist_kva_pages, &VAR_4);

 if (VAR_4 == -1)
  goto bailout;





 for (VAR_7 = VAR_4, VAR_5 = 0; VAR_7 < VAR_2->reqlist_kva_pages; VAR_7++) {






  if (FUNC_3(VAR_2->kva_free, VAR_7)) {
   VAR_5 = 0;
   VAR_4 = -1;
   continue;
  }

  if (VAR_4 == -1)
   VAR_4 = VAR_7;





  if (++VAR_5 == VAR_3) {

   FUNC_2(VAR_2->kva_free, VAR_4,
     VAR_4 + VAR_3 - 1);

   VAR_6 = VAR_2->kva +
    (uint8_t *)((intptr_t)VAR_4 * VAR_0);

   FUNC_0(VAR_6 >= (uint8_t *)VAR_2->kva &&
    VAR_6 + (VAR_3 * VAR_0) <=
    (uint8_t *)VAR_2->ring_config.va,
    ("Free KVA %p len %d out of range, "
     "kva = %#jx, ring VA = %#jx\n", VAR_6,
     VAR_3 * VAR_0, (uintmax_t)VAR_2->kva,
     (uintmax_t)VAR_2->ring_config.va));
   break;
  }
 }

bailout:

 if (VAR_6 == ((void*)0)) {
  VAR_2->flags |= VAR_1;
  VAR_2->kva_shortages++;
 }

 FUNC_5(&VAR_2->lock);

 return (VAR_6);
}
