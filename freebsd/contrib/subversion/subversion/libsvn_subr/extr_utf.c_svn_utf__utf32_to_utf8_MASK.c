
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_9__ {int* data; } ;
typedef TYPE_2__ svn_membuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int endiancheck ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,int,int const) ;
 int FUNC_4 (TYPE_2__*,int,int *) ;
 int FUNC_5 (TYPE_2__*,int const*,int,int*) ;

svn_error_t *
FUNC_6(const svn_string_t **VAR_2,
                       const apr_int32_t *VAR_3,
                       apr_size_t VAR_4,
                       svn_boolean_t VAR_5,
                       apr_pool_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  static const apr_int32_t VAR_8 = 0xa5cbbc5a;
  const svn_boolean_t VAR_9 =
    (((const char*)&VAR_8)[sizeof(VAR_8) - 1] == '\x5a');
  const svn_boolean_t VAR_10 = (!VAR_5 != !VAR_9);

  apr_size_t VAR_11;
  svn_membuf_t VAR_12;
  svn_string_t *VAR_13;

  if (VAR_4 == VAR_1)
    {
      const apr_int32_t *VAR_14 = VAR_3;
      while (*VAR_14++)
        ;
      VAR_4 = (VAR_14 - VAR_3);
    }

  if (VAR_10)
    {
      apr_size_t VAR_15;
      svn_membuf_t VAR_16;

      FUNC_4(&VAR_16, VAR_4 * sizeof(apr_int32_t),
                         VAR_7);

      for (VAR_15 = 0; VAR_15 < VAR_4; ++VAR_15)
        {
          const apr_int32_t VAR_17 = FUNC_1(VAR_3[VAR_15]);
          FUNC_3(&VAR_16, VAR_15, VAR_17);
        }
      VAR_3 = VAR_16.data;
    }




  FUNC_4(&VAR_12, VAR_4 * 2, VAR_6);
  FUNC_0(FUNC_5(
              &VAR_12, VAR_3, VAR_4, &VAR_11));

  VAR_13 = FUNC_2(VAR_6, sizeof(*VAR_13));
  VAR_13->data = VAR_12.data;
  VAR_13->len = VAR_11;
  *VAR_2 = VAR_13;
  return VAR_0;
}
