
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct src_mgr {int (* commit_write ) (struct src_mgr*) ;int (* src_enable_s ) (struct src_mgr*,struct src*) ;int (* src_disable ) (struct src_mgr*,struct src*) ;} ;
struct src {TYPE_4__* ops; } ;
struct ct_atc_pcm {int started; int n_srcc; int timer; struct src* src; struct src** srccs; TYPE_3__* vm_block; TYPE_2__* substream; } ;
struct ct_atc {struct src_mgr** rsc_mgrs; } ;
struct TYPE_8__ {int (* commit_write ) (struct src*) ;int (* set_state ) (struct src*,int ) ;int (* set_bm ) (struct src*,int) ;int (* set_ca ) (struct src*,scalar_t__) ;int (* set_la ) (struct src*,scalar_t__) ;int (* set_sa ) (struct src*,scalar_t__) ;int (* set_sf ) (struct src*,int ) ;int (* set_pm ) (struct src*,int) ;} ;
struct TYPE_7__ {scalar_t__ addr; scalar_t__ size; } ;
struct TYPE_6__ {TYPE_1__* runtime; } ;
struct TYPE_5__ {int channels; int format; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct src*,int) ;
 int FUNC_3 (struct src*) ;
 int FUNC_4 (struct src_mgr*,struct src*) ;
 int FUNC_5 (struct src*,int) ;
 int FUNC_6 (struct src*,int ) ;
 int FUNC_7 (struct src*) ;
 int FUNC_8 (struct src_mgr*,struct src*) ;
 int FUNC_9 (struct src_mgr*) ;
 int FUNC_10 (struct src_mgr*,struct src*) ;
 int FUNC_11 (struct src*,int ) ;
 int FUNC_12 (struct src*,scalar_t__) ;
 int FUNC_13 (struct src*,scalar_t__) ;
 int FUNC_14 (struct src*,scalar_t__) ;
 int FUNC_15 (struct src_mgr*,struct src*) ;
 int FUNC_16 (struct src_mgr*) ;
 int FUNC_17 (struct src*,int ) ;

__attribute__((used)) static int FUNC_18(struct ct_atc *VAR_2, struct ct_atc_pcm *VAR_3)
{
 struct src *VAR_4;
 struct src_mgr *VAR_5 = VAR_2->rsc_mgrs[VAR_0];
 int VAR_6, VAR_7;

 if (VAR_3->started)
  return 0;

 VAR_3->started = 1;
 VAR_7 = VAR_3->substream->runtime->channels;

 for (VAR_6 = 0; VAR_6 < VAR_3->n_srcc; VAR_6++) {
  VAR_4 = VAR_3->srccs[VAR_6];
  VAR_4->ops->set_pm(VAR_4, ((VAR_6%VAR_7) != (VAR_7-1)));
  VAR_5->src_disable(VAR_5, VAR_4);
 }


 VAR_4 = VAR_3->src;
 VAR_4->ops->set_sf(VAR_4, FUNC_0(VAR_3->substream->runtime->format));
 VAR_4->ops->set_sa(VAR_4, VAR_3->vm_block->addr);
 VAR_4->ops->set_la(VAR_4, VAR_3->vm_block->addr + VAR_3->vm_block->size);
 VAR_4->ops->set_ca(VAR_4, VAR_3->vm_block->addr);
 VAR_5->src_disable(VAR_5, VAR_4);


 VAR_5->commit_write(VAR_5);


 for (VAR_6 = 0; VAR_6 < VAR_3->n_srcc; VAR_6++) {
  VAR_4 = VAR_3->srccs[VAR_6];
  VAR_4->ops->set_state(VAR_4, VAR_1);
  VAR_4->ops->commit_write(VAR_4);
  VAR_5->src_enable_s(VAR_5, VAR_4);
 }
 VAR_4 = VAR_3->src;
 VAR_4->ops->set_bm(VAR_4, 1);
 VAR_4->ops->set_state(VAR_4, VAR_1);
 VAR_4->ops->commit_write(VAR_4);
 VAR_5->src_enable_s(VAR_5, VAR_4);


 VAR_5->commit_write(VAR_5);

 FUNC_1(VAR_3->timer);
 return 0;
}
