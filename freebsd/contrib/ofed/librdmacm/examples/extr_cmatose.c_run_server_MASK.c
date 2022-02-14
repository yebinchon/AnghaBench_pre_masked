
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rdma_cm_id {int dummy; } ;
struct TYPE_10__ {int ai_src_addr; } ;
struct TYPE_9__ {int ai_port_space; } ;
struct TYPE_8__ {int cma_id; scalar_t__ connected; } ;
struct TYPE_7__ {TYPE_3__* nodes; TYPE_6__* rai; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,TYPE_4__*,TYPE_6__**) ;
 TYPE_4__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct rdma_cm_id*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct rdma_cm_id*,int ) ;
 int FUNC_10 (int ,struct rdma_cm_id**,TYPE_1__*,int ) ;
 int FUNC_11 (struct rdma_cm_id*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct rdma_cm_id*,int ) ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static int FUNC_14(void)
{
 struct rdma_cm_id *VAR_10;
 int VAR_11, VAR_12;

 FUNC_8("cmatose: starting server\n");
 VAR_12 = FUNC_10(VAR_9.channel, &VAR_10, &VAR_9, VAR_4.ai_port_space);
 if (VAR_12) {
  FUNC_5("cmatose: listen request failed");
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_8, VAR_3, VAR_7, &VAR_4, &VAR_9.rai);
 if (VAR_12) {
  FUNC_8("cmatose: getrdmaaddr error: %s\n", FUNC_2(VAR_12));
  goto out;
 }

 VAR_12 = FUNC_9(VAR_10, VAR_9.rai->ai_src_addr);
 if (VAR_12) {
  FUNC_5("cmatose: bind address failed");
  goto out;
 }

 VAR_12 = FUNC_13(VAR_10, 0);
 if (VAR_12) {
  FUNC_5("cmatose: failure trying to listen");
  goto out;
 }

 VAR_12 = FUNC_0();
 if (VAR_12)
  goto out;

 if (VAR_5) {
  FUNC_8("initiating data transfers\n");
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   VAR_12 = FUNC_7(&VAR_9.nodes[VAR_11]);
   if (VAR_12)
    goto out;
  }

  FUNC_8("completing sends\n");
  VAR_12 = FUNC_6(VAR_1);
  if (VAR_12)
   goto out;

  FUNC_8("receiving data transfers\n");
  VAR_12 = FUNC_6(VAR_0);
  if (VAR_12)
   goto out;
  FUNC_8("data transfers complete\n");

 }

 if (VAR_6) {
  VAR_12 = FUNC_4(VAR_10);
  if (VAR_12)
   goto out;
 }

 FUNC_8("cmatose: disconnecting\n");
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!VAR_9.nodes[VAR_11].connected)
   continue;

  VAR_9.nodes[VAR_11].connected = 0;
  FUNC_12(VAR_9.nodes[VAR_11].cma_id);
 }

 VAR_12 = FUNC_1();

  FUNC_8("disconnected\n");

out:
 FUNC_11(VAR_10);
 return VAR_12;
}
