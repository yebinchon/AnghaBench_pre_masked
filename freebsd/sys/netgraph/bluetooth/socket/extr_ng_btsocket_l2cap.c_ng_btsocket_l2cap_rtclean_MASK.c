
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* ng_btsocket_l2cap_rtentry_p ;
typedef TYPE_2__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_14__ {int so_error; } ;
struct TYPE_13__ {int flags; int * hook; int pcb_mtx; TYPE_1__* rt; scalar_t__ cid; scalar_t__ token; TYPE_4__* so; int state; } ;
struct TYPE_12__ {int * hook; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_9, int VAR_10)
{
 ng_btsocket_l2cap_pcb_p VAR_11 = ((void*)0), VAR_12 = ((void*)0);
 ng_btsocket_l2cap_rtentry_p VAR_13 = ((void*)0);

 FUNC_8(&VAR_6);
 FUNC_8(&VAR_8);





 for (VAR_11 = FUNC_0(&VAR_7); VAR_11 != ((void*)0); ) {
  FUNC_8(&VAR_11->pcb_mtx);
  VAR_12 = FUNC_1(VAR_11, VAR_4);

  if (VAR_11->rt != ((void*)0) &&
      VAR_11->rt->hook != ((void*)0) && FUNC_3(VAR_11->rt->hook)) {
   if (VAR_11->flags & VAR_3)
    FUNC_10(VAR_11);

   VAR_11->so->so_error = VAR_0;
   VAR_11->state = VAR_2;
   FUNC_11(VAR_11->so);

   VAR_11->token = 0;
   VAR_11->cid = 0;
   VAR_11->rt = ((void*)0);
  }

  FUNC_9(&VAR_11->pcb_mtx);
  VAR_11 = VAR_12;
 }





 for (VAR_13 = FUNC_0(&VAR_5); VAR_13 != ((void*)0); ) {
  ng_btsocket_l2cap_rtentry_p VAR_14 = FUNC_1(VAR_13, VAR_4);

  if (VAR_13->hook != ((void*)0) && FUNC_3(VAR_13->hook)) {
   FUNC_2(VAR_13, VAR_4);

   FUNC_4(VAR_13->hook, ((void*)0));
   FUNC_5(VAR_13->hook);

   FUNC_6(VAR_13, sizeof(*VAR_13));
   FUNC_7(VAR_13, VAR_1);
  }

  VAR_13 = VAR_14;
 }

 FUNC_9(&VAR_8);
 FUNC_9(&VAR_6);
}
