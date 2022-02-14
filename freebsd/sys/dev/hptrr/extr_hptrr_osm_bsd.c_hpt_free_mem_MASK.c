
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct freelist {scalar_t__ count; scalar_t__ reserved_count; int size; int tag; struct freelist* next; } ;
struct TYPE_3__ {scalar_t__ vbus; struct freelist* freelist_dma_head; struct freelist* freelist_head; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef int PVBUS ;
typedef int HPT_UPTR ;
typedef int BUS_ADDRESS ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,void*,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int) ;
 void* FUNC_6 (struct freelist*) ;
 void* FUNC_7 (struct freelist*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(PVBUS_EXT VAR_3)
{
 struct freelist *VAR_4;
 void *VAR_5;
 int VAR_6;
 BUS_ADDRESS VAR_7;

 for (VAR_4=VAR_3->freelist_head; VAR_4; VAR_4=VAR_4->next) {





  while ((VAR_5=FUNC_6(VAR_4)))
   FUNC_4(VAR_5, VAR_0);
 }

 for (VAR_6=0; VAR_6<VAR_2; VAR_6++) {
  VAR_5 = FUNC_2((PVBUS)VAR_3->vbus, &VAR_7);
  FUNC_0(VAR_5);
  FUNC_5(VAR_5, 0);
 }

 for (VAR_4=VAR_3->freelist_dma_head; VAR_4; VAR_4=VAR_4->next) {
  int VAR_8, VAR_9;





  for (VAR_8=0, VAR_9=VAR_1; VAR_9<VAR_4->size; VAR_8++, VAR_9<<=1) ;

  while ((VAR_5=FUNC_7(VAR_4, &VAR_7))) {
   if (VAR_8)
    FUNC_5(VAR_5, VAR_8);
   else {

    if (((HPT_UPTR)VAR_5 & (VAR_1-1))==0)
     FUNC_3((PVBUS)VAR_3->vbus, VAR_5, VAR_7);
   }
  }
 }

 while ((VAR_5 = FUNC_2((PVBUS)VAR_3->vbus, &VAR_7)))
  FUNC_5(VAR_5, 0);
}
