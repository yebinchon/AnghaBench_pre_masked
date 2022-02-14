
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct freelist {int count; int size; void** head; int alignment; int tag; struct freelist* next; } ;
struct TYPE_7__ {int him_handle; TYPE_1__* him; } ;
struct TYPE_9__ {TYPE_2__ ldm_adapter; struct TYPE_9__* next; } ;
struct TYPE_8__ {scalar_t__ vbus; struct freelist* freelist_dma_head; struct freelist* freelist_head; TYPE_4__* hba_list; } ;
struct TYPE_6__ {int (* get_meminfo ) (int ) ;} ;
typedef TYPE_3__* PVBUS_EXT ;
typedef int PVBUS ;
typedef TYPE_4__* PHBA ;
typedef int HPT_UPTR ;
typedef scalar_t__ HPT_UINT ;
typedef scalar_t__ BUS_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,void**,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (void**) ;

__attribute__((used)) static int FUNC_8(PVBUS_EXT VAR_6)
{
 PHBA VAR_7;
 struct freelist *VAR_8;
 HPT_UINT VAR_9;
 void **VAR_10;

 for (VAR_7 = VAR_6->hba_list; VAR_7; VAR_7 = VAR_7->next)
  VAR_7->ldm_adapter.him->get_meminfo(VAR_7->ldm_adapter.him_handle);

 FUNC_4((PVBUS)VAR_6->vbus, 0);

 for (VAR_8=VAR_6->freelist_head; VAR_8; VAR_8=VAR_8->next) {
  FUNC_1(("%s: %d*%d=%d bytes",
   VAR_8->tag, VAR_8->count, VAR_8->size, VAR_8->count*VAR_8->size));
  for (VAR_9=0; VAR_9<VAR_8->count; VAR_9++) {
   VAR_10 = (void **)FUNC_5(VAR_8->size, VAR_2, VAR_3);
   if (!VAR_10) return (VAR_1);
   *VAR_10 = VAR_8->head;
   VAR_8->head = VAR_10;
  }
 }

 for (VAR_8=VAR_6->freelist_dma_head; VAR_8; VAR_8=VAR_8->next) {
  int VAR_11, VAR_12, VAR_13;

  FUNC_0((VAR_8->size & (VAR_8->alignment-1))==0);

  for (VAR_11=0, VAR_12=VAR_4; VAR_12<VAR_8->size; VAR_11++, VAR_12<<=1)
   ;

  FUNC_1(("%s: %d*%d=%d bytes, order %d",
   VAR_8->tag, VAR_8->count, VAR_8->size, VAR_8->count*VAR_8->size, VAR_11));
  FUNC_0(VAR_8->alignment<=VAR_4);

  for (VAR_9=0; VAR_9<VAR_8->count;) {
   VAR_10 = (void **)FUNC_2(VAR_11);
   if (!VAR_10) return -1;
   for (VAR_13 = VAR_12/VAR_8->size; VAR_13 && VAR_9<VAR_8->count; VAR_9++,VAR_13--) {
    *VAR_10 = VAR_8->head;
    *(BUS_ADDRESS *)(VAR_10+1) = (BUS_ADDRESS)FUNC_7(VAR_10);
    VAR_8->head = VAR_10;
    VAR_10 = (void **)((unsigned long)VAR_10 + VAR_8->size);
   }
  }
 }

 FUNC_0(VAR_4==VAR_0);

 for (VAR_9=0; VAR_9<VAR_5; VAR_9++) {
  VAR_10 = (void **)FUNC_2(0);
  if (!VAR_10) return -1;
  FUNC_0(((HPT_UPTR)VAR_10 & (VAR_0-1))==0);
  FUNC_3((PVBUS)VAR_6->vbus, VAR_10, (BUS_ADDRESS)FUNC_7(VAR_10));
 }

 return 0;
}
