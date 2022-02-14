
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * recycler; TYPE_1__* source; TYPE_4__* buffer; int * pool; } ;
typedef TYPE_2__ svn_temp_serializer__context_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {scalar_t__ blocksize; scalar_t__ len; void* data; } ;
struct TYPE_5__ {int target_offset; int * upper; void* source_struct; } ;


 void* FUNC_0 (int *,int) ;
 TYPE_4__* FUNC_1 (int ,int *) ;

svn_temp_serializer__context_t *
FUNC_2(void *VAR_0,
                                 void *VAR_1,
                                 apr_size_t VAR_2,
                                 apr_size_t VAR_3,
                                 apr_pool_t *VAR_4)
{

  apr_size_t VAR_5 = VAR_3 < VAR_2
                       ? VAR_2
                       : VAR_3;


  svn_temp_serializer__context_t *VAR_6 = FUNC_0(VAR_4, sizeof(*VAR_6));
  VAR_6->pool = VAR_4;


  VAR_6->buffer = FUNC_1(0, VAR_4);
  VAR_6->buffer->data = VAR_0;
  VAR_6->buffer->len = VAR_2;
  VAR_6->buffer->blocksize = VAR_5;


  VAR_6->source = FUNC_0(VAR_4, sizeof(*VAR_6->source));
  VAR_6->source->source_struct = VAR_1;
  VAR_6->source->target_offset = (char *)VAR_1 - (char *)VAR_0;
  VAR_6->source->upper = ((void*)0);


  VAR_6->recycler = ((void*)0);


  return VAR_6;
}
