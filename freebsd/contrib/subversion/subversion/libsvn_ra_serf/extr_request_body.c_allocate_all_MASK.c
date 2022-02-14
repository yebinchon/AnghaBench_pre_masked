
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * collect_bucket; scalar_t__ total_bytes; } ;
typedef TYPE_1__ svn_ra_serf__request_body_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,char const**,scalar_t__*) ;

__attribute__((used)) static const char *
FUNC_5(svn_ra_serf__request_body_t *VAR_1,
             apr_pool_t *VAR_2)
{
  char *VAR_3 = FUNC_1(VAR_2, VAR_1->total_bytes);
  const char *VAR_4;
  apr_size_t VAR_5;
  apr_status_t VAR_6;
  apr_size_t VAR_7 = VAR_1->total_bytes;
  char *VAR_8 = VAR_3;

  while (!(VAR_6 = FUNC_4(VAR_1->collect_bucket, VAR_7, &VAR_4, &VAR_5)))
    {
      FUNC_2(VAR_8, VAR_4, VAR_5);
      VAR_7 -= VAR_5;
      VAR_8 += VAR_5;

      if (! VAR_7)
        break;
    }

  if (!FUNC_0(VAR_6))
    {
      FUNC_2(VAR_8, VAR_4, VAR_5);
    }

  FUNC_3(VAR_1->collect_bucket);
  VAR_1->collect_bucket = ((void*)0);

  return (VAR_6 != VAR_0) ? ((void*)0) : VAR_3;
}
