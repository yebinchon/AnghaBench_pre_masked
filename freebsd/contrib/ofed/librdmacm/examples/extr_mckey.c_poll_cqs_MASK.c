
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_wc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* nodes; } ;
struct TYPE_3__ {int cq; int connected; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct ibv_wc*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct ibv_wc VAR_3[8];
 int VAR_4, VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_2.nodes[VAR_5].connected)
   continue;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += VAR_6) {
   VAR_6 = FUNC_0(VAR_2.nodes[VAR_5].cq, 8, VAR_3);
   if (VAR_6 < 0) {
    FUNC_1("mckey: failed polling CQ: %d\n", VAR_6);
    return VAR_6;
   }
  }
 }
 return 0;
}
