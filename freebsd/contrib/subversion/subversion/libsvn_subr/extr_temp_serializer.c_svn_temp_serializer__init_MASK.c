
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* source; int buffer; int * recycler; int * pool; } ;
typedef TYPE_2__ svn_temp_serializer__context_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * upper; scalar_t__ target_offset; void const* source_struct; } ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,void const*,int ) ;
 int FUNC_2 (int ,int *) ;

svn_temp_serializer__context_t *
FUNC_3(const void *VAR_0,
                          apr_size_t VAR_1,
                          apr_size_t VAR_2,
                          apr_pool_t *VAR_3)
{

  apr_size_t VAR_4 = VAR_2 < VAR_1
                       ? VAR_1
                       : VAR_2;


  svn_temp_serializer__context_t *VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5));
  VAR_5->pool = VAR_3;
  VAR_5->buffer = FUNC_2(VAR_4, VAR_3);
  VAR_5->recycler = ((void*)0);


  if (VAR_0)
    {
      VAR_5->source = FUNC_0(VAR_3, sizeof(*VAR_5->source));
      VAR_5->source->source_struct = VAR_0;
      VAR_5->source->target_offset = 0;
      VAR_5->source->upper = ((void*)0);


      FUNC_1(VAR_5->buffer, VAR_0, VAR_1);
    }
    else
    {


      VAR_5->source = ((void*)0);
    }


  return VAR_5;
}
