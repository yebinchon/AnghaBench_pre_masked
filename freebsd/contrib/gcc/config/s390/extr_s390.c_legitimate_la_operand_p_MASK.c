
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_address {scalar_t__ pointer; } ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct s390_address*) ;

bool
FUNC_1 (rtx VAR_1)
{
  struct s390_address VAR_2;
  if (!FUNC_0 (VAR_1, &VAR_2))
    return 0;

  return (VAR_0 || VAR_2.pointer);
}
