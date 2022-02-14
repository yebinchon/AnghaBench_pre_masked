
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int b ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;

char *
FUNC_2(struct in_addr VAR_0)
{
 static char VAR_1[18];
 char *VAR_2;

 VAR_2 = (char *)&VAR_0;

 (void)FUNC_1(VAR_1, sizeof(VAR_1),
     "%u.%u.%u.%u", (((int)VAR_2[0])&0xff), (((int)VAR_2[1])&0xff), (((int)VAR_2[2])&0xff), (((int)VAR_2[3])&0xff));
 return (VAR_1);
}
