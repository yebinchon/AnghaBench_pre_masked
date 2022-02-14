
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int port_range ;


 int FUNC_0 (char*,struct in_addr*) ;
 int FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (int,char*,char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int
FUNC_4 (char* VAR_0, struct in_addr* VAR_1, char* VAR_2, port_range *VAR_3)
{
 char* VAR_4;

 VAR_4 = FUNC_3 (VAR_0, ':');
 if (!VAR_4)
  FUNC_2 (1, "%s is missing port number", VAR_0);

 *VAR_4 = '\0';
 ++VAR_4;

 FUNC_0 (VAR_0, VAR_1);
 return FUNC_1 (VAR_4, VAR_2, VAR_3);
}
