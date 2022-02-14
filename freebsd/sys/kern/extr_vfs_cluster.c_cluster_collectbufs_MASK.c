
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_lastw; int v_cstart; } ;
struct cluster_save {int bs_nchildren; struct buf** bs_children; } ;
struct buf {scalar_t__ b_blkno; scalar_t__ b_lblkno; int b_bcount; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*,scalar_t__,int *,scalar_t__*,int *,int *) ;
 int FUNC_1 (struct vnode*,int,int ,int ,int,struct buf**) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct cluster_save*,int ) ;
 struct cluster_save* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static struct cluster_save *
FUNC_5(struct vnode *VAR_3, struct buf *VAR_4, int VAR_5)
{
 struct cluster_save *VAR_6;
 struct buf *VAR_7;
 daddr_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_11 = VAR_3->v_lastw - VAR_3->v_cstart + 1;
 VAR_6 = FUNC_4(sizeof(struct buf *) * (VAR_11 + 1) + sizeof(*VAR_6),
     VAR_0, VAR_1);
 VAR_6->bs_nchildren = 0;
 VAR_6->bs_children = (struct buf **) (VAR_6 + 1);
 for (VAR_8 = VAR_3->v_cstart, VAR_9 = 0; VAR_9 < VAR_11; VAR_8++, VAR_9++) {
  VAR_12 = FUNC_1(VAR_3, VAR_8, VAR_4->b_bcount, VAR_2,
      VAR_5, &VAR_7);
  if (VAR_12 != 0) {




   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    FUNC_2(VAR_6->bs_children[VAR_10]);
   FUNC_3(VAR_6, VAR_0);
   return (((void*)0));
  }
  VAR_6->bs_children[VAR_9] = VAR_7;
  if (VAR_7->b_blkno == VAR_7->b_lblkno)
   FUNC_0(VAR_3, VAR_7->b_lblkno, ((void*)0), &VAR_7->b_blkno,
    ((void*)0), ((void*)0));
 }
 VAR_6->bs_children[VAR_9] = VAR_7 = VAR_4;
 if (VAR_7->b_blkno == VAR_7->b_lblkno)
  FUNC_0(VAR_3, VAR_7->b_lblkno, ((void*)0), &VAR_7->b_blkno, ((void*)0), ((void*)0));
 VAR_6->bs_nchildren = VAR_9 + 1;
 return (VAR_6);
}
