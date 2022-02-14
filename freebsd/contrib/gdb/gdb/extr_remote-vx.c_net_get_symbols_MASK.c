
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldtabl {int dummy; } ;
typedef int ldtabl ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2 (ldtabl *VAR_4)
{
  enum clnt_stat VAR_5;

  FUNC_0 ((char *) VAR_4, '\0', sizeof (struct ldtabl));

  VAR_5 = FUNC_1 (VAR_1, VAR_3, 0, VAR_2, VAR_4);
  return (VAR_5 == VAR_0) ? 0 : -1;
}
