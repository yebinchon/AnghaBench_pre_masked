
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vnode {int dummy; } ;
struct udf_node {struct file_entry* fentry; struct vnode* i_vnode; struct udf_mnt* udfmp; } ;
struct udf_mnt {int bmask; } ;
struct file_entry {int l_ad; int l_ea; int * data; } ;
struct buf {int * b_data; } ;
typedef int off_t ;
typedef int daddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct udf_mnt*,int) ;
 int FUNC_1 (struct vnode*,int ,int,int ,struct buf**) ;
 int FUNC_2 (struct udf_mnt*,int) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct udf_node*,int,int *,int*) ;

__attribute__((used)) static int
FUNC_7(struct udf_node *VAR_3, int *VAR_4, off_t VAR_5,
    struct buf **VAR_6, uint8_t **VAR_7)
{
 struct udf_mnt *VAR_8 = VAR_3->udfmp;
 struct vnode *VAR_9 = VAR_3->i_vnode;
 struct file_entry *VAR_10;
 struct buf *VAR_11;
 uint32_t VAR_12;
 daddr_t VAR_13;
 off_t VAR_14;
 int VAR_15;
 int VAR_16;





 VAR_16 = FUNC_6(VAR_3, VAR_5, &VAR_13, &VAR_12);
 if (VAR_16 == VAR_2) {




  VAR_10 = VAR_3->fentry;
  *VAR_7 = &VAR_10->data[FUNC_3(VAR_10->l_ea)];
  *VAR_4 = FUNC_3(VAR_10->l_ad);
  if (VAR_5 >= *VAR_4)
   *VAR_4 = 0;
  else {
   *VAR_7 += VAR_5;
   *VAR_4 -= VAR_5;
  }
  return (0);
 } else if (VAR_16 != 0) {
  return (VAR_16);
 }


 if (*VAR_4 == 0 || *VAR_4 > VAR_12)
  *VAR_4 = VAR_12;







 VAR_14 = FUNC_0(VAR_8, VAR_5);
 *VAR_4 = FUNC_4(*VAR_4, VAR_0 - VAR_14);
 VAR_15 = (*VAR_4 + VAR_14 + VAR_8->bmask) & ~VAR_8->bmask;
 *VAR_6 = ((void*)0);
 if ((VAR_16 = FUNC_1(VAR_9, FUNC_2(VAR_8, VAR_5), VAR_15, VAR_1, VAR_6))) {
  FUNC_5("warning: udf_readlblks returned error %d\n", VAR_16);

  return (VAR_16);
 }

 VAR_11 = *VAR_6;
 *VAR_7 = (uint8_t *)&VAR_11->b_data[VAR_5 & VAR_8->bmask];
 return (0);
}
