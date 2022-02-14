
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_13__ {scalar_t__ dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_14__ {int * end; int * code; TYPE_4__* coder; } ;
typedef TYPE_2__ lzma_next_coder ;
struct TYPE_15__ {void* options; int * init; } ;
typedef TYPE_3__ lzma_filter_info ;
struct TYPE_16__ {int next; scalar_t__ header; scalar_t__ header_pos; int sequence; } ;
typedef TYPE_4__ lzma_alone_coder ;
typedef int lzma_allocator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (int,int const*) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_2 (int (*) (TYPE_2__*,int const*,TYPE_1__ const*),TYPE_2__*,int const*) ;
 int FUNC_3 (int *,int const*,TYPE_3__ const*) ;
 int FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static lzma_ret
FUNC_6(lzma_next_coder *VAR_9, const lzma_allocator *VAR_10,
  const lzma_options_lzma *VAR_11)
{
 FUNC_2(&FUNC_6, VAR_9, VAR_10);

 lzma_alone_coder *VAR_12 = VAR_9->coder;

 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_0(sizeof(lzma_alone_coder), VAR_10);
  if (VAR_12 == ((void*)0))
   return VAR_1;

  VAR_9->coder = VAR_12;
  VAR_9->code = &VAR_6;
  VAR_9->end = &VAR_7;
  VAR_12->next = VAR_2;
 }


 VAR_12->sequence = VAR_4;
 VAR_12->header_pos = 0;



 if (FUNC_1(VAR_11, VAR_12->header))
  return VAR_3;


 if (VAR_11->dict_size < VAR_0)
  return VAR_3;





 uint32_t VAR_13 = VAR_11->dict_size - 1;
 VAR_13 |= VAR_13 >> 2;
 VAR_13 |= VAR_13 >> 3;
 VAR_13 |= VAR_13 >> 4;
 VAR_13 |= VAR_13 >> 8;
 VAR_13 |= VAR_13 >> 16;
 if (VAR_13 != VAR_5)
  ++VAR_13;

 FUNC_5(VAR_12->header + 1, VAR_13);


 FUNC_4(VAR_12->header + 1 + 4, 0xFF, 8);


 const lzma_filter_info VAR_14[2] = {
  {
   .init = &VAR_8,
   .options = (void *)(VAR_11),
  }, {
   .init = ((void*)0),
  }
 };

 return FUNC_3(&VAR_12->next, VAR_10, VAR_14);
}
