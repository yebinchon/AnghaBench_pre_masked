
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct netconfig {int nc_device; int nc_netid; } ;
struct netbuf {struct netbuf* buf; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
struct TYPE_9__ {int cf_stat; } ;
struct TYPE_8__ {int * cl_tp; int * cl_netid; } ;
typedef TYPE_1__ CLIENT ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct netbuf* FUNC_2 (int ,int ,struct netconfig*,char*,TYPE_1__**,struct timeval*) ;
 TYPE_1__* FUNC_3 (int ,struct netconfig const*,struct netbuf*,int ,int ,int ,int ) ;
 int FUNC_4 (struct netbuf*) ;
 TYPE_2__ VAR_6 ;
 void* FUNC_5 (int ) ;

CLIENT *
FUNC_6(const char *VAR_7, rpcprog_t VAR_8, rpcvers_t VAR_9,
    const struct netconfig *VAR_10, const struct timeval *VAR_11)
{
 struct netbuf *VAR_12;
 CLIENT *VAR_13 = ((void*)0);

 if (VAR_10 == ((void*)0)) {
  VAR_6.cf_stat = VAR_4;
  return (((void*)0));
 }




 if ((VAR_12 = FUNC_2(VAR_8, VAR_9,
   (struct netconfig *)VAR_10, (char *)VAR_7,
   &VAR_13, (struct timeval *)VAR_11)) == ((void*)0)) {

  return (((void*)0));
 }
 if (VAR_13 == ((void*)0)) {
  VAR_13 = FUNC_3(VAR_3, VAR_10, VAR_12,
     VAR_8, VAR_9, 0, 0);
 } else {

  if (FUNC_0(VAR_13, VAR_1, (void *)VAR_12) == VAR_5) {
   if (VAR_13->cl_netid == ((void*)0))
    VAR_13->cl_netid = FUNC_5(VAR_10->nc_netid);
   if (VAR_13->cl_tp == ((void*)0))
    VAR_13->cl_tp = FUNC_5(VAR_10->nc_device);
   (void) FUNC_0(VAR_13, VAR_0, (void *)&VAR_8);
   (void) FUNC_0(VAR_13, VAR_2, (void *)&VAR_9);
  } else {
   FUNC_1(VAR_13);
   VAR_13 = FUNC_3(VAR_3, VAR_10, VAR_12,
     VAR_8, VAR_9, 0, 0);
  }
 }
 FUNC_4(VAR_12->buf);
 FUNC_4(VAR_12);
 return (VAR_13);
}
