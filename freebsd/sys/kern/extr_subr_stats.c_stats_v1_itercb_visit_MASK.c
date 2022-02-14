
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voistat {int errs; int data_off; int dsz; int dtype; int stype; } ;
struct voi {int dtype; int id; } ;
struct statsblobv1 {int tplhash; } ;
struct sb_visitcb_ctx {int (* cb ) (struct sb_visit*,int ) ;int usrctx; } ;
struct sb_visit {int flags; int vs_errs; int vs_data; int vs_dsz; int vs_dtype; int vs_stype; int voi_dtype; int voi_id; int tplhash; } ;
struct sb_iter_ctx {int flags; struct sb_visitcb_ctx* usrctx; } ;


 int FUNC_0 (struct statsblobv1*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sb_visit*,int ) ;

__attribute__((used)) static int
FUNC_2(struct statsblobv1 *VAR_6, struct voi *VAR_7,
    struct voistat *VAR_8, struct sb_iter_ctx *VAR_9)
{
 struct sb_visitcb_ctx *VAR_10;
 struct sb_visit VAR_11;

 VAR_10 = VAR_9->usrctx;

 VAR_11.tplhash = VAR_6->tplhash;
 VAR_11.voi_id = VAR_7->id;
 VAR_11.voi_dtype = VAR_7->dtype;
 VAR_11.vs_stype = VAR_8->stype;
 VAR_11.vs_dtype = VAR_8->dtype;
 VAR_11.vs_dsz = VAR_8->dsz;
 VAR_11.vs_data = FUNC_0(VAR_6, VAR_8->data_off);
 VAR_11.vs_errs = VAR_8->errs;
 VAR_11.flags = VAR_9->flags & (VAR_0 | VAR_3 |
     VAR_1 | VAR_4 | VAR_2 |
     VAR_5);

 return (VAR_10->cb(&VAR_11, VAR_10->usrctx));
}
