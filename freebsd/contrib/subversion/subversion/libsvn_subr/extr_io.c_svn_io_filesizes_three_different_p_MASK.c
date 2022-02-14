
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ size; } ;
typedef TYPE_1__ apr_finfo_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_2,
                                   svn_boolean_t *VAR_3,
                                   svn_boolean_t *VAR_4,
                                   const char *VAR_5,
                                   const char *VAR_6,
                                   const char *VAR_7,
                                   apr_pool_t *VAR_8)
{
  apr_finfo_t VAR_9, VAR_10, VAR_11;
  apr_status_t VAR_12, VAR_13, VAR_14;
  const char *VAR_15, *VAR_16, *VAR_17;




  FUNC_0(FUNC_2(&VAR_15, VAR_5, VAR_8));
  FUNC_0(FUNC_2(&VAR_16, VAR_6, VAR_8));
  FUNC_0(FUNC_2(&VAR_17, VAR_7, VAR_8));


  VAR_12 = FUNC_1(&VAR_9, VAR_15, VAR_0, VAR_8);
  VAR_13 = FUNC_1(&VAR_10, VAR_16, VAR_0, VAR_8);
  VAR_14 = FUNC_1(&VAR_11, VAR_17, VAR_0, VAR_8);





  *VAR_2 = !VAR_12 && !VAR_13 && VAR_9 != VAR_10;
  *VAR_3 = !VAR_13 && !VAR_14 && VAR_10 != VAR_11;
  *VAR_4 = !VAR_12 && !VAR_14 && VAR_9 != VAR_11;

  return VAR_1;
}
