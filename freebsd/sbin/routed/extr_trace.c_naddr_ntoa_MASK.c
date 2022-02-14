
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int naddr ;


 int VAR_0 ;
 int FUNC_0 (struct in_addr) ;
 char* FUNC_1 (char*,int ) ;

char *
FUNC_2(naddr VAR_1)
{

 static int VAR_2;
 static struct {
     char str[16];
 } VAR_3[4];
 char *VAR_4;
 struct in_addr VAR_5;

 VAR_5.s_addr = VAR_1;
 VAR_4 = FUNC_1(VAR_3[VAR_2].str, FUNC_0(VAR_5));
 VAR_2 = (VAR_2+1) % 4;
 return VAR_4;

}
