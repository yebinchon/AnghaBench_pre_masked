
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct ypresp_master {int peer; int stat; } ;
struct ypreq_nokey {char* domain; char* map; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct dom_binding {int dom_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,struct dom_binding**) ;
 int FUNC_3 (struct dom_binding*) ;
 int VAR_4 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,int ,struct ypreq_nokey*,int ,struct ypresp_master*,struct timeval) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct ypresp_master*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ) ;

int
FUNC_11(char *VAR_7, char *VAR_8, char **VAR_9)
{
 struct dom_binding *VAR_10;
 struct ypresp_master VAR_11;
 struct ypreq_nokey VAR_12;
 struct timeval VAR_13;
 int VAR_14;



 if (VAR_7 == ((void*)0) || !FUNC_8(VAR_7) ||
     VAR_8 == ((void*)0) || !FUNC_8(VAR_8))
  return (VAR_1);
 FUNC_0();
again:
 if (FUNC_2(VAR_7, &VAR_10) != 0) {
  FUNC_1();
  return (VAR_2);
 }

 VAR_13.tv_sec = VAR_4;
 VAR_13.tv_usec = 0;

 VAR_12.domain = VAR_7;
 VAR_12.map = VAR_8;

 FUNC_4((char *)&VAR_11, sizeof VAR_11);

 VAR_14 = FUNC_5(VAR_10->dom_client, VAR_3,
  (xdrproc_t)VAR_5, &VAR_12,
  (xdrproc_t)VAR_6, &VAR_11, VAR_13);
 if (VAR_14 != VAR_0) {
  FUNC_6(VAR_10->dom_client, "yp_master: clnt_call");
  FUNC_3(VAR_10);
  goto again;
 }

 if (!(VAR_14 = FUNC_10(VAR_11.stat))) {
  *VAR_9 = (char *)FUNC_7(VAR_11.peer);
 }

 FUNC_9((xdrproc_t)VAR_6, &VAR_11);
 FUNC_1();
 return (VAR_14);
}
