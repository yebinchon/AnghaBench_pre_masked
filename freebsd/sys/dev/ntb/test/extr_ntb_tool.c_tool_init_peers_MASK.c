
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_ctx {int peer_cnt; TYPE_1__* peers; int dev; } ;
struct TYPE_2__ {int pidx; struct tool_ctx* tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct tool_ctx *VAR_4)
{
 int VAR_5;

 VAR_4->peer_cnt = FUNC_1(VAR_4->dev);
 VAR_4->peers = FUNC_0(VAR_4->peer_cnt * sizeof(*VAR_4->peers), VAR_1,
     VAR_2 | VAR_3);
 if (VAR_4->peers == ((void*)0))
  return (VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4->peer_cnt; VAR_5++) {
  VAR_4->peers[VAR_5].pidx = VAR_5;
  VAR_4->peers[VAR_5].tc = VAR_4;
 }

 return (0);
}
