
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


 scalar_t__ FUNC_0 (int *,int ,int ,char*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct netbuf*) ;
 int * FUNC_4 () ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

struct netbuf *
FUNC_5(struct netconfig *VAR_8, char *VAR_9)
{
 CLIENT *VAR_10;
 struct netbuf *VAR_11;



 if (VAR_8 == ((void*)0)) {
  VAR_4.cf_stat = VAR_3;
  return (((void*)0));
 }
 if (VAR_9 == ((void*)0)) {
  VAR_4.cf_stat = VAR_2;
  return (((void*)0));
 }
 VAR_10 = FUNC_4();
 if (! VAR_10) {
  return (((void*)0));
 }

 VAR_11 = (struct netbuf *)FUNC_2(1, sizeof (struct netbuf));
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_10);
  return (((void*)0));
 }
 if (FUNC_0(VAR_10, (rpcproc_t)VAR_0,
     (xdrproc_t) VAR_7, (char *)(void *)&VAR_9,
     (xdrproc_t) VAR_6, (char *)(void *)VAR_11,
     VAR_5) != VAR_1) {
  FUNC_3(VAR_11);
  VAR_11 = ((void*)0);
 }
 FUNC_1(VAR_10);
 return (VAR_11);
}
