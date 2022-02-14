
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct in_addr*,char*,int) ;
 int FUNC_1 (char*,char*) ;

char *
FUNC_2(struct in_addr VAR_1) {
 static char VAR_2[18];

 FUNC_1(VAR_2, "[inet_ntoa error]");
 (void) FUNC_0(VAR_0, &VAR_1, VAR_2, sizeof VAR_2);
 return (VAR_2);
}
