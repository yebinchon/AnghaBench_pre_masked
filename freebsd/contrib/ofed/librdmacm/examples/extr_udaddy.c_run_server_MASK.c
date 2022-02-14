
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rdma_cm_id {int dummy; } ;
struct TYPE_8__ {int ai_src_addr; } ;
struct TYPE_7__ {int ai_port_space; } ;
struct TYPE_6__ {int * nodes; TYPE_5__* rai; int channel; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,TYPE_3__*,TYPE_5__**) ;
 TYPE_3__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct rdma_cm_id*,int ) ;
 int FUNC_8 (int ,struct rdma_cm_id**,TYPE_1__*,int ) ;
 int FUNC_9 (struct rdma_cm_id*) ;
 int FUNC_10 (struct rdma_cm_id*,int ) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static int FUNC_11(void)
{
 struct rdma_cm_id *VAR_8;
 int VAR_9, VAR_10;

 FUNC_6("udaddy: starting server\n");
 VAR_10 = FUNC_8(VAR_7.channel, &VAR_8, &VAR_7, VAR_3.ai_port_space);
 if (VAR_10) {
  FUNC_3("udaddy: listen request failed");
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_6, VAR_2, VAR_5, &VAR_3, &VAR_7.rai);
 if (VAR_10) {
  FUNC_6("udaddy: getrdmaaddr error: %s\n", FUNC_1(VAR_10));
  goto out;
 }

 VAR_10 = FUNC_7(VAR_8, VAR_7.rai->ai_src_addr);
 if (VAR_10) {
  FUNC_3("udaddy: bind address failed");
  goto out;
 }

 VAR_10 = FUNC_10(VAR_8, 0);
 if (VAR_10) {
  FUNC_3("udaddy: failure trying to listen");
  goto out;
 }

 FUNC_0();

 if (VAR_4) {
  FUNC_6("receiving data transfers\n");
  VAR_10 = FUNC_4();
  if (VAR_10)
   goto out;

  FUNC_6("sending replies\n");
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_10 = FUNC_5(&VAR_7.nodes[VAR_9], VAR_0);
   if (VAR_10)
    goto out;
  }

  VAR_10 = FUNC_4();
  if (VAR_10)
   goto out;
  FUNC_6("data transfers complete\n");
 }
out:
 FUNC_9(VAR_8);
 return VAR_10;
}
