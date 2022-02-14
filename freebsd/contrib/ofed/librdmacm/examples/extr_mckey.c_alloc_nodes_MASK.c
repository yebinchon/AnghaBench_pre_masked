
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; int cma_id; } ;
struct TYPE_6__ {TYPE_2__* nodes; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_4, VAR_5;

 VAR_3.nodes = FUNC_1(sizeof *VAR_3.nodes * VAR_1);
 if (!VAR_3.nodes) {
  FUNC_3("mckey: unable to allocate memory for test nodes\n");
  return -VAR_0;
 }
 FUNC_2(VAR_3.nodes, 0, sizeof *VAR_3.nodes * VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3.nodes[VAR_5].id = VAR_5;
  VAR_4 = FUNC_4(VAR_3.channel, &VAR_3.nodes[VAR_5].cma_id,
         &VAR_3.nodes[VAR_5], VAR_2);
  if (VAR_4)
   goto err;
 }
 return 0;
err:
 while (--VAR_5 >= 0)
  FUNC_5(VAR_3.nodes[VAR_5].cma_id);
 FUNC_0(VAR_3.nodes);
 return VAR_4;
}
