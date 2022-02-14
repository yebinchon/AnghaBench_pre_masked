
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_5__ {uintptr_t mr_Bytes; struct TYPE_5__* mr_Next; } ;
struct TYPE_4__ {uintptr_t mp_Used; TYPE_2__* mp_First; scalar_t__ mp_End; scalar_t__ mp_Base; } ;
typedef TYPE_1__ MemPool ;
typedef TYPE_2__ MemNode ;


 uintptr_t VAR_0 ;
 int FUNC_0 (char*,void*,int ) ;

void
FUNC_1(MemPool *VAR_1, void *VAR_2, uintptr_t VAR_3)
{
 MemNode **VAR_4;
 MemNode *VAR_5;





 VAR_3 = (VAR_3 + VAR_0) & ~VAR_0;

 if (VAR_3 == 0)
  return;





 if ((char *)VAR_2 < (char *)VAR_1->mp_Base ||
     (char *)VAR_2 + VAR_3 > (char *)VAR_1->mp_End ||
     ((uintptr_t)VAR_2 & VAR_0) != 0)
  FUNC_0("zfree(%p,%ju): wild pointer", VAR_2, (uintmax_t)VAR_3);




 VAR_1->mp_Used -= VAR_3;

 for (VAR_4 = &VAR_1->mp_First; (VAR_5 = *VAR_4) != ((void*)0); VAR_4 = &VAR_5->mr_Next) {






  if ((char *)VAR_2 <= (char *)VAR_5) {



   if ((char *)VAR_2 + VAR_3 > (char *)VAR_5) {
    FUNC_0("zfree(%p,%ju): corrupt memlist1", VAR_2,
        (uintmax_t)VAR_3);
   }





   if ((char *)VAR_2 + VAR_3 == (char *)VAR_5) {
    ((MemNode *)VAR_2)->mr_Next = VAR_5->mr_Next;
    ((MemNode *)VAR_2)->mr_Bytes =
        VAR_3 + VAR_5->mr_Bytes;
   } else {
    ((MemNode *)VAR_2)->mr_Next = VAR_5;
    ((MemNode *)VAR_2)->mr_Bytes = VAR_3;
   }
   *VAR_4 = VAR_5 = (MemNode *)VAR_2;






   if (VAR_4 != &VAR_1->mp_First) {
    if ((char *)VAR_4 + ((MemNode*)VAR_4)->mr_Bytes ==
        (char *)VAR_2) {
     ((MemNode *)VAR_4)->mr_Next = VAR_5->mr_Next;
     ((MemNode *)VAR_4)->mr_Bytes +=
         VAR_5->mr_Bytes;
     VAR_5 = (MemNode *)VAR_4;
    }
   }
   return;
  }
  if ((char *)VAR_2 < (char *)VAR_5 + VAR_5->mr_Bytes) {
   FUNC_0("zfree(%p,%ju): corrupt memlist2", VAR_2,
       (uintmax_t)VAR_3);
  }
 }




 if (VAR_4 == &VAR_1->mp_First ||
     (char *)VAR_4 + ((MemNode *)VAR_4)->mr_Bytes != (char *)VAR_2) {
  ((MemNode *)VAR_2)->mr_Next = ((void*)0);
  ((MemNode *)VAR_2)->mr_Bytes = VAR_3;
  *VAR_4 = (MemNode *)VAR_2;
  VAR_5 = (MemNode *)VAR_2;
 } else {
  ((MemNode *)VAR_4)->mr_Bytes += VAR_3;
  VAR_5 = (MemNode *)VAR_4;
 }
}
