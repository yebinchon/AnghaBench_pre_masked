
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_config_t ;
typedef scalar_t__ svn_boolean_t ;
typedef enum access_type { ____Placeholder_access_type } access_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char const**,int ,char const*,char const*) ;

__attribute__((used)) static enum access_type
FUNC_2(svn_config_t *VAR_4,
           const char *VAR_5,
           const char *VAR_6,
           svn_boolean_t VAR_7)
{
  enum access_type VAR_8;
  const char *VAR_9;

  FUNC_1(VAR_4, &VAR_9, VAR_2, VAR_5, VAR_6);
  VAR_8 = (FUNC_0(VAR_9, "write") == 0 ? VAR_3 :
            FUNC_0(VAR_9, "read") == 0 ? VAR_1 : VAR_0);

  return VAR_8 == VAR_3 && VAR_7 ? VAR_1 : VAR_8;
}
