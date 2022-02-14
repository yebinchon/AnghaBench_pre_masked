
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int offsets; } ;
typedef TYPE_1__ p2l_header_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int * VAR_0 ;
 int FUNC_0 (void*,TYPE_1__ const*,int const*) ;
 int * FUNC_1 (TYPE_1__ const*,void const* const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
                   const void *VAR_2,
                   apr_size_t VAR_3,
                   void *VAR_4,
                   apr_pool_t *VAR_5)
{

  const p2l_header_t *VAR_6 = VAR_2;
  const apr_off_t *VAR_7
    = FUNC_1(VAR_6,
                                 (const void *const *)&VAR_6->offsets);


  FUNC_0(VAR_4, VAR_6, VAR_7);
  return VAR_0;
}
