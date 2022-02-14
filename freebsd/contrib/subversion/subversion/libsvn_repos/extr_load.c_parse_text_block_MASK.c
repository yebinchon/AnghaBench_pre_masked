
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
struct TYPE_3__ {int (* set_fulltext ) (int **,void*) ;int (* apply_textdelta ) (scalar_t__*,void**,void*) ;} ;
typedef TYPE_1__ svn_repos_parse_fns3_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (scalar_t__*,void**,void*) ;
 int FUNC_4 (int **,void*) ;
 int * FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,scalar_t__*) ;
 int FUNC_8 (int *,char*,scalar_t__*) ;
 int * FUNC_9 (scalar_t__,void*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_stream_t *VAR_3,
                 svn_filesize_t VAR_4,
                 svn_boolean_t VAR_5,
                 const svn_repos_parse_fns3_t *VAR_6,
                 void *VAR_7,
                 char *VAR_8,
                 apr_size_t VAR_9,
                 apr_pool_t *VAR_10)
{
  svn_stream_t *VAR_11 = ((void*)0);
  apr_size_t VAR_12, VAR_13, VAR_14;

  if (VAR_5)
    {
      svn_txdelta_window_handler_t VAR_15;
      void *VAR_16;

      FUNC_0(VAR_6->apply_textdelta(&VAR_15, &VAR_16, VAR_7));
      if (VAR_15)
        VAR_11 = FUNC_9(VAR_15, VAR_16, VAR_2, VAR_10);
    }
  else
    {

      FUNC_0(VAR_6->set_fulltext(&VAR_11, VAR_7));
    }



  while (VAR_4)
    {
      if (VAR_4 >= (svn_filesize_t)VAR_9)
        VAR_13 = VAR_9;
      else
        VAR_13 = (apr_size_t) VAR_4;

      VAR_12 = VAR_13;
      FUNC_0(FUNC_7(VAR_3, VAR_8, &VAR_13));
      VAR_4 -= VAR_13;
      if (VAR_13 != VAR_12)
        return FUNC_2();

      if (VAR_11)
        {

          VAR_14 = VAR_13;
          FUNC_0(FUNC_8(VAR_11, VAR_8, &VAR_14));
          if (VAR_14 != VAR_13)
            {

              return FUNC_5(VAR_0, ((void*)0),
                                      FUNC_1("Unexpected EOF writing contents"));
            }
        }
    }


  if (VAR_11)
    FUNC_0(FUNC_6(VAR_11));

  return VAR_1;
}
