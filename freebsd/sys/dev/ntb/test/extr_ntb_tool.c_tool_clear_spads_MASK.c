
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_ctx {int peer_cnt; TYPE_1__* peers; int inspads; } ;
struct TYPE_2__ {int outspads; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct tool_ctx *VAR_1)
{
 int VAR_2;


 FUNC_0(VAR_1->inspads, VAR_0);


 for (VAR_2 = 0; VAR_2 < VAR_1->peer_cnt; VAR_2++)
  FUNC_0(VAR_1->peers[VAR_2].outspads, VAR_0);
}
