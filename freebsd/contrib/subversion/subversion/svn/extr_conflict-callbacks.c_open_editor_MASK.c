
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int buf ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (char const*,char const*,int *,int *) ;
 int FUNC_3 (int ,int *,char*,...) ;
 char* FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_boolean_t *VAR_5,
            const char *VAR_6,
            const char *VAR_7,
            apr_hash_t *VAR_8,
            apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;

  if (VAR_6)
    {
      VAR_10 = FUNC_2(VAR_6, VAR_7,
                                              VAR_8, VAR_9);
      if (VAR_10 && (VAR_10->apr_err == VAR_0 ||
                  VAR_10->apr_err == VAR_1))
        {
          char VAR_11[1024];
          const char *VAR_12;

          VAR_12 = FUNC_4(VAR_10, VAR_11, sizeof(VAR_11));
          FUNC_0(FUNC_3(VAR_4, VAR_9, "%s\n", VAR_12));
          FUNC_5(VAR_10);
        }
      else if (VAR_10)
        return FUNC_6(VAR_10);
      else
        *VAR_5 = VAR_3;
    }
  else
    FUNC_0(FUNC_3(VAR_4, VAR_9,
                                FUNC_1("Invalid option; there's no "
                                  "merged version to edit.\n\n")));

  return VAR_2;
}
