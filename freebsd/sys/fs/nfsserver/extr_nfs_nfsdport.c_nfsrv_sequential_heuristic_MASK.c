
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct vnode {TYPE_2__* v_mount; } ;
struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct nfsheur {scalar_t__ nh_use; scalar_t__ nh_nextoff; int nh_seqcount; struct vnode* nh_vp; } ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 struct nfsheur* VAR_6 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct nfsheur *
FUNC_3(struct uio *VAR_7, struct vnode *VAR_8)
{
 struct nfsheur *VAR_9;
 int VAR_10, VAR_11;


 VAR_11 = 32;
 VAR_10 = ((int)(vm_offset_t)VAR_8 / sizeof(struct vnode)) % VAR_5;
 VAR_9 = &VAR_6[VAR_10];
 while (VAR_11--) {
  if (VAR_6[VAR_10].nh_vp == VAR_8) {
   VAR_9 = &VAR_6[VAR_10];
   break;
  }
  if (VAR_6[VAR_10].nh_use > 0)
   --VAR_6[VAR_10].nh_use;
  VAR_10 = (VAR_10 + 1) % VAR_5;
  if (VAR_6[VAR_10].nh_use < VAR_9->nh_use)
   VAR_9 = &VAR_6[VAR_10];
 }


 if (VAR_9->nh_vp != VAR_8) {
  VAR_9->nh_vp = VAR_8;
  VAR_9->nh_nextoff = VAR_7->uio_offset;
  VAR_9->nh_use = VAR_3;
  if (VAR_7->uio_offset == 0)
   VAR_9->nh_seqcount = 4;
  else
   VAR_9->nh_seqcount = 1;
 }


 if ((VAR_7->uio_offset == 0 && VAR_9->nh_seqcount > 0) ||
     VAR_7->uio_offset == VAR_9->nh_nextoff) {

  VAR_9->nh_seqcount += FUNC_0(VAR_7->uio_resid, 16384);
  if (VAR_9->nh_seqcount > VAR_0)
   VAR_9->nh_seqcount = VAR_0;
 } else if (FUNC_2(VAR_7->uio_offset - VAR_9->nh_nextoff) <= VAR_1 *
     FUNC_1(VAR_8->v_mount->mnt_stat.f_iosize, VAR_7->uio_resid)) {

 } else if (VAR_9->nh_seqcount > 1) {
  VAR_9->nh_seqcount /= 2;
 } else {
  VAR_9->nh_seqcount = 0;
 }
 VAR_9->nh_use += VAR_2;
 if (VAR_9->nh_use > VAR_4)
  VAR_9->nh_use = VAR_4;
 return (VAR_9);
}
