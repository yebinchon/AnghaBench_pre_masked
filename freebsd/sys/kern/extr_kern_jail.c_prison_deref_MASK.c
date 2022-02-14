
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prison {scalar_t__ pr_uref; int pr_ref; scalar_t__ pr_vnet; int pr_mtx; int * pr_cpuset; struct prison* pr_ip6; struct prison* pr_ip4; int * pr_root; int pr_childcount; struct prison* pr_parent; int pr_id; } ;
struct TYPE_2__ {scalar_t__ pr_uref; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct prison*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,struct prison*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct prison*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct prison*,int ,int *) ;
 int FUNC_9 (struct prison*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_10 (struct prison*) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(struct prison *VAR_13, int VAR_14)
{
 struct prison *VAR_15, *VAR_16;
 int VAR_17, VAR_18;

 if (!(VAR_14 & VAR_5))
  FUNC_6(&VAR_13->pr_mtx);
 for (;;) {
  if (VAR_14 & VAR_2) {
   FUNC_0(VAR_13->pr_uref > 0,
       ("prison_deref PD_DEUREF on a dead prison (jid=%d)",
        VAR_13->pr_id));
   VAR_13->pr_uref--;
   VAR_18 = VAR_13->pr_uref == 0;
   if (VAR_18)
    VAR_13->pr_ref++;
   FUNC_0(VAR_11 != 0, ("prison0 pr_uref=0"));
  } else
   VAR_18 = 0;
  if (VAR_14 & VAR_1) {
   FUNC_0(VAR_13->pr_ref > 0,
       ("prison_deref PD_DEREF on a dead prison (jid=%d)",
        VAR_13->pr_id));
   VAR_13->pr_ref--;
  }
  VAR_17 = VAR_13->pr_ref;
  FUNC_7(&VAR_13->pr_mtx);





  if (VAR_18) {
   if (!(VAR_14 & (VAR_3 | VAR_4))) {
    FUNC_13(&VAR_8);
    VAR_14 |= VAR_4;
   }
   (void)FUNC_8(VAR_13, VAR_6, ((void*)0));
   FUNC_6(&VAR_13->pr_mtx);
   VAR_17 = --VAR_13->pr_ref;
   FUNC_7(&VAR_13->pr_mtx);
  }


  if (VAR_17 > 0) {
   if (VAR_14 & VAR_3)
    FUNC_11(&VAR_8);
   else if (VAR_14 & VAR_4)
    FUNC_14(&VAR_8);
   return;
  }

  if (VAR_14 & VAR_3) {
   if (!FUNC_12(&VAR_8)) {
    FUNC_11(&VAR_8);
    FUNC_13(&VAR_8);
   }
  } else if (!(VAR_14 & VAR_4))
   FUNC_13(&VAR_8);

  FUNC_2(&VAR_7, VAR_13, VAR_9);
  FUNC_1(VAR_13, VAR_10);
  VAR_15 = VAR_13->pr_parent;
  for (VAR_16 = VAR_15; VAR_16 != ((void*)0); VAR_16 = VAR_16->pr_parent)
   VAR_16->pr_childcount--;
  FUNC_14(&VAR_8);





  if (VAR_13->pr_root != ((void*)0))
   FUNC_16(VAR_13->pr_root);
  FUNC_5(&VAR_13->pr_mtx);






  if (VAR_13->pr_cpuset != ((void*)0))
   FUNC_3(VAR_13->pr_cpuset);
  FUNC_9(VAR_13);




  FUNC_4(VAR_13, VAR_0);


  VAR_13 = VAR_15;
  FUNC_6(&VAR_13->pr_mtx);
  VAR_14 = VAR_1 | VAR_2;
 }
}
