
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int verify_format; scalar_t__ timeout; void* exclusive; int * state_pool; int dir_data; void* enforce_empty_wq; int * config; } ;
typedef TYPE_1__ svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef void* svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef scalar_t__ apr_int32_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,void**,int ,int ,void*) ;
 int * FUNC_3 (int *,scalar_t__*,int ,int ,int ) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_wc__db_t **VAR_6,
                svn_config_t *VAR_7,
                svn_boolean_t VAR_8,
                svn_boolean_t VAR_9,
                apr_pool_t *VAR_10,
                apr_pool_t *VAR_11)
{
  *VAR_6 = FUNC_1(VAR_10, sizeof(**VAR_6));
  (*VAR_6)->config = VAR_7;
  (*VAR_6)->verify_format = !VAR_8;
  (*VAR_6)->enforce_empty_wq = VAR_9;
  (*VAR_6)->dir_data = FUNC_0(VAR_10);

  (*VAR_6)->state_pool = VAR_10;


  if (VAR_7)
    {
      svn_error_t *VAR_12;
      svn_boolean_t VAR_13 = VAR_1;
      apr_int64_t VAR_14;

      VAR_12 = FUNC_2(VAR_7, &VAR_13,
                                VAR_4,
                                VAR_3,
                                VAR_1);
      if (VAR_12)
        {
          FUNC_4(VAR_12);
        }
      else
        (*VAR_6)->exclusive = VAR_13;

      VAR_12 = FUNC_3(VAR_7, &VAR_14,
                                 VAR_4,
                                 VAR_2,
                                 0);
      if (VAR_12 || VAR_14 < 0 || VAR_14 > VAR_0)
        FUNC_4(VAR_12);
      else
        (*VAR_6)->timeout = (apr_int32_t)VAR_14;
    }

  return VAR_5;
}
