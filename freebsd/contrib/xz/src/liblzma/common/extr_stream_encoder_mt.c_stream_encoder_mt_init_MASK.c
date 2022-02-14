
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int worker_thread ;
typedef scalar_t__ uint64_t ;
struct TYPE_19__ {scalar_t__ check; scalar_t__ version; } ;
struct TYPE_16__ {int threads_max; size_t block_size; int progress_out; scalar_t__ progress_in; scalar_t__ header_pos; int header; TYPE_8__ stream_flags; int * index; TYPE_13__* filters; int timeout; int outq; int * threads; int * threads_free; scalar_t__ threads_initialized; int * thr; int thread_error; int sequence; int index_encoder; int mutex; int cond; } ;
typedef TYPE_1__ lzma_stream_coder ;
typedef int lzma_ret ;
typedef int lzma_options_easy ;
struct TYPE_17__ {int * get_progress; int * end; int * code; TYPE_1__* coder; } ;
typedef TYPE_2__ lzma_next_coder ;
struct TYPE_18__ {int threads; scalar_t__ check; int timeout; } ;
typedef TYPE_3__ lzma_mt ;
typedef int lzma_filter ;
typedef int lzma_allocator ;
struct TYPE_15__ {scalar_t__ id; TYPE_1__* options; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__ const*,int *,int const**,scalar_t__*,scalar_t__*) ;
 int VAR_12 ;
 void* FUNC_2 (int,int const*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int const*,TYPE_13__*,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (int *,int const*) ;
 int * FUNC_7 (int const*) ;
 int FUNC_8 (int (*) (TYPE_2__*,int const*,TYPE_3__ const*),TYPE_2__*,int const*) ;
 int FUNC_9 (int *,int const*,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int const*) ;
 int FUNC_11 (TYPE_8__*,int ) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (TYPE_1__*,int const*) ;
 int FUNC_18 (TYPE_1__*,int) ;

__attribute__((used)) static lzma_ret
FUNC_19(lzma_next_coder *VAR_15, const lzma_allocator *VAR_16,
  const lzma_mt *VAR_17)
{
 FUNC_8(&FUNC_19, VAR_15, VAR_16);


 lzma_options_easy VAR_18;
 const lzma_filter *VAR_19;
 uint64_t VAR_20;
 uint64_t VAR_21;
 FUNC_16(FUNC_1(VAR_17, &VAR_18, &VAR_19,
   &VAR_20, &VAR_21));
 if (FUNC_10(VAR_19) == VAR_11)
  return VAR_4;


 if ((unsigned int)(VAR_17->check) > VAR_0)
  return VAR_5;

 if (!FUNC_3(VAR_17->check))
  return VAR_7;


 lzma_stream_coder *VAR_22 = VAR_15->coder;
 if (VAR_22 == ((void*)0)) {
  VAR_22 = FUNC_2(sizeof(lzma_stream_coder), VAR_16);
  if (VAR_22 == ((void*)0))
   return VAR_1;

  VAR_15->coder = VAR_22;





  if (FUNC_15(&VAR_22->mutex)) {
   FUNC_5(VAR_22, VAR_16);
   VAR_15->coder = ((void*)0);
   return VAR_1;
  }

  if (FUNC_13(&VAR_22->cond)) {
   FUNC_14(&VAR_22->mutex);
   FUNC_5(VAR_22, VAR_16);
   VAR_15->coder = ((void*)0);
   return VAR_1;
  }

  VAR_15->code = &VAR_13;
  VAR_15->end = &VAR_14;
  VAR_15->get_progress = &VAR_12;


  VAR_22->filters[0].id = VAR_8;
  VAR_22->index_encoder = VAR_2;
  VAR_22->index = ((void*)0);
  FUNC_12(&VAR_22->outq, sizeof(VAR_22->outq));
  VAR_22->threads = ((void*)0);
  VAR_22->threads_max = 0;
  VAR_22->threads_initialized = 0;
 }


 VAR_22->sequence = VAR_9;
 VAR_22->block_size = (size_t)(VAR_20);
 VAR_22->thread_error = VAR_3;
 VAR_22->thr = ((void*)0);


 FUNC_0(VAR_17->threads > 0);
 if (VAR_22->threads_max != VAR_17->threads) {
  FUNC_17(VAR_22, VAR_16);

  VAR_22->threads = ((void*)0);
  VAR_22->threads_max = 0;

  VAR_22->threads_initialized = 0;
  VAR_22->threads_free = ((void*)0);

  VAR_22->threads = FUNC_2(
    VAR_17->threads * sizeof(worker_thread),
    VAR_16);
  if (VAR_22->threads == ((void*)0))
   return VAR_1;

  VAR_22->threads_max = VAR_17->threads;
 } else {


  FUNC_18(VAR_22, 1);
 }


 FUNC_16(FUNC_9(&VAR_22->outq, VAR_16,
   VAR_21, VAR_17->threads));


 VAR_22->timeout = VAR_17->timeout;


 for (size_t VAR_23 = 0; VAR_22->filters[VAR_23].id != VAR_8; ++VAR_23)
  FUNC_5(VAR_22->filters[VAR_23].options, VAR_16);

 FUNC_16(FUNC_4(
   VAR_19, VAR_22->filters, VAR_16));


 FUNC_6(VAR_22->index, VAR_16);
 VAR_22->index = FUNC_7(VAR_16);
 if (VAR_22->index == ((void*)0))
  return VAR_1;


 VAR_22->stream_flags.version = 0;
 VAR_22->stream_flags.check = VAR_17->check;
 FUNC_16(FUNC_11(
   &VAR_22->stream_flags, VAR_22->header));

 VAR_22->header_pos = 0;


 VAR_22->progress_in = 0;
 VAR_22->progress_out = VAR_6;

 return VAR_3;
}
