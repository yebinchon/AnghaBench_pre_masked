
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_mutex__t ;
struct TYPE_16__ {scalar_t__ fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_17__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_18__ {int format; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,scalar_t__,int,char const*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (char const*,int ,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (int*,int ,int *) ;
 TYPE_2__* FUNC_11 (int ,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_fs_t *VAR_4,
          const char *VAR_5,
          svn_mutex__t *VAR_6,
          apr_pool_t *VAR_7,
          apr_pool_t *VAR_8)
{
  int VAR_9;
  svn_error_t *VAR_10;
  svn_boolean_t VAR_11 = VAR_0;


  VAR_10 = FUNC_10(&VAR_9,
                                     FUNC_6(VAR_5, VAR_1,
                                                     VAR_7),
                                     VAR_7);
  if (VAR_10 && FUNC_0(VAR_10->apr_err))
    {




      FUNC_7(VAR_10);
      VAR_10 = VAR_2;
      VAR_9 = 1;
      VAR_11 = VAR_3;
    }
  else if (VAR_10)
    goto error;


  VAR_10 = FUNC_4(VAR_4, VAR_0, VAR_9, VAR_5);
  if (VAR_10) goto error;

  ((base_fs_data_t *) VAR_4->fsap_data)->format = VAR_9;
  FUNC_1(FUNC_2(VAR_9));


  if (VAR_11)
    {
      VAR_10 = FUNC_11(FUNC_6(VAR_5, VAR_1,
                                                        VAR_7),
                                          VAR_9, VAR_7);
      if (VAR_10) goto error;
    }

  FUNC_1(FUNC_5(VAR_4, VAR_7));
  return VAR_2;

 error:
  return FUNC_8(VAR_10,
                                  FUNC_9(FUNC_3(VAR_4)));
}
