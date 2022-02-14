
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
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,void const* const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_2,
                 const void *VAR_3,
                 apr_size_t VAR_4,
                 void *VAR_5,
                 apr_pool_t *VAR_6)
{
  apr_array_header_t *VAR_7 = *(apr_array_header_t **)VAR_2;
  const apr_array_header_t *VAR_8 = VAR_3;
  p2l_entries_baton_t *VAR_9 = VAR_5;


  apr_array_header_t VAR_10 = *VAR_8;
  VAR_10.elts = (void *)FUNC_1(VAR_8,
                                    (const void * const *)&VAR_8->elts);


  FUNC_0(VAR_7, &VAR_10, VAR_9->start, VAR_9->end, VAR_1);

  return VAR_0;
}
