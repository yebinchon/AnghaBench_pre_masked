
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ai_port_space; } ;
struct TYPE_8__ {int id; int cma_id; } ;
struct TYPE_7__ {TYPE_2__* nodes; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_5__ VAR_3 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_5, VAR_6;

 VAR_4.nodes = FUNC_1(sizeof *VAR_4.nodes * VAR_1);
 if (!VAR_4.nodes) {
  FUNC_3("udaddy: unable to allocate memory for test nodes\n");
  return -VAR_0;
 }
 FUNC_2(VAR_4.nodes, 0, sizeof *VAR_4.nodes * VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4.nodes[VAR_6].id = VAR_6;
  if (VAR_2) {
   VAR_5 = FUNC_4(VAR_4.channel,
          &VAR_4.nodes[VAR_6].cma_id,
          &VAR_4.nodes[VAR_6], VAR_3.ai_port_space);
   if (VAR_5)
    goto err;
  }
 }
 return 0;
err:
 while (--VAR_6 >= 0)
  FUNC_5(VAR_4.nodes[VAR_6].cma_id);
 FUNC_0(VAR_4.nodes);
 return VAR_5;
}
