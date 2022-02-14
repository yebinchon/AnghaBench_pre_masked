
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* buffer; TYPE_2__* source; int pool; TYPE_2__* recycler; } ;
typedef TYPE_1__ svn_temp_serializer__context_t ;
struct TYPE_9__ {struct TYPE_9__* upper; int target_offset; void const* source_struct; } ;
typedef TYPE_2__ source_stack_t ;
typedef int apr_size_t ;
struct TYPE_10__ {int len; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,void const* const*) ;
 int FUNC_3 (TYPE_4__*,void const*,int ) ;

void
FUNC_4(svn_temp_serializer__context_t *VAR_0,
                          const void * const * VAR_1,
                          apr_size_t VAR_2)
{
  const void *VAR_3 = *VAR_1;
  source_stack_t *VAR_4;


  if (VAR_0->recycler)
    {
      VAR_4 = VAR_0->recycler;
      VAR_0->recycler = VAR_4->upper;
    }
  else
    VAR_4 = FUNC_1(VAR_0->pool, sizeof(*VAR_4));


  if (VAR_3)
    FUNC_0(VAR_0);



  FUNC_2(VAR_0, VAR_1);


  VAR_4->source_struct = VAR_3;
  VAR_4->target_offset = VAR_0->buffer->len;


  VAR_4->upper = VAR_0->source;
  VAR_0->source = VAR_4;



  if (*VAR_1)
    FUNC_3(VAR_0->buffer, VAR_3, VAR_2);
}
