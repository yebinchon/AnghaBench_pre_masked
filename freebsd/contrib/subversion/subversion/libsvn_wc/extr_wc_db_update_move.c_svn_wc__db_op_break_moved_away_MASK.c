
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_9__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ,int *,int *,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,char const*,int,int *) ;
 int FUNC_4 (int*,TYPE_1__*,char const*,int ,int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,char const*) ;
 int * FUNC_7 (TYPE_1__*,char const*,int *,int ,int ,int ,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,void*,int *) ;
 int FUNC_9 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc__db_t *VAR_4,
                               const char *VAR_5,
                               const char *VAR_6,
                               svn_boolean_t VAR_7,
                               svn_wc_notify_func2_t VAR_8,
                               void *VAR_9,
                               apr_pool_t *VAR_10)
{
  svn_wc__db_wcroot_t *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  int VAR_14;

  FUNC_0(FUNC_9(&VAR_11, &VAR_12,
                                                VAR_4, VAR_5,
                                                VAR_10, VAR_10));
  FUNC_2(VAR_11);

  if (VAR_6)
    VAR_13 = FUNC_6(VAR_11->abspath,
                                           VAR_6);
  else
    VAR_13 = ((void*)0);


  FUNC_1(
    FUNC_4(&VAR_14, VAR_11, VAR_12,
                      VAR_13 ? FUNC_5(VAR_13)
                                 : FUNC_5(VAR_12),
                      VAR_10),
    FUNC_3(VAR_11, VAR_4, VAR_12, VAR_14,
                     VAR_10),
    VAR_7
        ? FUNC_7(VAR_11, VAR_12, VAR_4,
                                               VAR_0, VAR_0, VAR_3,
                                               ((void*)0), VAR_10)
        : VAR_2,
    VAR_2,
    VAR_11);

  FUNC_0(FUNC_8(VAR_11,
                                             VAR_1,
                                             VAR_1,
                                             VAR_8, VAR_9,
                                             VAR_10));
  return VAR_2;
}
