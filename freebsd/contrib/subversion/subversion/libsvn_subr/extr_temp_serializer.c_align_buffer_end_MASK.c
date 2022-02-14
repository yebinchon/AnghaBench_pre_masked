
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* buffer; } ;
typedef TYPE_1__ svn_temp_serializer__context_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_5__ {scalar_t__ len; scalar_t__ blocksize; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(svn_temp_serializer__context_t *VAR_0)
{
  apr_size_t VAR_1 = VAR_0->buffer->len;
  apr_size_t VAR_2 = FUNC_0(VAR_1);

  if (VAR_2 + 1 > VAR_0->buffer->blocksize)
    FUNC_1(VAR_0->buffer, VAR_2);

   VAR_0->buffer->len = VAR_2;
}
