
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_mw {int widx; int pidx; int addr_limit; int xlat_align_size; int xlat_align; int phys_size; int mm_base; int phys_addr; int mw_buf_size; int mw_buf_offset; struct tool_ctx* tc; } ;
struct tool_ctx {int peer_cnt; int dev; TYPE_1__* peers; } ;
struct TYPE_2__ {int inmw_cnt; struct tool_mw* inmws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tool_mw* FUNC_0 (int,int ,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (struct tool_ctx*) ;

__attribute__((used)) static int
FUNC_5(struct tool_ctx *VAR_6)
{
 struct tool_mw *VAR_7;
 int VAR_8, VAR_9, VAR_10;


 for (VAR_9 = 0; VAR_9 < VAR_6->peer_cnt; VAR_9++) {
  VAR_6->peers[VAR_9].inmw_cnt = FUNC_2(VAR_6->dev);
  VAR_6->peers[VAR_9].inmws = FUNC_0(VAR_6->peers[VAR_9].inmw_cnt *
      sizeof(*VAR_6->peers[VAR_9].inmws), VAR_3,
      VAR_4 | VAR_5);
  if (VAR_6->peers[VAR_9].inmws == ((void*)0))
   return (VAR_2);

  for (VAR_8 = 0; VAR_8 < VAR_6->peers[VAR_9].inmw_cnt; VAR_8++) {
   VAR_7 = &VAR_6->peers[VAR_9].inmws[VAR_8];
   FUNC_1((void *)VAR_7, 0, sizeof(*VAR_7));
   VAR_7->tc = VAR_6;
   VAR_7->widx = VAR_8;
   VAR_7->pidx = VAR_9;
   VAR_7->mw_buf_offset = VAR_0;
   VAR_7->mw_buf_size = VAR_1;

   VAR_10 = FUNC_3(VAR_6->dev, VAR_8, &VAR_7->phys_addr,
       &VAR_7->mm_base, &VAR_7->phys_size, &VAR_7->xlat_align,
       &VAR_7->xlat_align_size, &VAR_7->addr_limit);
   if (VAR_10)
    goto free_mws;
  }
 }

 return (0);

free_mws:
 FUNC_4(VAR_6);
 return (VAR_10);
}
