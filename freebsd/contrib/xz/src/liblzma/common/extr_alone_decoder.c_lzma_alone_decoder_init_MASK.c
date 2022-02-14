
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int lzma_ret ;
struct TYPE_9__ {int * memconfig; int * end; int * code; TYPE_3__* coder; } ;
typedef TYPE_2__ lzma_next_coder ;
struct TYPE_8__ {scalar_t__ preset_dict_size; int * preset_dict; scalar_t__ dict_size; } ;
struct TYPE_10__ {int picky; int memusage; int memlimit; scalar_t__ uncompressed_size; TYPE_1__ options; scalar_t__ pos; int sequence; int next; } ;
typedef TYPE_3__ lzma_alone_coder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (int,int const*) ;
 int FUNC_1 (int (*) (TYPE_2__*,int const*,int ,int),TYPE_2__*,int const*) ;
 int FUNC_2 (int,int ) ;

extern lzma_ret
FUNC_3(lzma_next_coder *VAR_8, const lzma_allocator *VAR_9,
  uint64_t VAR_10, bool VAR_11)
{
 FUNC_1(&FUNC_3, VAR_8, VAR_9);

 lzma_alone_coder *VAR_12 = VAR_8->coder;

 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_0(sizeof(lzma_alone_coder), VAR_9);
  if (VAR_12 == ((void*)0))
   return VAR_1;

  VAR_8->coder = VAR_12;
  VAR_8->code = &VAR_5;
  VAR_8->end = &VAR_6;
  VAR_8->memconfig = &VAR_7;
  VAR_12->next = VAR_2;
 }

 VAR_12->sequence = VAR_4;
 VAR_12->picky = VAR_11;
 VAR_12->pos = 0;
 VAR_12->options.dict_size = 0;
 VAR_12->options.preset_dict = ((void*)0);
 VAR_12->options.preset_dict_size = 0;
 VAR_12->uncompressed_size = 0;
 VAR_12->memlimit = FUNC_2(1, VAR_10);
 VAR_12->memusage = VAR_0;

 return VAR_3;
}
