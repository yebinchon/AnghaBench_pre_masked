
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static unsigned int
FUNC_3 (const char *VAR_7)
{
  if (FUNC_1 (VAR_7, "macc", 4) == 0)
    return VAR_3;
  if (FUNC_1 (VAR_7, "dmacc", 5) == 0)
    return VAR_1;
  if (FUNC_1 (VAR_7, "mult", 4) == 0)
    return VAR_5;
  if (FUNC_1 (VAR_7, "dmult", 5) == 0)
    return VAR_2;
  if (FUNC_2 (VAR_7, "div"))
    return VAR_0;
  if (FUNC_0 (VAR_7, "mtlo") == 0 || FUNC_0 (VAR_7, "mthi") == 0)
    return VAR_4;
  return VAR_6;
}
