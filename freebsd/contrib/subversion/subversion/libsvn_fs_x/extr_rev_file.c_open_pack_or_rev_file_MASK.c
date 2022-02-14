
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_14__ {int start_revision; } ;
struct TYPE_15__ {TYPE_1__ file_info; int stream; int * file; int * fs; } ;
typedef TYPE_2__ svn_fs_x__revision_file_t ;
typedef int svn_fs_t ;
struct TYPE_16__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (char const*,int *,int *) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,int *,int ,int ) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ) ;
 char* FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int *) ;
 TYPE_3__* FUNC_11 (int **,char const*,int,int ,int *) ;
 int FUNC_12 (int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_fs_x__revision_file_t *VAR_8,
                      svn_boolean_t VAR_9,
                      apr_pool_t *VAR_10)
{
  svn_error_t *VAR_11;
  svn_boolean_t VAR_12 = VAR_4;
  svn_fs_t *VAR_13 = VAR_8->fs;
  svn_revnum_t VAR_14 = VAR_8->file_info.start_revision;
  apr_pool_t *VAR_15 = FUNC_4(VAR_8);

  do
    {
      const char *VAR_16 = FUNC_9(VAR_13, VAR_14, VAR_10);
      apr_file_t *VAR_17;
      apr_int32_t VAR_18 = VAR_9
                        ? VAR_2 | VAR_3 | VAR_0
                        : VAR_2 | VAR_0;


      VAR_11 = VAR_9 ? FUNC_3(VAR_16, VAR_15, VAR_10)
                     : VAR_6;


      if (!VAR_11)
        VAR_11 = FUNC_11(&VAR_17, VAR_16, VAR_18, VAR_1,
                               VAR_15);

      if (!VAR_11)
        {
          VAR_8->file = VAR_17;
          VAR_8->stream = FUNC_12(VAR_17, VAR_7,
                                                  VAR_15);

          return VAR_6;
        }

      if (VAR_11 && FUNC_0(VAR_11->apr_err))
        {


          FUNC_5(VAR_11);


          if (VAR_12)
            return FUNC_6(VAR_5, ((void*)0),
                                     FUNC_2("No such revision %ld"), VAR_14);


          FUNC_1(FUNC_10(VAR_13, VAR_10));
          VAR_8->file_info.start_revision = FUNC_8(VAR_13, VAR_14);

          VAR_12 = VAR_7;
        }
      else
        {
          VAR_12 = VAR_4;
        }
    }
  while (VAR_12);

  return FUNC_7(VAR_11);
}
