
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_merge_range_t ;
typedef int svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,int,int) ;
 TYPE_1__* FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,char const*,int ) ;
 int FUNC_7 (char const**,char const*,char const**,int *) ;
 int FUNC_8 (char const**,char const*,TYPE_1__*,int *) ;
 int FUNC_9 (char const*) ;
 int * FUNC_10 (int ,int *,int ) ;
 int * FUNC_11 (int ,int *,int ,char const*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(const char **VAR_2, const char *VAR_3, svn_mergeinfo_t VAR_4,
                    apr_pool_t *VAR_5)
{
  const char *VAR_6 = "";
  apr_ssize_t VAR_7;
  svn_rangelist_t *VAR_8;
  svn_rangelist_t *VAR_9 = FUNC_2(VAR_5, 1,
                                              sizeof(svn_merge_range_t *));

  FUNC_0(FUNC_7(VAR_2, VAR_3, &VAR_6, VAR_5));

  if (*(*VAR_2) != ':')
    return FUNC_10(VAR_0, ((void*)0),
                            FUNC_1("Pathname not terminated by ':'"));

  *VAR_2 = *VAR_2 + 1;

  FUNC_0(FUNC_8(VAR_2, VAR_3, VAR_9, VAR_5));

  if (VAR_9->nelts == 0)
      return FUNC_11(VAR_0, ((void*)0),
                               FUNC_1("Mergeinfo for '%s' maps to an "
                                 "empty revision range"), VAR_6);
  if (*VAR_2 != VAR_3 && *(*VAR_2) != '\n')
    return FUNC_11(VAR_0, ((void*)0),
                             FUNC_1("Could not find end of line in range list line "
                               "in '%s'"), *VAR_2);

  if (*VAR_2 != VAR_3)
    *VAR_2 = *VAR_2 + 1;





  FUNC_0(FUNC_12(VAR_9, VAR_5));







  VAR_7 = FUNC_9(VAR_6);
  VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_7);
  if (VAR_8)
    FUNC_0(FUNC_14(VAR_9, VAR_8,
                                 VAR_5, VAR_5));

  FUNC_5(VAR_4, FUNC_6(FUNC_4(VAR_4), VAR_6, VAR_7),
               VAR_7, FUNC_13(VAR_9, FUNC_4(VAR_4)));

  return VAR_1;
}
