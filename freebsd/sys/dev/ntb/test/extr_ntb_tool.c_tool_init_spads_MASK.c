
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tool_ctx {int inspad_cnt; int peer_cnt; TYPE_3__* peers; int dev; TYPE_1__* inspads; } ;
struct TYPE_6__ {int outspad_cnt; TYPE_2__* outspads; } ;
struct TYPE_5__ {int sidx; int pidx; struct tool_ctx* tc; } ;
struct TYPE_4__ {int sidx; int pidx; struct tool_ctx* tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int ,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct tool_ctx *VAR_4)
{
 int VAR_5, VAR_6;


 VAR_4->inspad_cnt = FUNC_1(VAR_4->dev);
 VAR_4->inspads = FUNC_0(VAR_4->inspad_cnt * sizeof(*VAR_4->inspads), VAR_1,
     VAR_2 | VAR_3);
 if (VAR_4->inspads == ((void*)0))
  return (VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_4->inspad_cnt; VAR_5++) {
  VAR_4->inspads[VAR_5].sidx = VAR_5;
  VAR_4->inspads[VAR_5].pidx = -1;
  VAR_4->inspads[VAR_5].tc = VAR_4;
 }


 for (VAR_6 = 0; VAR_6 < VAR_4->peer_cnt; VAR_6++) {
  VAR_4->peers[VAR_6].outspad_cnt = FUNC_1(VAR_4->dev);
  VAR_4->peers[VAR_6].outspads = FUNC_0(VAR_4->peers[VAR_6].outspad_cnt *
      sizeof(*VAR_4->peers[VAR_6].outspads), VAR_1, VAR_2 |
      VAR_3);
  if (VAR_4->peers[VAR_6].outspads == ((void*)0))
   return (VAR_0);

  for (VAR_5 = 0; VAR_5 < VAR_4->peers[VAR_6].outspad_cnt; VAR_5++) {
   VAR_4->peers[VAR_6].outspads[VAR_5].sidx = VAR_5;
   VAR_4->peers[VAR_6].outspads[VAR_5].pidx = VAR_6;
   VAR_4->peers[VAR_6].outspads[VAR_5].tc = VAR_4;
  }
 }

 return (0);
}
