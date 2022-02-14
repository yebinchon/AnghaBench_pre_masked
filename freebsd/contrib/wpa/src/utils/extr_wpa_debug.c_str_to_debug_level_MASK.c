
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int FUNC_1(const char *VAR_6)
{
 if (FUNC_0(VAR_6, "EXCESSIVE") == 0)
  return VAR_2;
 if (FUNC_0(VAR_6, "MSGDUMP") == 0)
  return VAR_4;
 if (FUNC_0(VAR_6, "DEBUG") == 0)
  return VAR_0;
 if (FUNC_0(VAR_6, "INFO") == 0)
  return VAR_3;
 if (FUNC_0(VAR_6, "WARNING") == 0)
  return VAR_5;
 if (FUNC_0(VAR_6, "ERROR") == 0)
  return VAR_1;
 return -1;
}
