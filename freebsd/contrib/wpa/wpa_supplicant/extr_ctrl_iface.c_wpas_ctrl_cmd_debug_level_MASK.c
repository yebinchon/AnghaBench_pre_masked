
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 if (FUNC_0(VAR_2, "PING") == 0 ||
     FUNC_1(VAR_2, "BSS ", 4) == 0 ||
     FUNC_1(VAR_2, "GET_NETWORK ", 12) == 0 ||
     FUNC_1(VAR_2, "STATUS", 6) == 0 ||
     FUNC_1(VAR_2, "STA ", 4) == 0 ||
     FUNC_1(VAR_2, "STA-", 4) == 0)
  return VAR_1;
 return VAR_0;
}
