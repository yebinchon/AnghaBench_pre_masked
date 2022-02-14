
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer_used; int * buffer; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
typedef int apr_uint64_t ;


 int FUNC_0 (TYPE_1__*) ;

apr_uint64_t
FUNC_1(svn_packed__int_stream_t *VAR_0)
{
  if (VAR_0->buffer_used == 0)
    FUNC_0(VAR_0);

  return VAR_0->buffer_used ? VAR_0->buffer[--VAR_0->buffer_used] : 0;
}
