
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct netconfig {int dummy; } ;
struct netbuf {int dummy; } ;
typedef int rpcproc_t ;
struct TYPE_2__ {int cf_stat; } ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,int ,char*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

char *
FUNC_3(struct netconfig *VAR_7, struct netbuf *VAR_8)
{
 CLIENT *VAR_9;
 char *VAR_10 = ((void*)0);



 if (VAR_7 == ((void*)0)) {
  VAR_3.cf_stat = VAR_2;
  return (((void*)0));
 }
 if (VAR_8 == ((void*)0)) {
  VAR_3.cf_stat = VAR_1;
  return (((void*)0));
 }
 VAR_9 = FUNC_2();
 if (! VAR_9) {
  return (((void*)0));
 }

 FUNC_0(VAR_9, (rpcproc_t)VAR_0,
     (xdrproc_t) VAR_5, (char *)(void *)VAR_8,
     (xdrproc_t) VAR_6, (char *)(void *)&VAR_10, VAR_4);
 FUNC_1(VAR_9);
 return (VAR_10);
}
