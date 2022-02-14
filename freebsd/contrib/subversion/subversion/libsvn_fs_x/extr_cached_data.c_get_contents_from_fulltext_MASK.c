
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_5__ {scalar_t__ fulltext_delivered; int scratch_pool; int fulltext_cache_key; int fulltext_cache; } ;
typedef TYPE_1__ rep_read_baton_t ;
struct TYPE_6__ {char* buffer; scalar_t__ read; scalar_t__ len; scalar_t__ start; } ;
typedef TYPE_2__ fulltext_baton_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void**,scalar_t__*,int ,int *,int ,TYPE_2__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_2,
                           rep_read_baton_t *VAR_3,
                           char *VAR_4,
                           apr_size_t *VAR_5)
{
  void *VAR_6;
  fulltext_baton_t VAR_7;

  FUNC_1((apr_size_t)VAR_3->fulltext_delivered
                 == VAR_3->fulltext_delivered);
  VAR_7.buffer = VAR_4;
  VAR_7.start = (apr_size_t)VAR_3->fulltext_delivered;
  VAR_7.len = *VAR_5;
  VAR_7.read = 0;

  FUNC_0(FUNC_2(&VAR_6, VAR_2, VAR_3->fulltext_cache,
                                 &VAR_3->fulltext_cache_key,
                                 VAR_1, &VAR_7,
                                 VAR_3->scratch_pool));

  if (*VAR_2)
    {
      VAR_3->fulltext_delivered += VAR_7.read;
      *VAR_5 = VAR_7.read;
    }

  return VAR_0;
}
