
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct ypresp_maplist {struct ypmaplist* maps; int stat; } ;
struct ypmaplist {int dummy; } ;
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
 int FUNC_5 (int ,int ,int ,char**,int ,struct ypresp_maplist*,struct timeval) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ) ;

int
FUNC_9(char *VAR_7, struct ypmaplist **VAR_8)
{
 struct dom_binding *VAR_9;
 struct ypresp_maplist VAR_10;
 struct timeval VAR_11;
 int VAR_12;



 if (VAR_7 == ((void*)0) || !FUNC_7(VAR_7))
  return (VAR_1);

 FUNC_0();
again:
 if (FUNC_2(VAR_7, &VAR_9) != 0) {
  FUNC_1();
  return (VAR_2);
 }

 VAR_11.tv_sec = VAR_4;
 VAR_11.tv_usec = 0;

 FUNC_4((char *)&VAR_10, sizeof VAR_10);

 VAR_12 = FUNC_5(VAR_9->dom_client, VAR_3,
  (xdrproc_t)VAR_5, &VAR_7,
  (xdrproc_t)VAR_6, &VAR_10,VAR_11);
 if (VAR_12 != VAR_0) {
  FUNC_6(VAR_9->dom_client, "yp_maplist: clnt_call");
  FUNC_3(VAR_9);
  goto again;
 }
 if (!(VAR_12 = FUNC_8(VAR_10.stat))) {
  *VAR_8 = VAR_10.maps;
 }


 FUNC_1();
 return (VAR_12);
}
