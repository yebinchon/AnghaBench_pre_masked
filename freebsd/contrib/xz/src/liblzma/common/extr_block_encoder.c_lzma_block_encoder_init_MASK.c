
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_10__ {int * update; int * end; int * code; TYPE_2__* coder; } ;
typedef TYPE_1__ lzma_next_coder ;
struct TYPE_11__ {int next; int check; scalar_t__ pos; scalar_t__ uncompressed_size; scalar_t__ compressed_size; TYPE_3__* block; int sequence; } ;
typedef TYPE_2__ lzma_block_coder ;
struct TYPE_12__ {int version; int filters; scalar_t__ check; } ;
typedef TYPE_3__ lzma_block ;
typedef int lzma_allocator ;


 unsigned int VAR_0 ;
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
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int (*) (TYPE_1__*,int const*,TYPE_3__*),TYPE_1__*,int const*) ;
 int FUNC_4 (int *,int const*,int ) ;

extern lzma_ret
FUNC_5(lzma_next_coder *VAR_10, const lzma_allocator *VAR_11,
  lzma_block *VAR_12)
{
 FUNC_3(&FUNC_5, VAR_10, VAR_11);

 if (VAR_12 == ((void*)0))
  return VAR_4;



 if (VAR_12->version > 1)
  return VAR_3;



 if ((unsigned int)(VAR_12->check) > VAR_0)
  return VAR_4;

 if (!FUNC_2(VAR_12->check))
  return VAR_5;


 lzma_block_coder *VAR_13 = VAR_10->coder;
 if (VAR_13 == ((void*)0)) {
  VAR_13 = FUNC_0(sizeof(lzma_block_coder), VAR_11);
  if (VAR_13 == ((void*)0))
   return VAR_1;

  VAR_10->coder = VAR_13;
  VAR_10->code = &VAR_7;
  VAR_10->end = &VAR_8;
  VAR_10->update = &VAR_9;
  VAR_13->next = VAR_2;
 }


 VAR_13->sequence = VAR_6;
 VAR_13->block = VAR_12;
 VAR_13->compressed_size = 0;
 VAR_13->uncompressed_size = 0;
 VAR_13->pos = 0;


 FUNC_1(&VAR_13->check, VAR_12->check);


 return FUNC_4(&VAR_13->next, VAR_11, VAR_12->filters);
}
