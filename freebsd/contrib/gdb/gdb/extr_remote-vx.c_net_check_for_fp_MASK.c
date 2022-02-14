
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef scalar_t__ bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  enum clnt_stat VAR_5;
  bool_t VAR_6 = 0;

  VAR_5 = FUNC_1 (VAR_1, VAR_4, 0, VAR_3, &VAR_6);
  if (VAR_5 != VAR_0)
    FUNC_0 (VAR_2);

  return (int) VAR_6;
}
