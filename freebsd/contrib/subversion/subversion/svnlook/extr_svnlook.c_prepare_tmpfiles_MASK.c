
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,char const*,int *) ;
 int FUNC_3 (TYPE_1__**,int *,char const*,int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int **,char const**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char **VAR_5,
                 const char **VAR_6,
                 svn_boolean_t *VAR_7,
                 svn_fs_root_t *VAR_8,
                 const char *VAR_9,
                 svn_fs_root_t *VAR_10,
                 const char *VAR_11,
                 apr_pool_t *VAR_12,
                 apr_pool_t *VAR_13)
{
  svn_string_t *VAR_14;
  svn_stream_t *VAR_15;


  *VAR_5 = ((void*)0);
  *VAR_6 = ((void*)0);
  *VAR_7 = VAR_0;

  FUNC_1(VAR_9 && VAR_11);



  if (VAR_8)
    {
      FUNC_0(FUNC_3(&VAR_14, VAR_8, VAR_9,
                               VAR_2, VAR_13));
      if (VAR_14 && FUNC_4(VAR_14->data))
        {
          *VAR_7 = VAR_3;
          return VAR_1;
        }
    }
  if (VAR_10)
    {
      FUNC_0(FUNC_3(&VAR_14, VAR_10, VAR_11,
                               VAR_2, VAR_13));
      if (VAR_14 && FUNC_4(VAR_14->data))
        {
          *VAR_7 = VAR_3;
          return VAR_1;
        }
    }



  FUNC_0(FUNC_5(&VAR_15, VAR_5, ((void*)0),
                                 VAR_4,
                                 VAR_12, VAR_13));
  FUNC_0(FUNC_2(VAR_15, VAR_8, VAR_9, VAR_13));

  FUNC_0(FUNC_5(&VAR_15, VAR_6, ((void*)0),
                                 VAR_4,
                                 VAR_12, VAR_13));
  FUNC_0(FUNC_2(VAR_15, VAR_10, VAR_11, VAR_13));

  return VAR_1;
}
