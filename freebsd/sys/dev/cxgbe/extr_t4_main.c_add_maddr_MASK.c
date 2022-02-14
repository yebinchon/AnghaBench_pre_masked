
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct vi_info {int viid; struct port_info* pi; } ;
struct sockaddr_dl {int dummy; } ;
struct port_info {struct adapter* adapter; } ;
struct mcaddr_ctx {scalar_t__ rc; size_t i; scalar_t__ del; int ** mcaddr; TYPE_1__* ifp; int hash; } ;
struct adapter {int mbox; } ;
struct TYPE_2__ {struct vi_info* if_softc; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int * FUNC_1 (struct sockaddr_dl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct adapter*,int ,int ,scalar_t__,size_t,int **,int *,int *,int ) ;

__attribute__((used)) static u_int
FUNC_5(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct mcaddr_ctx *VAR_4 = VAR_1;
 struct vi_info *VAR_5 = VAR_4->ifp->if_softc;
 struct port_info *VAR_6 = VAR_5->pi;
 struct adapter *VAR_7 = VAR_6->adapter;

 if (VAR_4->rc < 0)
  return (0);

 VAR_4->mcaddr[VAR_4->i] = FUNC_1(VAR_2);
 FUNC_2(FUNC_0(VAR_4->mcaddr[VAR_4->i]));
 VAR_4->i++;

 if (VAR_4->i == VAR_0) {
  VAR_4->rc = FUNC_4(VAR_7, VAR_7->mbox, VAR_5->viid, VAR_4->del,
      VAR_4->i, VAR_4->mcaddr, ((void*)0), &VAR_4->hash, 0);
  if (VAR_4->rc < 0) {
   int VAR_8;

   for (VAR_8 = 0; VAR_8 < VAR_4->i; VAR_8++) {
    FUNC_3(VAR_4->ifp,
        "failed to add mc address"
        " %02x:%02x:%02x:"
        "%02x:%02x:%02x rc=%d\n",
        VAR_4->mcaddr[VAR_8][0], VAR_4->mcaddr[VAR_8][1],
        VAR_4->mcaddr[VAR_8][2], VAR_4->mcaddr[VAR_8][3],
        VAR_4->mcaddr[VAR_8][4], VAR_4->mcaddr[VAR_8][5],
        -VAR_4->rc);
   }
   return (0);
  }
  VAR_4->del = 0;
  VAR_4->i = 0;
 }

 return (1);
}
