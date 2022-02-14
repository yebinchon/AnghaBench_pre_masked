
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_8__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {int max_files_per_dir; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (TYPE_2__*,int,int *) ;
 int * FUNC_4 (TYPE_1__**,int*,char const*,int,int *) ;
 int * FUNC_5 (char*,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_boolean_t
FUNC_6(svn_boolean_t *VAR_4,
                                    svn_fs_t *VAR_5,
                                    svn_revnum_t VAR_6,
                                    apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_5->fsap_data;
  svn_stringbuf_t *VAR_9 = ((void*)0);


  const char *VAR_10
    = FUNC_3(VAR_5, VAR_6, VAR_7);
  const char *VAR_11 = FUNC_1(VAR_10, VAR_1, VAR_7);

  svn_error_t *VAR_12 = FUNC_4(&VAR_9,
                                                        VAR_4,
                                                        VAR_11,
                                                        VAR_0,
                                                        VAR_7);



  if (VAR_12)
    {
      FUNC_2(VAR_12);
      return VAR_0;
    }

  if (*VAR_4)
    return VAR_0;



  VAR_6 = VAR_6 < VAR_8->max_files_per_dir
           ? VAR_6 - 1
           : VAR_6 % VAR_8->max_files_per_dir;
  while (VAR_9->data)
    {
      char *VAR_13 = FUNC_0(VAR_9->data, '\n');
      if (VAR_13)
        {
          *VAR_13 = 0;
          ++VAR_13;
        }

      if (VAR_6-- == 0)
        {

          svn_node_kind_t VAR_14;
          VAR_12 = FUNC_5(FUNC_1(VAR_10, VAR_9->data,
                                                  VAR_7),
                                  &VAR_14, VAR_7);
          if (VAR_12)
            {
              FUNC_2(VAR_12);
              return VAR_0;
            }

          *VAR_4 = VAR_14 == VAR_3;
          return VAR_14 == VAR_2;
        }

      VAR_9->data = VAR_13;
    }

  return VAR_0;
}
