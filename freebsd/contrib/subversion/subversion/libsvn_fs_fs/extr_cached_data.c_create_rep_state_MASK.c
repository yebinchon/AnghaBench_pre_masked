
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__rep_header_t ;
struct TYPE_14__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int shared_file_t ;
typedef int representation_t ;
typedef int rep_state_t ;
struct TYPE_15__ {int format; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_16__ {char* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int **,int **,int **,int *,TYPE_1__*,int *,int *) ;
 TYPE_2__* FUNC_1 (scalar_t__,TYPE_2__*,char*,char const*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 TYPE_4__* FUNC_3 (int *,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(rep_state_t **VAR_2,
                 svn_fs_fs__rep_header_t **VAR_3,
                 shared_file_t **VAR_4,
                 representation_t *VAR_5,
                 svn_fs_t *VAR_6,
                 apr_pool_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9 = FUNC_0(VAR_2, VAR_3,
                                           VAR_4, VAR_5, VAR_6,
                                           VAR_7, VAR_8);
  if (VAR_9 && VAR_9->apr_err == VAR_0)
    {
      fs_fs_data_t *VAR_10 = VAR_6->fsap_data;
      const char *VAR_11;
      VAR_11 = VAR_5
              ? FUNC_3
                  (VAR_5, VAR_10->format, VAR_1, VAR_8, VAR_8)->data
              : "(null)";

      return FUNC_1(VAR_0, VAR_9,
                               "Corrupt representation '%s'",
                               VAR_11);
    }

  return FUNC_2(VAR_9);
}
