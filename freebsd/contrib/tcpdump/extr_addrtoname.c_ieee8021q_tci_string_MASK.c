
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int const,int const,char*) ;

const char *
FUNC_1(const uint16_t VAR_0)
{
 static char VAR_1[128];
 FUNC_0(VAR_1, sizeof(VAR_1), "vlan %u, p %u%s",
          VAR_0 & 0xfff,
          VAR_0 >> 13,
          (VAR_0 & 0x1000) ? ", DEI" : "");
 return VAR_1;
}
