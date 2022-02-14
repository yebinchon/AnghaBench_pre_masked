
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint32_t ;
typedef int local_gid ;
typedef int gid ;
struct TYPE_8__ {scalar_t__ gidx; TYPE_3__* rem_dest; TYPE_2__** send_qp; TYPE_1__** recv_qp; int lid; int srq; int ib_port; int context; } ;
struct TYPE_7__ {int recv_psn; } ;
struct TYPE_6__ {int qp_num; } ;
struct TYPE_5__ {int qp_num; } ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (union ibv_gid*,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,union ibv_gid*) ;
 int FUNC_4 (int ,union ibv_gid*,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (union ibv_gid*,int ,int) ;
 int FUNC_7 (char*,char*,int ,int ,int ,int,int ,char*) ;
 int FUNC_8 (char*,char*,int ,int ,int ,int,int ,char*) ;
 int VAR_5 ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static int FUNC_10(int VAR_6, int VAR_7)
{
 char VAR_8[VAR_3];
 char VAR_9[33];
 uint32_t VAR_10;
 union ibv_gid VAR_11;

 if (VAR_4.gidx >= 0) {
  if (FUNC_3(VAR_4.context, VAR_4.ib_port, VAR_4.gidx,
      &VAR_11)) {
   FUNC_0(VAR_5, "can't read sgid of index %ld\n",
    VAR_4.gidx);
   return -1;
  }
 } else {
  FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 }

 VAR_4.rem_dest[VAR_7].recv_psn = FUNC_5() & 0xffffff;
 if (FUNC_2(VAR_4.srq, &VAR_10)) {
  FUNC_0(VAR_5, "Couldn't get SRQ num\n");
  return -1;
 }

 FUNC_4(VAR_1, &VAR_11, VAR_9, sizeof(VAR_9));
 FUNC_7(VAR_0, "local", VAR_4.lid, VAR_4.recv_qp[VAR_7]->qp_num,
  VAR_4.send_qp[VAR_7]->qp_num, VAR_4.rem_dest[VAR_7].recv_psn,
  VAR_10, VAR_9);

 FUNC_1(&VAR_11, VAR_9);
 FUNC_8(VAR_8, VAR_2, VAR_4.lid, VAR_4.recv_qp[VAR_7]->qp_num,
  VAR_4.send_qp[VAR_7]->qp_num, VAR_4.rem_dest[VAR_7].recv_psn,
  VAR_10, VAR_9);

 if (FUNC_9(VAR_6, VAR_8, VAR_3) != VAR_3) {
  FUNC_0(VAR_5, "Couldn't send local address\n");
  return -1;
 }

 return 0;
}
