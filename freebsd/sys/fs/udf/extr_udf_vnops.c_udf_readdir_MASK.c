
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vop_readdir_args {int* a_eofflag; int ** a_cookies; scalar_t__* a_ncookies; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct uio {int uio_resid; scalar_t__ uio_offset; } ;
struct udf_uiodir {int eofflag; int ncookies; scalar_t__ acookies; struct dirent* dirent; int * cookies; } ;
struct udf_node {void* hash_id; struct udf_mnt* udfmp; TYPE_1__* fentry; } ;
struct udf_mnt {int dummy; } ;
struct udf_dirstream {int this_off; int error; scalar_t__ off; scalar_t__ offset; } ;
struct fileid_desc {int file_char; scalar_t__ l_fi; size_t l_iu; int icb; int * data; int tag; } ;
struct dirent {char* d_name; int d_namlen; int d_off; void* d_reclen; void* d_type; void* d_fileno; } ;
struct TYPE_2__ {int inf_len; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct dirent*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct udf_node* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct dirent*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct fileid_desc*,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (struct udf_dirstream*) ;
 struct fileid_desc* FUNC_10 (struct udf_dirstream*) ;
 void* FUNC_11 (int *) ;
 struct udf_dirstream* FUNC_12 (struct udf_node*,scalar_t__,int ,struct udf_mnt*) ;
 int FUNC_13 (int *,char*,scalar_t__,struct udf_mnt*) ;
 int FUNC_14 (struct udf_uiodir*,void*,struct uio*,int) ;

__attribute__((used)) static int
FUNC_15(struct vop_readdir_args *VAR_11)
{
 struct vnode *VAR_12;
 struct uio *VAR_13;
 struct dirent VAR_14;
 struct udf_node *VAR_15;
 struct udf_mnt *VAR_16;
 struct fileid_desc *VAR_17;
 struct udf_uiodir VAR_18;
 struct udf_dirstream *VAR_19;
 u_long *VAR_20 = ((void*)0);
 int VAR_21;
 int VAR_22 = 0;

 VAR_12 = VAR_11->a_vp;
 VAR_13 = VAR_11->a_uio;
 VAR_15 = FUNC_1(VAR_12);
 VAR_16 = VAR_15->udfmp;
 VAR_18.eofflag = 1;

 if (VAR_11->a_ncookies != ((void*)0)) {





  VAR_21 = VAR_13->uio_resid / 8;
  VAR_20 = FUNC_6(sizeof(u_long) * VAR_21,
      VAR_4, VAR_5);
  if (VAR_20 == ((void*)0))
   return (VAR_3);
  VAR_18.ncookies = VAR_21;
  VAR_18.cookies = VAR_20;
  VAR_18.acookies = 0;
 } else {
  VAR_18.cookies = ((void*)0);
 }





 VAR_19 = FUNC_12(VAR_15, VAR_13->uio_offset, FUNC_5(VAR_15->fentry->inf_len),
     VAR_15->udfmp);

 while ((VAR_17 = FUNC_10(VAR_19)) != ((void*)0)) {


  if (FUNC_8(&VAR_17->tag, VAR_6)) {
   FUNC_7("Invalid FID tag\n");
   FUNC_4(VAR_17, VAR_7, ((void*)0), 0);
   VAR_22 = VAR_2;
   break;
  }


  if (VAR_17->file_char & VAR_8)
   continue;

  if ((VAR_17->l_fi == 0) && (VAR_17->file_char & VAR_10)) {




   VAR_14.d_fileno = VAR_15->hash_id;
   VAR_14.d_type = VAR_0;
   VAR_14.d_name[0] = '.';
   VAR_14.d_namlen = 1;
   VAR_14.d_reclen = FUNC_0(&VAR_14);
   VAR_14.d_off = 1;
   FUNC_2(&VAR_14);
   VAR_18.dirent = &VAR_14;
   VAR_22 = FUNC_14(&VAR_18, VAR_14.d_reclen, VAR_13, 1);
   if (VAR_22)
    break;

   VAR_14.d_fileno = FUNC_11(&VAR_17->icb);
   VAR_14.d_type = VAR_0;
   VAR_14.d_name[0] = '.';
   VAR_14.d_name[1] = '.';
   VAR_14.d_namlen = 2;
   VAR_14.d_reclen = FUNC_0(&VAR_14);
   VAR_14.d_off = 2;
   FUNC_2(&VAR_14);
   VAR_18.dirent = &VAR_14;
   VAR_22 = FUNC_14(&VAR_18, VAR_14.d_reclen, VAR_13, 2);
  } else {
   VAR_14.d_namlen = FUNC_13(&VAR_17->data[VAR_17->l_iu],
       &VAR_14.d_name[0], VAR_17->l_fi, VAR_16);
   VAR_14.d_fileno = FUNC_11(&VAR_17->icb);
   VAR_14.d_type = (VAR_17->file_char & VAR_9) ?
       VAR_0 : VAR_1;
   VAR_14.d_reclen = FUNC_0(&VAR_14);
   VAR_14.d_off = VAR_19->this_off;
   FUNC_2(&VAR_14);
   VAR_18.dirent = &VAR_14;
   VAR_22 = FUNC_14(&VAR_18, VAR_14.d_reclen, VAR_13,
       VAR_19->this_off);
  }
  if (VAR_22)
   break;
  VAR_13->uio_offset = VAR_19->offset + VAR_19->off;
 }


 *VAR_11->a_eofflag = VAR_18.eofflag;

 if (VAR_22 < 0)
  VAR_22 = 0;
 if (!VAR_22)
  VAR_22 = VAR_19->error;

 FUNC_9(VAR_19);

 if (VAR_11->a_ncookies != ((void*)0)) {
  if (VAR_22)
   FUNC_3(VAR_20, VAR_4);
  else {
   *VAR_11->a_ncookies = VAR_18.acookies;
   *VAR_11->a_cookies = VAR_20;
  }
 }

 return (VAR_22);
}
