
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_event_notifier {int (* fcn ) (unsigned long,struct nf_ct_event*) ;} ;
struct nf_ct_event {int report; int pid; struct nf_conn* ct; } ;
struct nf_conntrack_ecache {unsigned long missed; int cache; } ;
struct nf_conn {int lock; } ;


 int VAR_0 ;
 struct nf_conntrack_ecache* FUNC_0 (struct nf_conn*) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*) ;
 struct nf_ct_event_notifier* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long,struct nf_ct_event*) ;
 scalar_t__ FUNC_9 (int) ;
 unsigned long FUNC_10 (int *,int ) ;

void FUNC_11(struct nf_conn *VAR_1)
{
 unsigned long VAR_2;
 struct nf_ct_event_notifier *VAR_3;
 struct nf_conntrack_ecache *VAR_4;

 FUNC_4();
 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 == ((void*)0))
  goto out_unlock;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == ((void*)0))
  goto out_unlock;

 VAR_2 = FUNC_10(&VAR_4->cache, 0);

 if (FUNC_1(VAR_1) && !FUNC_2(VAR_1) && VAR_2) {
  struct nf_ct_event VAR_5 = {
   .ct = VAR_1,
   .pid = 0,
   .report = 0
  };
  int VAR_6;



  unsigned long VAR_7 = VAR_4->missed;

  VAR_6 = VAR_3->fcn(VAR_2 | VAR_7, &VAR_5);
  if (FUNC_9(VAR_6 < 0 || VAR_7)) {
   FUNC_6(&VAR_1->lock);
   if (VAR_6 < 0)
    VAR_4->missed |= VAR_2;
   else
    VAR_4->missed &= ~VAR_7;
   FUNC_7(&VAR_1->lock);
  }
 }

out_unlock:
 FUNC_5();
}
