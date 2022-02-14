
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_19__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_20__ {int start_revision; int is_packed; int stream; int * file; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
struct TYPE_21__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_22__ {scalar_t__ format; } ;
typedef TYPE_4__ fs_fs_data_t ;
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
 scalar_t__ VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int *,int ,int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 char* FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 TYPE_3__* FUNC_11 (int **,char const*,int,int ,int *) ;
 int FUNC_12 (int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_fs_fs__revision_file_t *VAR_9,
                      svn_fs_t *VAR_10,
                      svn_revnum_t VAR_11,
                      svn_boolean_t VAR_12,
                      apr_pool_t *VAR_13,
                      apr_pool_t *VAR_14)
{
  fs_fs_data_t *VAR_15 = VAR_10->fsap_data;
  svn_error_t *VAR_16;
  svn_boolean_t VAR_17 = VAR_4;

  do
    {
      const char *VAR_18 = FUNC_9(VAR_10, VAR_11, VAR_14);
      apr_file_t *VAR_19;
      apr_int32_t VAR_20 = VAR_12
                        ? VAR_2 | VAR_3 | VAR_0
                        : VAR_2 | VAR_0;


      VAR_16 = VAR_12 ? FUNC_3(VAR_18, VAR_13, VAR_14)
                     : VAR_7;


      if (!VAR_16)
        VAR_16 = FUNC_11(&VAR_19, VAR_18, VAR_20, VAR_1,
                               VAR_13);

      if (!VAR_16)
        {
          VAR_9->file = VAR_19;
          VAR_9->stream = FUNC_12(VAR_19, VAR_8,
                                                  VAR_13);
          VAR_9->is_packed = FUNC_7(VAR_10, VAR_11);

          return VAR_7;
        }

      if (VAR_16 && FUNC_0(VAR_16->apr_err))
        {
          if (VAR_15->format >= VAR_6)
            {


              FUNC_4(VAR_16);


              if (VAR_17)
                return FUNC_5(VAR_5, ((void*)0),
                                         FUNC_2("No such revision %ld"), VAR_11);


              FUNC_1(FUNC_10(VAR_10, VAR_14));
              VAR_9->start_revision = FUNC_8(VAR_10, VAR_11);

              VAR_17 = VAR_8;
            }
          else
            {
              FUNC_4(VAR_16);
              return FUNC_5(VAR_5, ((void*)0),
                                       FUNC_2("No such revision %ld"), VAR_11);
            }
        }
      else
        {
          VAR_17 = VAR_4;
        }
    }
  while (VAR_17);

  return FUNC_6(VAR_16);
}
