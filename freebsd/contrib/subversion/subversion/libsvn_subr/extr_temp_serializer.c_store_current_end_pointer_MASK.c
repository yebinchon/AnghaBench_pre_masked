
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* source; TYPE_1__* buffer; } ;
typedef TYPE_3__ svn_temp_serializer__context_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_6__ {scalar_t__ target_offset; scalar_t__ source_struct; } ;
struct TYPE_5__ {scalar_t__ len; scalar_t__ data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(svn_temp_serializer__context_t *VAR_0,
                          const void * const * VAR_1)
{
  apr_size_t VAR_2;
  apr_size_t *VAR_3;



  if (VAR_0->source == ((void*)0))
    return;


  VAR_2 = (const char *)VAR_1
             - (const char *)VAR_0->source->source_struct
             + VAR_0->source->target_offset;



  FUNC_0(VAR_0->buffer->len > VAR_2);


  VAR_3 = (apr_size_t*)(VAR_0->buffer->data + VAR_2);



  *VAR_3 = *VAR_1 == ((void*)0)
              ? 0
              : VAR_0->buffer->len - VAR_0->source->target_offset;
}
