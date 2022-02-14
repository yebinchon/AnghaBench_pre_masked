
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int end; int start; } ;
typedef TYPE_1__ p2l_entries_baton_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {void* elts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,void const* const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
                 const void *VAR_2,
                 apr_size_t VAR_3,
                 void *VAR_4,
                 apr_pool_t *VAR_5)
{
  apr_array_header_t *VAR_6 = *(apr_array_header_t **)VAR_1;
  const apr_array_header_t *VAR_7 = VAR_2;
  p2l_entries_baton_t *VAR_8 = VAR_4;


  apr_array_header_t VAR_9 = *VAR_7;
  VAR_9.elts = (void *)FUNC_1(VAR_7,
                                    (const void * const *)&VAR_7->elts);


  FUNC_0(VAR_6, &VAR_9, VAR_8->start, VAR_8->end);

  return VAR_0;
}
