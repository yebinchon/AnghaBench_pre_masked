
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_mutex__t ;
struct TYPE_10__ {int pool; int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int * FUNC_7 (int *,TYPE_1__*,int *) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (char const*,int ,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int * FUNC_13 (TYPE_1__*,char const*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_fs_t *VAR_1,
                    const char *VAR_2,
                    svn_mutex__t *VAR_3,
                    apr_pool_t *VAR_4,
                    apr_pool_t *VAR_5)
{
  svn_error_t * VAR_6;
  svn_revnum_t VAR_7;
  apr_pool_t * VAR_8 = FUNC_10(VAR_4);
  VAR_1->path = FUNC_1(VAR_1->pool, VAR_2);

  FUNC_0(FUNC_2(VAR_1));


  FUNC_0(FUNC_5(VAR_1, VAR_8));


  VAR_6 = FUNC_7(&VAR_7, VAR_1, VAR_8);
  if (VAR_6)
    {
      const char *VAR_9;
      FUNC_3(VAR_6);
      VAR_9 = FUNC_4(VAR_1, VAR_8);



      FUNC_0(FUNC_9(VAR_9, VAR_0, VAR_8));
      FUNC_0(FUNC_8(VAR_9, VAR_8));
      FUNC_0(FUNC_6(VAR_1, 0, VAR_8));
    }

  FUNC_12(VAR_1);
  FUNC_11(VAR_8);


  return FUNC_13(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
