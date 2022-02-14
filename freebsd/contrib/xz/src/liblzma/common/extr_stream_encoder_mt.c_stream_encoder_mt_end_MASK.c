
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mutex; int cond; int index; int index_encoder; TYPE_1__* filters; int outq; } ;
typedef TYPE_2__ lzma_stream_coder ;
typedef int lzma_allocator ;
struct TYPE_5__ {scalar_t__ id; TYPE_2__* options; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int const*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1, const lzma_allocator *VAR_2)
{
 lzma_stream_coder *VAR_3 = VAR_1;


 FUNC_6(VAR_3, VAR_2);
 FUNC_3(&VAR_3->outq, VAR_2);

 for (size_t VAR_4 = 0; VAR_3->filters[VAR_4].id != VAR_0; ++VAR_4)
  FUNC_0(VAR_3->filters[VAR_4].options, VAR_2);

 FUNC_2(&VAR_3->index_encoder, VAR_2);
 FUNC_1(VAR_3->index, VAR_2);

 FUNC_4(&VAR_3->cond);
 FUNC_5(&VAR_3->mutex);

 FUNC_0(VAR_3, VAR_2);
 return;
}
