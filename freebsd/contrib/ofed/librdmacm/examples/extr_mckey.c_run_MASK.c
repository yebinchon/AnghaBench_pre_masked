
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_5__ {int cma_id; } ;
struct TYPE_4__ {int dst_addr; TYPE_2__* nodes; int cmathread; int src_addr; int dst_in; int src_in; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,struct sockaddr*) ;
 int FUNC_4 (int ,struct sockaddr*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (int) ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_14(void)
{
 int VAR_8, VAR_9, VAR_10;

 FUNC_8("mckey: starting %s\n", VAR_3 ? "client" : "server");
 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_5, (struct sockaddr *) &VAR_6.src_in);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_2, (struct sockaddr *) &VAR_6.dst_in);
 if (VAR_9)
  return VAR_9;

 FUNC_8("mckey: joining\n");
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_5) {
   VAR_9 = FUNC_10(VAR_6.nodes[VAR_8].cma_id,
          VAR_6.src_addr);
   if (VAR_9) {
    FUNC_5("mckey: addr bind failure");
    FUNC_1();
    return VAR_9;
   }
  }

  if (VAR_7)
   VAR_9 = FUNC_0(&VAR_6.nodes[VAR_8]);
  else
   VAR_9 = FUNC_12(VAR_6.nodes[VAR_8].cma_id,
      VAR_6.src_addr, VAR_6.dst_addr,
      2000);
  if (VAR_9) {
   FUNC_5("mckey: resolve addr failure");
   FUNC_1();
   return VAR_9;
  }
 }

 VAR_9 = FUNC_2();
 if (VAR_9)
  goto out;

 FUNC_9(&VAR_6.cmathread, ((void*)0), VAR_0, ((void*)0));





 FUNC_13(3);

 if (VAR_4) {
  if (VAR_3) {
   FUNC_8("initiating data transfers\n");
   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    VAR_9 = FUNC_7(&VAR_6.nodes[VAR_8], 0);
    if (VAR_9)
     goto out;
   }
  } else {
   FUNC_8("receiving data transfers\n");
   VAR_9 = FUNC_6();
   if (VAR_9)
    goto out;
  }
  FUNC_8("data transfers complete\n");
 }
out:
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_10 = FUNC_11(VAR_6.nodes[VAR_8].cma_id,
        VAR_6.dst_addr);
  if (VAR_10) {
   FUNC_5("mckey: failure leaving");
   VAR_9 = VAR_10;
  }
 }
 return VAR_9;
}
