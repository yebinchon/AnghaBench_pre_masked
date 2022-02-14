
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


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int *,TYPE_3__**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_7, VAR_8;

 FUNC_7("udaddy: starting client\n");

 VAR_8 = FUNC_3(VAR_5, VAR_1, VAR_4, &VAR_2, &VAR_6.rai);
 if (VAR_8) {
  FUNC_7("udaddy: getaddrinfo error: %s\n", FUNC_2(VAR_8));
  return VAR_8;
 }

 FUNC_7("udaddy: connecting\n");
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = FUNC_8(VAR_6.nodes[VAR_7].cma_id, VAR_6.rai->ai_src_addr,
     VAR_6.rai->ai_dst_addr, 2000);
  if (VAR_8) {
   FUNC_4("udaddy: failure getting addr");
   FUNC_0();
   return VAR_8;
  }
 }

 VAR_8 = FUNC_1();
 if (VAR_8)
  goto out;

 if (VAR_3) {
  FUNC_7("initiating data transfers\n");
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_8 = FUNC_6(&VAR_6.nodes[VAR_7], 0);
   if (VAR_8)
    goto out;
  }
  FUNC_7("receiving data transfers\n");
  VAR_8 = FUNC_5();
  if (VAR_8)
   goto out;

  FUNC_7("data transfers complete\n");
 }
out:
 return VAR_8;
}
