
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int FUNC_0 (char*) ;

enum target_signal
FUNC_1 (int VAR_0)
{
  if (VAR_0 >= 1 && VAR_0 <= 15)
    return (enum target_signal) VAR_0;
  FUNC_0 ("Only signals 1-15 are valid as numeric signals.\nUse \"info signals\" for a list of symbolic signals.");

}
