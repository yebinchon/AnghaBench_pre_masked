
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct voistat {size_t stype; size_t dtype; int dsz; int data_off; int flags; int errs; } ;
struct voi {size_t id; size_t dtype; int stats_off; int voistatmaxid; int flags; } ;
struct statsblobv1 {int tplhash; int statsdata_off; int stats_off; int flags; int lastrst; int created; int cursz; int maxsz; int endian; int abi; } ;
struct sbuf {int dummy; } ;
struct sb_tostrcb_ctx {int flags; int fmt; TYPE_1__* tpl; struct sbuf* buf; } ;
struct sb_iter_ctx {int flags; int vsslot; int vslot; struct sb_tostrcb_ctx* usrctx; } ;
struct metablob {TYPE_2__* voi_meta; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {struct metablob* mb; } ;


 void* FUNC_0 (struct statsblobv1*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sbuf*,char*,...) ;
 int FUNC_2 (void*,size_t,size_t,int ,int ,struct sbuf*,int) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct statsblobv1 *VAR_5, struct voi *VAR_6,
    struct voistat *VAR_7, struct sb_iter_ctx *VAR_8)
{
 struct sb_tostrcb_ctx *VAR_9;
 struct metablob *VAR_10;
 struct sbuf *VAR_11;
 void *VAR_12;
 uint8_t VAR_13;

 VAR_9 = VAR_8->usrctx;
 VAR_11 = VAR_9->buf;
 VAR_10 = VAR_9->tpl ? VAR_9->tpl->mb : ((void*)0);
 VAR_13 = ((VAR_9->flags & VAR_2) != 0);

 if (VAR_8->flags & VAR_0) {
  FUNC_1(VAR_11, "struct statsblobv1@%p", VAR_5);
  if (VAR_13) {
   FUNC_1(VAR_11, ", abi=%hhu, endian=%hhu, maxsz=%hu, "
       "cursz=%hu, created=%jd, lastrst=%jd, flags=0x%04hx, "
       "stats_off=%hu, statsdata_off=%hu",
       VAR_5->abi, VAR_5->endian, VAR_5->maxsz, VAR_5->cursz,
       VAR_5->created, VAR_5->lastrst, VAR_5->flags, VAR_5->stats_off,
       VAR_5->statsdata_off);
  }
  FUNC_1(VAR_11, ", tplhash=%u", VAR_5->tplhash);
 }

 if (VAR_8->flags & VAR_1) {
  FUNC_1(VAR_11, "\n\tvois[%hd]: id=%hd", VAR_8->vslot, VAR_6->id);
  if (VAR_6->id < 0)
   return;
  FUNC_1(VAR_11, ", name=\"%s\"", (VAR_10 == ((void*)0)) ? "" :
      VAR_10->voi_meta[VAR_6->id].name);
  if (VAR_13)
      FUNC_1(VAR_11, ", flags=0x%04hx, dtype=%s, "
      "voistatmaxid=%hhd, stats_off=%hu", VAR_6->flags,
      VAR_4[VAR_6->dtype], VAR_6->voistatmaxid, VAR_6->stats_off);
 }

 if (!VAR_13 && VAR_7->stype <= 0)
  return;

 FUNC_1(VAR_11, "\n\t\tvois[%hd]stat[%hhd]: stype=", VAR_6->id, VAR_8->vsslot);
 if (VAR_7->stype < 0) {
  FUNC_1(VAR_11, "%hhd", VAR_7->stype);
  return;
 } else
  FUNC_1(VAR_11, "%s, errs=%hu", VAR_3[VAR_7->stype],
      VAR_7->errs);
 VAR_12 = FUNC_0(VAR_5, VAR_7->data_off);
 if (VAR_13)
  FUNC_1(VAR_11, ", flags=0x%04x, dtype=%s, dsz=%hu, "
      "data_off=%hu", VAR_7->flags, VAR_4[VAR_7->dtype],
      VAR_7->dsz, VAR_7->data_off);

 FUNC_1(VAR_11, "\n\t\t\tvoistatdata: ");
 FUNC_2(VAR_12, VAR_6->dtype, VAR_7->dtype, VAR_7->dsz,
     VAR_9->fmt, VAR_11, VAR_13);
}
