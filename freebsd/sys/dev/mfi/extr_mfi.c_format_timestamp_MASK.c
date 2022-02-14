
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buffer ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(uint32_t VAR_0)
{
 static char VAR_1[32];

 if ((VAR_0 & 0xff000000) == 0xff000000)
  FUNC_0(VAR_1, sizeof(VAR_1), "boot + %us", VAR_0 &
      0x00ffffff);
 else
  FUNC_0(VAR_1, sizeof(VAR_1), "%us", VAR_0);
 return (VAR_1);
}
