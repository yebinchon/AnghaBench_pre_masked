
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int port_range ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct in_addr*) ;
 int FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static int
FUNC_4 (const char* VAR_1, struct in_addr* VAR_2, char* VAR_3,
   port_range *VAR_4)
{
 char* VAR_5;

 VAR_5 = FUNC_3 (VAR_1, ':');
 if (!VAR_5)
  FUNC_2 (VAR_0, "%s is missing port number", VAR_1);

 *VAR_5 = '\0';
 ++VAR_5;

 FUNC_0 (VAR_1, VAR_2);
 return FUNC_1 (VAR_5, VAR_3, VAR_4);
}
