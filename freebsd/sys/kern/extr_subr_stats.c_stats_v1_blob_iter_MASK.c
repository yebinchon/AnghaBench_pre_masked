
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct voistat {scalar_t__ stype; } ;
struct voi {scalar_t__ id; int voistatmaxid; int stats_off; } ;
struct statsblobv1 {struct voi* vois; } ;
struct sb_iter_ctx {int flags; int vslot; int vsslot; void* usrctx; } ;
typedef scalar_t__ (* stats_v1_blob_itercb_t ) (struct statsblobv1*,struct voi*,struct voistat*,struct sb_iter_ctx*) ;


 scalar_t__ FUNC_0 (struct statsblobv1*,int ) ;
 int FUNC_1 (struct statsblobv1*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(struct statsblobv1 *VAR_8, stats_v1_blob_itercb_t VAR_9,
    void *VAR_10, uint32_t VAR_11)
{
 struct voi *VAR_12;
 struct voistat *VAR_13;
 struct sb_iter_ctx VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_14.usrctx = VAR_10;
 VAR_14.flags |= VAR_0;
 VAR_14.flags &= ~(VAR_1 | VAR_4 | VAR_2 |
     VAR_5);
 VAR_17 = 1;

 for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_8); VAR_15++) {
  VAR_12 = &VAR_8->vois[VAR_15];
  VAR_14.vslot = VAR_15;
  VAR_14.vsslot = -1;
  VAR_14.flags |= VAR_2;

  if (VAR_17)
   VAR_14.flags |= VAR_1;
  else if (VAR_15 == (FUNC_1(VAR_8) - 1))
   VAR_14.flags |= VAR_4 | VAR_3;

  if (VAR_12->id < 0 && (VAR_11 & VAR_6)) {
   if (VAR_9(VAR_8, VAR_12, ((void*)0), &VAR_14))
    return;
   VAR_17 = 0;
   VAR_14.flags &= ~VAR_0;
  }


  for (VAR_16 = 0; VAR_16 <= VAR_12->voistatmaxid; VAR_16++) {
   VAR_13 = &((struct voistat *)FUNC_0(VAR_8,
       VAR_12->stats_off))[VAR_16];
   if (VAR_13->stype < 0 &&
       !(VAR_11 & VAR_7))
    continue;

   if (VAR_16 == VAR_12->voistatmaxid) {
    VAR_14.flags |= VAR_5;
    if (VAR_15 == (FUNC_1(VAR_8) - 1))
     VAR_14.flags |=
         VAR_3;
   } else
    VAR_14.flags &= ~VAR_3;

   VAR_14.vsslot = VAR_16;
   if (VAR_9(VAR_8, VAR_12, VAR_13, &VAR_14))
    return;

   VAR_14.flags &= ~(VAR_0 | VAR_2 |
       VAR_5);
  }
  VAR_14.flags &= ~(VAR_1 | VAR_4);
 }
}
