
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ scratch_pool; int result_pool; int all_data; scalar_t__ collect_bucket; scalar_t__ file; } ;
typedef TYPE_1__ svn_ra_serf__request_body_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1)
{
  svn_ra_serf__request_body_t *VAR_2 = VAR_1;

  if (VAR_2->file)
    {
      FUNC_0(FUNC_3(VAR_2->file, VAR_2->scratch_pool));
      FUNC_2(VAR_2->file, ((void*)0), 0);
    }
  else if (VAR_2->collect_bucket)
    VAR_2->all_data = FUNC_1(VAR_2, VAR_2->result_pool);

  if (VAR_2->scratch_pool)
    FUNC_4(VAR_2->scratch_pool);

  return VAR_0;
}
