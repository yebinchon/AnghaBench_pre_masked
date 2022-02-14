
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int *,char*,int ,int ,int,int,int) ;
 int FUNC_1 (int*,int*,int*) ;

__attribute__((used)) static const char *
FUNC_2(apr_pool_t *VAR_2)
{
  int VAR_3, VAR_4, VAR_5;
  FUNC_1(&VAR_3, &VAR_4, &VAR_5);

  return FUNC_0(VAR_2, "SVN/%s (%s) serf/%d.%d.%d",
                      VAR_1, VAR_0,
                      VAR_3, VAR_4, VAR_5);
}
