
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_7 (char const*,scalar_t__*,int *) ;
 TYPE_1__* FUNC_8 (int*,char const*,int *) ;
 scalar_t__ VAR_5 ;
 char* FUNC_9 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(int *VAR_6,
                const char *VAR_7,
                apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9;
  const char *VAR_10;
  svn_node_kind_t VAR_11;


  VAR_10 = FUNC_9(VAR_7, VAR_3,
                                       VAR_8);



  FUNC_2(FUNC_7(VAR_10, &VAR_11, VAR_8));
  if (VAR_11 == VAR_5)
    {
      *VAR_6 = 0;
      return VAR_2;
    }

  VAR_9 = FUNC_8(VAR_6, VAR_10, VAR_8);
  if (VAR_9 == ((void*)0))
    return VAR_2;
  if (VAR_9->apr_err != VAR_0
      && !FUNC_0(VAR_9->apr_err)
      && !FUNC_1(VAR_9->apr_err))
    return FUNC_6(VAR_1, VAR_9, FUNC_3("'%s' does not exist"),
                             FUNC_4(VAR_7, VAR_8));
  FUNC_5(VAR_9);







  VAR_10 = FUNC_9(VAR_7, VAR_4,
                                       VAR_8);
  VAR_9 = FUNC_8(VAR_6, VAR_10, VAR_8);
  if (VAR_9 == ((void*)0))
    return VAR_2;



  FUNC_5(VAR_9);

  *VAR_6 = 0;
  return VAR_2;
}
