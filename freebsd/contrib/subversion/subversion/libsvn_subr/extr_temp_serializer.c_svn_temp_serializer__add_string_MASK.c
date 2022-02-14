
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffer; } ;
typedef TYPE_1__ svn_temp_serializer__context_t ;


 int FUNC_0 (TYPE_1__*,void const* const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,scalar_t__) ;

void
FUNC_3(svn_temp_serializer__context_t *VAR_0,
                                const char * const * VAR_1)
{
  const char *VAR_2 = *VAR_1;



  FUNC_0(VAR_0, (const void *const *)VAR_1);


  if (VAR_2)
    FUNC_2(VAR_0->buffer, VAR_2, FUNC_1(VAR_2) + 1);
}
