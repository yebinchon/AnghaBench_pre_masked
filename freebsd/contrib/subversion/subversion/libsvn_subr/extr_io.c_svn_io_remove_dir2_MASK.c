
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
struct TYPE_18__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef TYPE_2__* (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 char* FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (int ,TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (char const*,int *) ;
 TYPE_2__* FUNC_14 (int **,char const*,int ,int *,int *) ;
 TYPE_2__* FUNC_15 (char const*,scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

svn_error_t *
FUNC_18(const char *VAR_4, svn_boolean_t VAR_5,
                   svn_cancel_func_t VAR_6, void *VAR_7,
                   apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9;
  apr_pool_t *VAR_10;
  apr_hash_t *VAR_11;
  apr_hash_index_t *VAR_12;




  if (VAR_6)
    FUNC_1(VAR_6(VAR_7));

  VAR_10 = FUNC_16(VAR_8);

  VAR_9 = FUNC_14(&VAR_11, VAR_4, VAR_2, VAR_10, VAR_10);
  if (VAR_9)
    {

      if (VAR_5 && (FUNC_0(VAR_9->apr_err)
                            || FUNC_2(VAR_9->apr_err)))
        {
          FUNC_10(VAR_9);
          return VAR_1;
        }
      return FUNC_12(VAR_9);
    }

  for (VAR_12 = FUNC_4(VAR_10, VAR_11); VAR_12; VAR_12 = FUNC_5(VAR_12))
    {
      const char *VAR_13 = FUNC_6(VAR_12);
      const svn_io_dirent2_t *VAR_14 = FUNC_7(VAR_12);
      const char *VAR_15;

      VAR_15 = FUNC_8(VAR_4, VAR_13, VAR_10);
      if (VAR_14->kind == VAR_3)
        {

          FUNC_1(FUNC_18(VAR_15, VAR_0, VAR_6,
                                     VAR_7, VAR_10));
        }
      else
        {
          if (VAR_6)
            FUNC_1(VAR_6(VAR_7));

          VAR_9 = FUNC_15(VAR_15, VAR_0, VAR_10);
          if (VAR_9)
            return FUNC_11
              (VAR_9->apr_err, VAR_9, FUNC_3("Can't remove '%s'"),
               FUNC_9(VAR_15, VAR_10));
        }
    }

  FUNC_17(VAR_10);

  return FUNC_13(VAR_4, VAR_8);
}
