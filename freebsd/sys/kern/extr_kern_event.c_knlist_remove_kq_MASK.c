
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct knote {int kn_status; TYPE_1__* kn_kq; int * kn_knlist; } ;
struct knlist {int kl_list; int kl_lockarg; int (* kl_lock ) (int ) ;} ;
struct TYPE_3__ {int kq_lock; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct knlist*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,struct knote*,int ,int ) ;
 scalar_t__ FUNC_5 (struct knote*) ;
 int FUNC_6 (struct knlist*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct knlist *VAR_5, struct knote *VAR_6, int VAR_7,
    int VAR_8)
{

 FUNC_0(!VAR_8 || VAR_7, ("kq locked w/o knl locked"));
 FUNC_1(VAR_5, VAR_7);
 FUNC_7(&VAR_6->kn_kq->kq_lock, VAR_8 ? VAR_2 : VAR_1);
 FUNC_0(VAR_8 || FUNC_5(VAR_6), ("knote %p not in flux", VAR_6));
 FUNC_0((VAR_6->kn_status & VAR_0) == 0,
     ("knote %p was already detached", VAR_6));
 if (!VAR_7)
  VAR_5->kl_lock(VAR_5->kl_lockarg);
 FUNC_4(&VAR_5->kl_list, VAR_6, VAR_4, VAR_3);
 VAR_6->kn_knlist = ((void*)0);
 if (!VAR_7)
  FUNC_6(VAR_5);
 if (!VAR_8)
  FUNC_2(VAR_6->kn_kq);
 VAR_6->kn_status |= VAR_0;
 if (!VAR_8)
  FUNC_3(VAR_6->kn_kq);
}
