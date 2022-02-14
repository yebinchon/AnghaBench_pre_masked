
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* new_data; TYPE_3__* ops; } ;
typedef TYPE_2__ svn_txdelta_window_t ;
struct TYPE_10__ {size_t const length; scalar_t__ action_code; int offset; } ;
typedef TYPE_3__ svn_txdelta_op_t ;
typedef int svn_txdelta__ops_baton_t ;
struct TYPE_11__ {size_t* offs; } ;
typedef TYPE_4__ offset_index_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {char* data; } ;


 size_t FUNC_0 (size_t,size_t const) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_4__ const*,size_t,size_t) ;
 int FUNC_3 (int *,scalar_t__,size_t,size_t const,char const*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(apr_size_t VAR_2, apr_size_t VAR_3,
                apr_size_t VAR_4,
                apr_size_t VAR_5,
                svn_txdelta__ops_baton_t *VAR_6,
                const svn_txdelta_window_t *VAR_7,
                const offset_index_t *VAR_8,
                apr_pool_t *VAR_9)
{
  apr_size_t VAR_10 = FUNC_2(VAR_8, VAR_2, VAR_5);
  for (;; ++VAR_10)
    {
      const svn_txdelta_op_t *const VAR_11 = &VAR_7->ops[VAR_10];
      const apr_size_t *const VAR_12 = &VAR_8->offs[VAR_10];
      const apr_size_t VAR_13 = (VAR_2 > VAR_12[0] ? VAR_2 - VAR_12[0] : 0);
      const apr_size_t VAR_14 = (VAR_12[0] >= VAR_3 ? 0
                                    : (VAR_12[1] > VAR_3 ? VAR_12[1] - VAR_3 : 0));






      if (VAR_12[0] >= VAR_3)
          break;


      FUNC_1(VAR_13 + VAR_14 < VAR_11->length);

      if (VAR_11->action_code != VAR_1)
        {


          const char *const VAR_15 = (VAR_11->action_code == VAR_0
                                        ? (VAR_7->new_data->data
                                           + VAR_11->offset + VAR_13)
                                        : ((void*)0));

          FUNC_3(VAR_6, VAR_11->action_code,
                                 VAR_11->offset + VAR_13,
                                 VAR_11->length - VAR_13 - VAR_14,
                                 VAR_15, VAR_9);
        }
      else
        {


          FUNC_1(VAR_11->offset < VAR_12[0]);

          if (VAR_11->offset + VAR_11->length - VAR_14 <= VAR_12[0])
            {


              FUNC_4(VAR_11->offset + VAR_13,
                              VAR_11->offset + VAR_11->length - VAR_14,
                              VAR_4,
                              VAR_10,
                              VAR_6, VAR_7, VAR_8, VAR_9);
            }
          else
            {



              const apr_size_t VAR_16 = VAR_12[0] - VAR_11->offset;
              const apr_size_t VAR_17 = VAR_13 % VAR_16;
              apr_size_t VAR_18 = VAR_13;
              apr_size_t VAR_19 = VAR_4;
              FUNC_1(VAR_16 > VAR_17);





              {
                const apr_size_t VAR_20 =
                  FUNC_0(VAR_11->length - VAR_18 - VAR_14,
                      VAR_16 - VAR_17);
                FUNC_4(VAR_11->offset + VAR_17,
                                VAR_11->offset + VAR_17 + VAR_20,
                                VAR_19,
                                VAR_10,
                                VAR_6, VAR_7, VAR_8, VAR_9);
                VAR_18 += VAR_20;
                VAR_19 += VAR_20;
              }

              FUNC_1(VAR_18 + VAR_14 <= VAR_11->length);
              if (VAR_17 > 0
                  && VAR_18 + VAR_14 < VAR_11->length)
                {

                  const apr_size_t VAR_21 =
                    FUNC_0(VAR_11->length - VAR_18 - VAR_14, VAR_17);
                  FUNC_4(VAR_11->offset,
                                  VAR_11->offset + VAR_21,
                                  VAR_19,
                                  VAR_10,
                                  VAR_6, VAR_7, VAR_8, VAR_9);
                  VAR_18 += VAR_21;
                  VAR_19 += VAR_21;
                }

              FUNC_1(VAR_18 + VAR_14 <= VAR_11->length);
              if (VAR_18 + VAR_14 < VAR_11->length)
                {

                  FUNC_3(VAR_6, VAR_1,
                                         VAR_19 - VAR_16,
                                         VAR_11->length - VAR_18 - VAR_14,
                                         ((void*)0), VAR_9);
                }
            }
        }


      VAR_4 += VAR_11->length - VAR_13 - VAR_14;
    }
}
