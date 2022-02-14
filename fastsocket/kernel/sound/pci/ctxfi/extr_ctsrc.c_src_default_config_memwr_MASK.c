
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ctrl_blk; TYPE_1__* ops; struct hw* hw; } ;
struct src {TYPE_2__ rsc; } ;
struct hw {int (* src_commit_write ) (struct hw*,int ,int ) ;int (* src_set_clear_zbufs ) (int ,int) ;int (* src_set_pitch ) (int ,int) ;int (* src_set_ca ) (int ,int) ;int (* src_set_la ) (int ,int) ;int (* src_set_sa ) (int ,int) ;int (* src_set_cisz ) (int ,int) ;int (* src_set_ilsz ) (int ,int ) ;int (* src_set_st ) (int ,int ) ;int (* src_set_vo ) (int ,int ) ;int (* src_set_rom ) (int ,int ) ;int (* src_set_pm ) (int ,int ) ;int (* src_set_wr ) (int ,int) ;int (* src_set_sf ) (int ,int ) ;int (* src_set_rsr ) (int ,int ) ;int (* src_set_bm ) (int ,int) ;int (* src_set_state ) (int ,int ) ;} ;
struct TYPE_4__ {int (* index ) (TYPE_2__*) ;int (* master ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct hw*,int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static int FUNC_19(struct src *VAR_2)
{
 struct hw *VAR_3 = VAR_2->rsc.hw;

 VAR_3->src_set_state(VAR_2->rsc.ctrl_blk, VAR_1);
 VAR_3->src_set_bm(VAR_2->rsc.ctrl_blk, 1);
 VAR_3->src_set_rsr(VAR_2->rsc.ctrl_blk, 0);
 VAR_3->src_set_sf(VAR_2->rsc.ctrl_blk, VAR_0);
 VAR_3->src_set_wr(VAR_2->rsc.ctrl_blk, 1);
 VAR_3->src_set_pm(VAR_2->rsc.ctrl_blk, 0);
 VAR_3->src_set_rom(VAR_2->rsc.ctrl_blk, 0);
 VAR_3->src_set_vo(VAR_2->rsc.ctrl_blk, 0);
 VAR_3->src_set_st(VAR_2->rsc.ctrl_blk, 0);
 VAR_3->src_set_ilsz(VAR_2->rsc.ctrl_blk, 0);
 VAR_3->src_set_cisz(VAR_2->rsc.ctrl_blk, 0x80);
 VAR_3->src_set_sa(VAR_2->rsc.ctrl_blk, 0x0);
 VAR_3->src_set_la(VAR_2->rsc.ctrl_blk, 0x1000);
 VAR_3->src_set_ca(VAR_2->rsc.ctrl_blk, 0x80);
 VAR_3->src_set_pitch(VAR_2->rsc.ctrl_blk, 0x1000000);
 VAR_3->src_set_clear_zbufs(VAR_2->rsc.ctrl_blk, 1);

 VAR_2->rsc.ops->master(&VAR_2->rsc);
 VAR_3->src_commit_write(VAR_3, VAR_2->rsc.ops->index(&VAR_2->rsc),
      VAR_2->rsc.ctrl_blk);

 return 0;
}
