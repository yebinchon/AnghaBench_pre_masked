
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,char**) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1 (char **VAR_4)
{
  enum clnt_stat VAR_5;

  VAR_5 = FUNC_0 (VAR_1, VAR_2, (char *) 0,
     VAR_3, VAR_4);
  return (VAR_5 == VAR_0) ? 0 : -1;
}
