
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t buffer_used; int * buffer; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
typedef int apr_uint64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(svn_packed__int_stream_t *VAR_1,
                     apr_uint64_t VAR_2)
{
  VAR_1->buffer[VAR_1->buffer_used] = VAR_2;
  if (++VAR_1->buffer_used == VAR_0)
    FUNC_0(VAR_1);
}
