
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_status; int kn_kq; struct knlist* kn_knlist; } ;
struct knlist {int kl_lockarg; int (* kl_unlock ) (int ) ;int kl_list; int (* kl_lock ) (int ) ;} ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct knlist*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct knote*,int ) ;
 int FUNC_6 (struct knote*) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(struct knlist *VAR_2, struct knote *VAR_3, int VAR_4)
{

 FUNC_1(VAR_2, VAR_4);
 FUNC_3(VAR_3->kn_kq);
 FUNC_0(FUNC_6(VAR_3), ("knote %p not in flux", VAR_3));
 FUNC_0((VAR_3->kn_status & VAR_0) != 0,
     ("knote %p was not detached", VAR_3));
 if (!VAR_4)
  VAR_2->kl_lock(VAR_2->kl_lockarg);
 FUNC_5(&VAR_2->kl_list, VAR_3, VAR_1);
 if (!VAR_4)
  VAR_2->kl_unlock(VAR_2->kl_lockarg);
 FUNC_2(VAR_3->kn_kq);
 VAR_3->kn_knlist = VAR_2;
 VAR_3->kn_status &= ~VAR_0;
 FUNC_4(VAR_3->kn_kq);
}
