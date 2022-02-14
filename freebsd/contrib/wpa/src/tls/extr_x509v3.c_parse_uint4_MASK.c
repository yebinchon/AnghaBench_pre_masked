
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, size_t VAR_1)
{
 char VAR_2[5];
 int VAR_3;

 if (VAR_1 < 4)
  return -1;
 VAR_2[0] = VAR_0[0];
 VAR_2[1] = VAR_0[1];
 VAR_2[2] = VAR_0[2];
 VAR_2[3] = VAR_0[3];
 VAR_2[4] = 0x00;
 if (FUNC_0(VAR_2, "%4d", &VAR_3) != 1)
  return -1;
 return VAR_3;
}
