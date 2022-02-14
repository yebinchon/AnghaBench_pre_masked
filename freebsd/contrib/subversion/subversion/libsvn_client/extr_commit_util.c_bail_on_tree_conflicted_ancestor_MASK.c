
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* svn_wc_notify_func2_t ) (void*,int ,int *) ;
typedef int svn_wc_context_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int FUNC_8 (char const**,int *,char const*,int *,int *) ;
 int FUNC_9 (int *,int *,scalar_t__*,int *,char const*,int *) ;
 int FUNC_10 (char const*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc_context_t *VAR_3,
                                 const char *VAR_4,
                                 svn_wc_notify_func2_t VAR_5,
                                 void *VAR_6,
                                 apr_pool_t *VAR_7)
{
  const char *VAR_8;

  FUNC_0(FUNC_8(&VAR_8, VAR_3, VAR_4,
                             VAR_7, VAR_7));

  VAR_4 = FUNC_3(VAR_4, VAR_7);

  while(FUNC_4(VAR_8, VAR_4))
    {
      svn_boolean_t VAR_9;


      FUNC_0(FUNC_9(((void*)0), ((void*)0), &VAR_9,
                                   VAR_3, VAR_4, VAR_7));
      if (VAR_9)
        {
          if (VAR_5 != ((void*)0))
            {
              VAR_5(VAR_6,
                          FUNC_10(VAR_4,
                                               VAR_2,
                                               VAR_7),
                          VAR_7);
            }

          return FUNC_7(
                   VAR_0, ((void*)0),
                   FUNC_1("Aborting commit: '%s' remains in tree-conflict"),
                   FUNC_6(VAR_4, VAR_7));
        }


      if (FUNC_5(VAR_4, FUNC_2(VAR_4)))
        break;
      else
        VAR_4 = FUNC_3(VAR_4, VAR_7);
    }

  return VAR_1;
}
