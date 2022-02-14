
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_bytes; scalar_t__ in_memory_size; scalar_t__ alloc; scalar_t__ collect_bucket; scalar_t__ scratch_pool; scalar_t__ file; int result_pool; } ;
typedef TYPE_1__ svn_ra_serf__request_body_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int *) ;
 int FUNC_5 (char const*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__,char const*,scalar_t__,int *,scalar_t__) ;
 int FUNC_7 (scalar_t__*,int *,int *,int ,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_3,
                          const char *VAR_4,
                          apr_size_t *VAR_5)
{
  svn_ra_serf__request_body_t *VAR_6 = VAR_3;

  if (!VAR_6->scratch_pool)
    VAR_6->scratch_pool = FUNC_9(VAR_6->result_pool);

  if (VAR_6->file)
    {
      FUNC_0(FUNC_6(VAR_6->file, VAR_4, *VAR_5, ((void*)0),
                                     VAR_6->scratch_pool));
      FUNC_8(VAR_6->scratch_pool);

      VAR_6->total_bytes += *VAR_5;
    }
  else if (*VAR_5 + VAR_6->total_bytes > VAR_6->in_memory_size)
    {
      FUNC_0(FUNC_7(&VAR_6->file, ((void*)0), ((void*)0),
                                       VAR_2,
                                       VAR_6->result_pool, VAR_6->scratch_pool));

      if (VAR_6->total_bytes)
        {
          const char *VAR_7 = FUNC_1(VAR_6, VAR_6->scratch_pool);

          FUNC_0(FUNC_6(VAR_6->file, VAR_7, VAR_6->total_bytes,
                                         ((void*)0), VAR_6->scratch_pool));
        }

      FUNC_0(FUNC_6(VAR_6->file, VAR_4, *VAR_5, ((void*)0),
                                     VAR_6->scratch_pool));
      VAR_6->total_bytes += *VAR_5;
    }
  else
    {
      if (!VAR_6->alloc)
        VAR_6->alloc = FUNC_4(VAR_6->scratch_pool,
                                                VAR_1, ((void*)0));

      if (!VAR_6->collect_bucket)
        VAR_6->collect_bucket = FUNC_3(VAR_6->alloc);

      FUNC_2(VAR_6->collect_bucket,
                                   FUNC_5(VAR_4, *VAR_5,
                                                                  VAR_6->alloc));

      VAR_6->total_bytes += *VAR_5;
    }

  return VAR_0;
}
