
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*,int ,int*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  int VAR_4;
  int VAR_5;
  enum clnt_stat VAR_6;

  VAR_5 = 0;



  if ((VAR_4 = FUNC_0 (VAR_2)) == 0)
    return -1;

  VAR_6 = FUNC_1 (VAR_1, VAR_3, &VAR_4, VAR_3,
     &VAR_5);

  return (VAR_6 == VAR_0) ? VAR_5 : -1;
}
