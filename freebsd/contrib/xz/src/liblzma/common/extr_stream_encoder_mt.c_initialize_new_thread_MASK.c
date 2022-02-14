
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * in; int mutex; int cond; int thread_id; int block_encoder; scalar_t__ progress_out; scalar_t__ progress_in; TYPE_2__* coder; int const* allocator; int state; } ;
typedef TYPE_1__ worker_thread ;
struct TYPE_6__ {size_t threads_initialized; TYPE_1__* thr; int block_size; TYPE_1__* threads; } ;
typedef TYPE_2__ lzma_stream_coder ;
typedef int lzma_ret ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_4 ;

__attribute__((used)) static lzma_ret
FUNC_7(lzma_stream_coder *VAR_5,
  const lzma_allocator *VAR_6)
{
 worker_thread *VAR_7 = &VAR_5->threads[VAR_5->threads_initialized];

 VAR_7->in = FUNC_0(VAR_5->block_size, VAR_6);
 if (VAR_7->in == ((void*)0))
  return VAR_0;

 if (FUNC_6(&VAR_7->mutex))
  goto error_mutex;

 if (FUNC_3(&VAR_7->cond))
  goto error_cond;

 VAR_7->state = VAR_3;
 VAR_7->allocator = VAR_6;
 VAR_7->coder = VAR_5;
 VAR_7->progress_in = 0;
 VAR_7->progress_out = 0;
 VAR_7->block_encoder = VAR_1;

 if (FUNC_4(&VAR_7->thread_id, &VAR_4, VAR_7))
  goto error_thread;

 ++VAR_5->threads_initialized;
 VAR_5->thr = VAR_7;

 return VAR_2;

error_thread:
 FUNC_2(&VAR_7->cond);

error_cond:
 FUNC_5(&VAR_7->mutex);

error_mutex:
 FUNC_1(VAR_7->in, VAR_6);
 return VAR_0;
}
