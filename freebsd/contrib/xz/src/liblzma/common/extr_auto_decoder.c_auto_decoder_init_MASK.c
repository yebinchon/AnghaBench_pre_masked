
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_7__ {int * memconfig; int * get_check; int * end; int * code; TYPE_2__* coder; } ;
typedef TYPE_1__ lzma_next_coder ;
struct TYPE_8__ {int flags; int sequence; int memlimit; int next; } ;
typedef TYPE_2__ lzma_auto_coder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (int,int const*) ;
 int FUNC_1 (int (*) (TYPE_1__*,int const*,int ,int),TYPE_1__*,int const*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static lzma_ret
FUNC_3(lzma_next_coder *VAR_10, const lzma_allocator *VAR_11,
  uint64_t VAR_12, uint32_t VAR_13)
{
 FUNC_1(&FUNC_3, VAR_10, VAR_11);

 if (VAR_13 & ~VAR_4)
  return VAR_3;

 lzma_auto_coder *VAR_14 = VAR_10->coder;
 if (VAR_14 == ((void*)0)) {
  VAR_14 = FUNC_0(sizeof(lzma_auto_coder), VAR_11);
  if (VAR_14 == ((void*)0))
   return VAR_0;

  VAR_10->coder = VAR_14;
  VAR_10->code = &VAR_6;
  VAR_10->end = &VAR_7;
  VAR_10->get_check = &VAR_8;
  VAR_10->memconfig = &VAR_9;
  VAR_14->next = VAR_1;
 }

 VAR_14->memlimit = FUNC_2(1, VAR_12);
 VAR_14->flags = VAR_13;
 VAR_14->sequence = VAR_5;

 return VAR_2;
}
