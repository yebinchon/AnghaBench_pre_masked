
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,char const*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
svn_error_t *
FUNC_8(
  const char **VAR_3,
  svn_client_conflict_t *VAR_4,
  apr_pool_t *VAR_5)
{
  const char *VAR_6, *VAR_7;



  switch (FUNC_5(VAR_4))
    {
      case 129:
        VAR_6 = FUNC_1("local edit");
        break;
      case 131:
        VAR_6 = FUNC_1("local add");
        break;
      case 130:
        VAR_6 = FUNC_1("local delete");
        break;
      case 128:
        VAR_6 = FUNC_1("local obstruction");
        break;
      default:
        VAR_6 = FUNC_2(
                       VAR_5, FUNC_1("local %s"),
                       FUNC_7(
                         VAR_2,
                         FUNC_5(VAR_4)));
        break;
    }
  switch (FUNC_4(VAR_4))
    {
      case 132:
        VAR_7 = FUNC_1("incoming edit");
        break;
      case 134:
        VAR_7 = FUNC_1("incoming add");
        break;
      case 133:
        VAR_7 = FUNC_1("incoming delete");
        break;
      default:
        VAR_7 = FUNC_2(
                       VAR_5, FUNC_1("incoming %s"),
                       FUNC_7(
                         VAR_1,
                         FUNC_4(VAR_4)));
        break;
    }
  FUNC_0(VAR_6 && VAR_7);
  *VAR_3 = FUNC_2(VAR_5, FUNC_1("%s, %s %s"),
                       VAR_6, VAR_7,
                       FUNC_3(
                         FUNC_6(VAR_4)));
  return VAR_0;
}
