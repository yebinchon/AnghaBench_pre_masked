
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct netconfig {int dummy; } ;
struct netbuf {struct sockaddr* buf; } ;
typedef int host ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(caddr_t VAR_1, struct netbuf * VAR_2, struct netconfig * VAR_3)
{
 char VAR_4[VAR_0];
 struct sockaddr *VAR_5 = VAR_2->buf;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_5, VAR_5->sa_len, VAR_4, sizeof(VAR_4), ((void*)0), 0, 0);
 if (VAR_6)
  FUNC_3("Cannot resolve address (%s)", FUNC_0(VAR_6));
 else
  FUNC_2("response from: %s\n", VAR_4);
 return 0;
}
