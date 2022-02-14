
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_fs_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int DBT ;
typedef int DBC ;


 int * FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (scalar_t__*,int *,int *) ;
 int FUNC_4 (scalar_t__*,int **,int *,int *,int *,int *) ;
 int FUNC_5 (int *,char const*) ;

svn_error_t *
FUNC_6(svn_filesize_t *VAR_2,
                        svn_fs_t *VAR_3,
                        const char *VAR_4,
                        trail_t *VAR_5,
                        apr_pool_t *VAR_6)
{
  int VAR_7;
  DBT VAR_8;
  DBC *VAR_9;
  apr_size_t VAR_10;
  svn_filesize_t VAR_11;

  FUNC_5(&VAR_8, VAR_4);

  FUNC_2(FUNC_4(&VAR_10, &VAR_9, &VAR_8, VAR_3, VAR_5, VAR_6));

  VAR_11 = VAR_10;
  while (1)
    {


      VAR_7 = FUNC_3(&VAR_10, VAR_9, &VAR_8);


      if (VAR_7 == VAR_0)
        {
          *VAR_2 = VAR_11;
          return VAR_1;
        }
      if (VAR_7)
        return FUNC_0(VAR_3, FUNC_1("fetching string length"), VAR_7);

      VAR_11 += VAR_10;
    }


}
