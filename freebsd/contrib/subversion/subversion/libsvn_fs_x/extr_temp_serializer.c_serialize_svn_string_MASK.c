
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_3__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_string_t ;


 int FUNC_0 (int *,void const* const*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void const* const*,int) ;

__attribute__((used)) static void
FUNC_3(svn_temp_serializer__context_t *VAR_0,
                     const svn_string_t * const *VAR_1)
{
  const svn_string_t *VAR_2 = *VAR_1;


  if (VAR_2 == ((void*)0))
    return;

  FUNC_2(VAR_0,
                            (const void * const *)VAR_1,
                            sizeof(*VAR_2));



  FUNC_0(VAR_0,
                                (const void * const *)&VAR_2->data,
                                VAR_2->len + 1);


  FUNC_1(VAR_0);
}
