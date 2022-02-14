
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct vop_cachedlookup_args {TYPE_3__* a_cnp; struct vnode* a_dvp; struct vnode** a_vpp; } ;
struct vnode {int dummy; } ;
struct udf_node {int diroff; scalar_t__ hash_id; TYPE_1__* fentry; struct udf_mnt* udfmp; } ;
struct udf_mnt {int im_mountp; } ;
struct udf_dirstream {int error; int offset; int off; } ;
struct fileid_desc {int file_char; scalar_t__ l_fi; size_t l_iu; int icb; int * data; int tag; } ;
typedef scalar_t__ ino_t ;
struct TYPE_6__ {scalar_t__ cn_nameiop; scalar_t__ cn_flags; int cn_lkflags; char* cn_nameptr; long cn_namelen; } ;
struct TYPE_5__ {int ncs_pass2; int ncs_2passes; } ;
struct TYPE_4__ {int inf_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 struct udf_node* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,struct vnode*,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_17 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (struct udf_dirstream*) ;
 int FUNC_8 (int *,char*,scalar_t__,long,struct udf_mnt*) ;
 struct fileid_desc* FUNC_9 (struct udf_dirstream*) ;
 scalar_t__ FUNC_10 (int *) ;
 struct udf_dirstream* FUNC_11 (struct udf_node*,int,int,struct udf_mnt*) ;
 int FUNC_12 (int ,scalar_t__,int,struct vnode**) ;
 int FUNC_13 (struct vnode*,int) ;
 int FUNC_14 (struct vnode*,scalar_t__,int,struct vnode**) ;

__attribute__((used)) static int
FUNC_15(struct vop_cachedlookup_args *VAR_18)
{
 struct vnode *VAR_19;
 struct vnode *VAR_20 = ((void*)0);
 struct vnode **VAR_21 = VAR_18->a_vpp;
 struct udf_node *VAR_22;
 struct udf_mnt *VAR_23;
 struct fileid_desc *VAR_24 = ((void*)0);
 struct udf_dirstream *VAR_25;
 u_long VAR_26;
 u_long VAR_27;
 char *VAR_28;
 long VAR_29;
 ino_t VAR_30 = 0;
 int VAR_31, VAR_32 = 0;
 int VAR_33, VAR_34, VAR_35, VAR_36;

 VAR_19 = VAR_18->a_dvp;
 VAR_22 = FUNC_2(VAR_19);
 VAR_23 = VAR_22->udfmp;
 VAR_26 = VAR_18->a_cnp->cn_nameiop;
 VAR_27 = VAR_18->a_cnp->cn_flags;
 VAR_34 = VAR_18->a_cnp->cn_lkflags;
 VAR_28 = VAR_18->a_cnp->cn_nameptr;
 VAR_29 = VAR_18->a_cnp->cn_namelen;
 VAR_33 = FUNC_4(VAR_22->fentry->inf_len);







 if (VAR_26 != VAR_11 || VAR_22->diroff == 0 || VAR_22->diroff > VAR_33) {
  VAR_31 = 0;
  VAR_36 = 1;
 } else {
  VAR_31 = VAR_22->diroff;
  VAR_36 = 2;
  VAR_17.ncs_2passes++;
 }

lookloop:
 VAR_25 = FUNC_11(VAR_22, VAR_31, VAR_33, VAR_23);

 while ((VAR_24 = FUNC_9(VAR_25)) != ((void*)0)) {


  if (FUNC_6(&VAR_24->tag, VAR_14)) {
   FUNC_5("udf_lookup: Invalid tag\n");
   VAR_32 = VAR_1;
   break;
  }


  if (VAR_24->file_char & VAR_15)
   continue;

  if ((VAR_24->l_fi == 0) && (VAR_24->file_char & VAR_16)) {
   if (VAR_27 & VAR_4) {
    VAR_30 = FUNC_10(&VAR_24->icb);
    break;
   }
  } else {
   if (!(FUNC_8(&VAR_24->data[VAR_24->l_iu],
       VAR_28, VAR_24->l_fi, VAR_29, VAR_23))) {
    VAR_30 = FUNC_10(&VAR_24->icb);
    break;
   }
  }
 }

 if (!VAR_32)
  VAR_32 = VAR_25->error;


 if (VAR_32) {
  FUNC_7(VAR_25);
  return (VAR_32);
 }


 if (VAR_30) {




  if ((VAR_27 & VAR_5) && VAR_26 == VAR_11)
   VAR_22->diroff = VAR_25->offset + VAR_25->off;
  if (VAR_36 == 2)
   VAR_17.ncs_pass2++;
  FUNC_7(VAR_25);

  if (VAR_27 & VAR_4) {
   VAR_32 = FUNC_14(VAR_19, VAR_30, VAR_34, &VAR_20);
  } else if (VAR_22->hash_id == VAR_30) {
   FUNC_1(VAR_19);




   VAR_35 = VAR_34 & VAR_9;
   if (VAR_35 != FUNC_0(VAR_19)) {
    if (VAR_35 == VAR_7)
     FUNC_13(VAR_19, VAR_10 | VAR_8);
    else
     FUNC_13(VAR_19, VAR_6 | VAR_8);
   }
   VAR_20 = VAR_19;
  } else
   VAR_32 = FUNC_12(VAR_23->im_mountp, VAR_30, VAR_34, &VAR_20);
  if (!VAR_32) {
   *VAR_21 = VAR_20;

   if (VAR_27 & VAR_12)
    FUNC_3(VAR_19, *VAR_21, VAR_18->a_cnp);
  }
 } else {

  if (VAR_36 == 2) {
   VAR_36--;
   VAR_31 = 0;
   FUNC_7(VAR_25);
   goto lookloop;
  }
  FUNC_7(VAR_25);


  if (VAR_27 & VAR_12)
   FUNC_3(VAR_19, *VAR_21, VAR_18->a_cnp);

  if ((VAR_27 & VAR_5) &&
      (VAR_26 == VAR_0 || VAR_26 == VAR_13)) {
   VAR_32 = VAR_3;
  } else {
   VAR_32 = VAR_2;
  }
 }

 return (VAR_32);
}
