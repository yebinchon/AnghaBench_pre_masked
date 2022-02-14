
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_wc {int dummy; } ;
typedef enum CQ_INDEX { ____Placeholder_CQ_INDEX } CQ_INDEX ;
struct TYPE_4__ {TYPE_1__* nodes; } ;
struct TYPE_3__ {int * cq; int connected; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct ibv_wc*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_2(enum CQ_INDEX VAR_3)
{
 struct ibv_wc VAR_4[8];
 int VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!VAR_2.nodes[VAR_6].connected)
   continue;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 += VAR_7) {
   VAR_7 = FUNC_0(VAR_2.nodes[VAR_6].cq[VAR_3], 8, VAR_4);
   if (VAR_7 < 0) {
    FUNC_1("cmatose: failed polling CQ: %d\n", VAR_7);
    return VAR_7;
   }
  }
 }
 return 0;
}
