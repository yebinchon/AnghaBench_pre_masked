
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_3)
{
 if (!FUNC_0(VAR_3, "ping"))
  return VAR_2;
 if (!FUNC_0(VAR_3, "host"))
  return VAR_1;
 if (!FUNC_0(VAR_3, "cpu"))
  return VAR_0;
 return -1;
}
