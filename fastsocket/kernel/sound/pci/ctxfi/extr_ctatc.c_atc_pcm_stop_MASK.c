
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct src {TYPE_1__* ops; } ;
struct ct_atc_pcm {int n_srcc; scalar_t__ started; struct src** srccs; struct src* src; int timer; } ;
struct ct_atc {int dummy; } ;
struct TYPE_2__ {int (* commit_write ) (struct src*) ;int (* set_state ) (struct src*,int ) ;int (* set_bm ) (struct src*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct src*,int ) ;
 int FUNC_2 (struct src*,int ) ;
 int FUNC_3 (struct src*) ;
 int FUNC_4 (struct src*,int ) ;
 int FUNC_5 (struct src*,int ) ;
 int FUNC_6 (struct src*) ;

__attribute__((used)) static int FUNC_7(struct ct_atc *VAR_1, struct ct_atc_pcm *VAR_2)
{
 struct src *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2->timer);

 VAR_3 = VAR_2->src;
 VAR_3->ops->set_bm(VAR_3, 0);
 VAR_3->ops->set_state(VAR_3, VAR_0);
 VAR_3->ops->commit_write(VAR_3);

 if (VAR_2->srccs) {
  for (VAR_4 = 0; VAR_4 < VAR_2->n_srcc; VAR_4++) {
   VAR_3 = VAR_2->srccs[VAR_4];
   VAR_3->ops->set_bm(VAR_3, 0);
   VAR_3->ops->set_state(VAR_3, VAR_0);
   VAR_3->ops->commit_write(VAR_3);
  }
 }

 VAR_2->started = 0;

 return 0;
}
