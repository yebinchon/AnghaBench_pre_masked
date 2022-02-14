
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct sbb_baton {char* holding; scalar_t__ hold_len; int scratch_pool; int spillbuf; } ;
struct TYPE_3__ {struct sbb_baton* data; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char const**,scalar_t__*,int ,int ) ;

__attribute__((used)) static apr_status_t
FUNC_3(serf_bucket_t *VAR_2, apr_size_t VAR_3,
               const char **VAR_4, apr_size_t *VAR_5)
{
  struct sbb_baton *VAR_6 = VAR_2->data;
  svn_error_t *VAR_7;

  if (VAR_6->holding)
    {
      *VAR_4 = VAR_6->holding;

      if (VAR_3 < VAR_6->hold_len)
        {
          *VAR_5 = VAR_3;
          VAR_6->holding += VAR_3;
          VAR_6->hold_len -= VAR_3;
          return VAR_1;
        }


      *VAR_5 = VAR_6->hold_len;
      VAR_6->holding = ((void*)0);
      return VAR_1;
    }

  VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6->spillbuf, VAR_6->scratch_pool);
  FUNC_1(VAR_6->scratch_pool);


  FUNC_0(VAR_7);



  if (VAR_3 < *VAR_5)
    {
      VAR_6->holding = *VAR_4 + VAR_3;
      VAR_6->hold_len = *VAR_5 - VAR_3;
      *VAR_5 = VAR_3;
    }

  return *VAR_4 == ((void*)0) ? VAR_0 : VAR_1;
}
