
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_1(u64 VAR_0)
{
 static char VAR_1[80];

 VAR_1[0] = 0;

 if (VAR_0 < 1000)
  return VAR_1;

 if (VAR_0 < 1000 * 1000) {
  FUNC_0(VAR_1, "%4.1f us", VAR_0 / 1000.0);
  return VAR_1;
 }
 FUNC_0(VAR_1, "%4.1f ms", VAR_0 / 1000.0 / 1000);

 return VAR_1;
}
