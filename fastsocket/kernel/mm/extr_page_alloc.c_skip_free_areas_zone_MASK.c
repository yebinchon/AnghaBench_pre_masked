
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* zone_pgdat; } ;
struct TYPE_2__ {int node_id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(unsigned int VAR_2, const struct zone *VAR_3)
{
 bool VAR_4 = 0;

 if (!(VAR_2 & VAR_0))
  goto out;

 FUNC_0();
 VAR_4 = !FUNC_1(VAR_3->zone_pgdat->node_id,
    VAR_1);
 FUNC_2();
out:
 return VAR_4;
}
