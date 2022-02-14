
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufv {int bv_cnt; int bv_hd; int bv_root; } ;
struct buf {int b_xflags; int b_lblkno; TYPE_1__* b_bufobj; } ;
struct TYPE_2__ {struct bufv bo_clean; struct bufv bo_dirty; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct buf*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_3)
{
 struct bufv *VAR_4;

 FUNC_2(VAR_3->b_bufobj != ((void*)0), ("No b_bufobj %p", VAR_3));
 FUNC_0(VAR_3->b_bufobj);
 FUNC_2((VAR_3->b_xflags & (VAR_1|VAR_0)) !=
     (VAR_1|VAR_0),
     ("buf_vlist_remove: Buf %p is on two lists", VAR_3));
 if (VAR_3->b_xflags & VAR_1)
  VAR_4 = &VAR_3->b_bufobj->bo_dirty;
 else
  VAR_4 = &VAR_3->b_bufobj->bo_clean;
 FUNC_1(&VAR_4->bv_root, VAR_3->b_lblkno);
 FUNC_3(&VAR_4->bv_hd, VAR_3, VAR_2);
 VAR_4->bv_cnt--;
 VAR_3->b_xflags &= ~(VAR_1 | VAR_0);
}
