
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_address {scalar_t__ indx; } ;
typedef int rtx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct s390_address*) ;

__attribute__((used)) static int
FUNC_2 (rtx VAR_0)
{
  struct s390_address VAR_1;
  if (!FUNC_1 (VAR_0, &VAR_1))
    return 1000;

  return VAR_1.indx? FUNC_0 (1) + 1 : FUNC_0 (1);
}
