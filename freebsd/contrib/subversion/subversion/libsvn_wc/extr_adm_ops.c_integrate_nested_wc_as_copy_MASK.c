
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int *,char const**,char const*,int ,int *,int *) ;
 int FUNC_5 (char const*,int ,int *,int *,int *) ;
 char* FUNC_6 (char const*,char*,int *) ;
 int FUNC_7 (int *,char const*,int *) ;
 int FUNC_8 (char const**,int *,int ,int *,int *) ;
 int FUNC_9 (int *,char const*,int ,int ,int *) ;
 int FUNC_10 (int *,int *,char const*,int ,int *) ;
 int FUNC_11 (TYPE_1__*,char const*,char const*,int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_wc_context_t *VAR_5,
                            const char *VAR_6,
                            apr_pool_t *VAR_7)
{
  svn_wc__db_t *VAR_8 = VAR_5->db;
  const char *VAR_9;


  FUNC_0(FUNC_7(VAR_8, VAR_6, VAR_7));


  {
    const char *VAR_10;
    const char *VAR_11;
    const char *VAR_12;

    FUNC_0(FUNC_8(&VAR_10, VAR_8,
                                           FUNC_1(VAR_6,
                                                              VAR_7),
                                           VAR_7, VAR_7));
    FUNC_0(FUNC_4(((void*)0), &VAR_9, VAR_10,
                                     VAR_4,
                                     VAR_7, VAR_7));
    FUNC_0(FUNC_2(VAR_9, VAR_0, VAR_7));

    VAR_12 = FUNC_6(VAR_6, "", VAR_7);
    VAR_11 = FUNC_6(VAR_9, "", VAR_7);
    FUNC_0(FUNC_3(VAR_12, VAR_11, VAR_7));
  }


  FUNC_0(FUNC_11(VAR_5, VAR_9, VAR_6,
                       VAR_3 ,
                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_7));


  FUNC_0(FUNC_7(VAR_8, VAR_9, VAR_7));
  FUNC_0(FUNC_5(VAR_9, VAR_1, ((void*)0), ((void*)0),
                             VAR_7));




  {
    svn_boolean_t VAR_13;

    FUNC_0(FUNC_10(&VAR_13, VAR_8, VAR_6,
                                        VAR_1, VAR_7));
    if (!VAR_13)
      FUNC_0(FUNC_9(VAR_8, VAR_6, 0, VAR_1,
                                       VAR_7));
  }

  return VAR_2;
}
