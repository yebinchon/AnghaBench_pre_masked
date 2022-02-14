
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_nt ;


 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0)
{
 static char VAR_1[32];

 FUNC_0(VAR_1, sizeof(VAR_1),
     VAR_0 >= 0x100 ? "<unknown: 0x%x>" : "<unknown: %u>", VAR_0);
 return (VAR_1);
}
