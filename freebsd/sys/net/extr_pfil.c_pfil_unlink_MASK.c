
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pfil_link_args {int pa_flags; } ;
struct pfil_link {int link_epoch_ctx; } ;
typedef TYPE_1__* pfil_hook_t ;
typedef TYPE_2__* pfil_head_t ;
struct TYPE_7__ {int head_nhooksout; int head_out; int head_nhooksin; int head_in; } ;
struct TYPE_6__ {int hook_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_4 ;
 struct pfil_link* FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct pfil_link_args *VAR_5, pfil_head_t VAR_6, pfil_hook_t VAR_7)
{
 struct pfil_link *VAR_8, *VAR_9;

 FUNC_0();

 if (VAR_5->pa_flags & VAR_2) {
  VAR_8 = FUNC_3(&VAR_6->head_in, VAR_7);
  if (VAR_8 != ((void*)0)) {
   VAR_6->head_nhooksin--;
   VAR_7->hook_links--;
  }
 } else
  VAR_8 = ((void*)0);
 if (VAR_5->pa_flags & VAR_3) {
  VAR_9 = FUNC_3(&VAR_6->head_out, VAR_7);
  if (VAR_9 != ((void*)0)) {
   VAR_6->head_nhooksout--;
   VAR_7->hook_links--;
  }
 } else
  VAR_9 = ((void*)0);
 FUNC_1();

 if (VAR_8 != ((void*)0))
  FUNC_2(VAR_1, &VAR_8->link_epoch_ctx, VAR_4);
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_1, &VAR_9->link_epoch_ctx, VAR_4);

 if (VAR_8 == ((void*)0) && VAR_9 == ((void*)0))
  return (VAR_0);
 else
  return (0);
}
