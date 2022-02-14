
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid ;
typedef int ptid_t ;
typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (ptid_t VAR_3)
{
  pid_t VAR_4;

  VAR_4 = FUNC_1 (VAR_3);
  if (FUNC_0 (VAR_2, VAR_0, &VAR_4, sizeof (VAR_4), 0) == VAR_1)
    return 1;
  return 0;
}
