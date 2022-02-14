
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sip ;
typedef int in_addr_t ;


 int FUNC_0 (char*,int,char*,int,int,int,int) ;

__attribute__((used)) static char *
FUNC_1(in_addr_t VAR_0)
{
 static char VAR_1[16];

 FUNC_0(VAR_1, sizeof(VAR_1), "%u.%u.%u.%u",
     ((VAR_0 >> 24) & 0xff),
     ((VAR_0 >> 16) & 0xff),
     ((VAR_0 >> 8) & 0xff),
     (VAR_0 & 0xff));
 return (VAR_1);
}
