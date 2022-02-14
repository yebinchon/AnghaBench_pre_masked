
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_op_t ;
typedef int svn_temp_serializer__context_t ;
typedef int apr_size_t ;


 int FUNC_0 (int *,void const* const*,int) ;

__attribute__((used)) static void
FUNC_1(svn_temp_serializer__context_t *VAR_0,
                      const svn_txdelta_op_t * const * VAR_1,
                      apr_size_t VAR_2)
{
  if (*VAR_1 == ((void*)0))
    return;


  FUNC_0(VAR_0,
                                (const void * const *)VAR_1,
                                VAR_2 * sizeof(**VAR_1));
}
