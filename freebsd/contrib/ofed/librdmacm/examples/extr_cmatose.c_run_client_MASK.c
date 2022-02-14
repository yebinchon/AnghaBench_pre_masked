
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ai_dst_addr; int ai_src_addr; } ;
struct TYPE_5__ {int cma_id; } ;
struct TYPE_4__ {TYPE_2__* nodes; TYPE_3__* rai; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int *,TYPE_3__**) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int FUNC_11(void)
{
 int VAR_9, VAR_10, VAR_11;

 FUNC_9("cmatose: starting client\n");

 VAR_10 = FUNC_4(VAR_7, VAR_2, VAR_6, &VAR_3, &VAR_8.rai);
 if (VAR_10) {
  FUNC_9("cmatose: getaddrinfo error: %s\n", FUNC_3(VAR_10));
  return VAR_10;
 }

 FUNC_9("cmatose: connecting\n");
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_10 = FUNC_10(VAR_8.nodes[VAR_9].cma_id, VAR_8.rai->ai_src_addr,
     VAR_8.rai->ai_dst_addr, 2000);
  if (VAR_10) {
   FUNC_6("cmatose: failure getting addr");
   FUNC_0();
   return VAR_10;
  }
 }

 VAR_10 = FUNC_1();
 if (VAR_10)
  goto disc;

 if (VAR_4) {
  FUNC_9("receiving data transfers\n");
  VAR_10 = FUNC_7(VAR_0);
  if (VAR_10)
   goto disc;

  FUNC_9("sending replies\n");
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_10 = FUNC_8(&VAR_8.nodes[VAR_9]);
   if (VAR_10)
    goto disc;
  }

  FUNC_9("data transfers complete\n");
 }

 VAR_10 = 0;

 if (VAR_5) {
  VAR_10 = FUNC_5(((void*)0));
  if (VAR_10)
   goto out;
 }
disc:
 VAR_11 = FUNC_2();
 if (VAR_11)
  VAR_10 = VAR_11;
out:
 return VAR_10;
}
