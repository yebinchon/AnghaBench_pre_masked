
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evhttp_connection {int dummy; } ;
typedef int local ;
typedef int addrbuf ;


 struct sockaddr* FUNC_0 (struct evhttp_connection*) ;
 int FUNC_1 (struct sockaddr*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct evhttp_connection *VAR_1, void *VAR_2)
{
 const struct sockaddr *VAR_3;
 char VAR_4[128];
 char VAR_5[] = "127.0.0.1:";

 VAR_0 = 0;
 FUNC_3(VAR_1);

 VAR_3 = FUNC_0(VAR_1);
 FUNC_3(VAR_3);

 FUNC_1((struct sockaddr *)VAR_3, VAR_4, sizeof(VAR_4));
 FUNC_3(!FUNC_2(VAR_4, VAR_5, sizeof(VAR_5) - 1));

 VAR_0 = 1;
 return;

end:
 VAR_0 = 0;
}
