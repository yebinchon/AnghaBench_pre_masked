
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static void
FUNC_1(int VAR_0)
{
 const char *VAR_1 = "0123456789abcdef";

 FUNC_0(VAR_1[(VAR_0>>4)&0xf]);
 FUNC_0(VAR_1[(VAR_0>>0)&0xf]);
}
