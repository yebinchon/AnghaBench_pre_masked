
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (TYPE_1__**,char const*,int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_int64_t *VAR_2,
                             svn_fs_t *VAR_3,
                             apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5 = FUNC_8(VAR_4);
  int VAR_6;
  svn_error_t *VAR_7 = VAR_1;
  const char *VAR_8 = FUNC_6(VAR_3, VAR_4);


  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
      svn_stringbuf_t *VAR_9;

      FUNC_4(VAR_7);
      FUNC_7(VAR_5);


      VAR_7 = FUNC_10(&VAR_9, VAR_8, VAR_5);



      if (!VAR_7)
        {
          FUNC_11(VAR_9);
          FUNC_0(FUNC_3(VAR_2, VAR_9->data));
          break;
        }





      FUNC_1(0);

    }

  FUNC_9(VAR_5);


  return FUNC_5(VAR_7);
}
