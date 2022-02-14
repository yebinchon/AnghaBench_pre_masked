
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_9__ {int data; } ;
typedef TYPE_2__ svn_membuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int endiancheck ;
typedef int apr_uint16_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int const FUNC_3 (int const) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*,int ,int const) ;
 int FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (TYPE_2__*,int ,int,int*) ;

svn_error_t *
FUNC_8(const svn_string_t **VAR_2,
                       const apr_uint16_t *VAR_3,
                       apr_size_t VAR_4,
                       svn_boolean_t VAR_5,
                       apr_pool_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  static const apr_uint16_t VAR_8 = 0xa55a;
  const svn_boolean_t VAR_9 =
    (((const char*)&VAR_8)[sizeof(VAR_8) - 1] == '\x5a');
  const svn_boolean_t VAR_10 = (!VAR_5 != !VAR_9);

  apr_uint16_t VAR_11;
  apr_size_t VAR_12;
  apr_size_t VAR_13;
  svn_membuf_t VAR_14;
  svn_membuf_t VAR_15;
  svn_string_t *VAR_16;

  if (VAR_4 == VAR_1)
    {
      const apr_uint16_t *VAR_17 = VAR_3;
      while (*VAR_17++)
        ;
      VAR_4 = (VAR_17 - VAR_3);
    }

  FUNC_6(&VAR_14, VAR_4 * sizeof(apr_int32_t), VAR_7);

  for (VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
       VAR_13 < VAR_4; ++VAR_13)
    {
      const apr_uint16_t VAR_18 =
        (VAR_10 ? FUNC_3(VAR_3[VAR_13]) : VAR_3[VAR_13]);

      if (VAR_11)
        {
          if (FUNC_1(VAR_18))
            {

              FUNC_5(&VAR_14, VAR_12++,
                                 (0x010000
                                  + (((VAR_11 & 0x03ff) << 10)
                                     | (VAR_18 & 0x03ff))));
              VAR_11 = 0;
              continue;
            }
          else
            {


              FUNC_5(&VAR_14, VAR_12++, VAR_11);
              VAR_11 = 0;
            }
        }

      if ((VAR_13 + 1) < VAR_4 && FUNC_0(VAR_18))
        {


          VAR_11 = VAR_18;
          continue;
        }
      else
        FUNC_5(&VAR_14, VAR_12++, VAR_18);
    }




  FUNC_6(&VAR_15, VAR_12 * 2, VAR_6);
  FUNC_2(FUNC_7(
              &VAR_15, VAR_14.data, VAR_12, &VAR_12));

  VAR_16 = FUNC_4(VAR_6, sizeof(*VAR_16));
  VAR_16->data = VAR_15.data;
  VAR_16->len = VAR_12;
  *VAR_2 = VAR_16;
  return VAR_0;
}
