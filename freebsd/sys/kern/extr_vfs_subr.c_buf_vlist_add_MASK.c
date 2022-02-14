
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufv {scalar_t__ bv_cnt; int bv_root; int bv_hd; } ;
struct bufobj {int bo_flag; struct bufv bo_clean; struct bufv bo_dirty; } ;
struct buf {int b_xflags; int b_lblkno; } ;
typedef int b_xflags_t ;
struct TYPE_2__ {int b_lblkno; } ;


 int FUNC_0 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct buf*) ;
 struct buf* FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,struct buf*,struct buf*,int ) ;
 int FUNC_5 (int *,struct buf*,int ) ;
 int FUNC_6 (int *,struct buf*,int ) ;
 TYPE_1__* FUNC_7 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(struct buf *VAR_5, struct bufobj *VAR_6, b_xflags_t VAR_7)
{
 struct bufv *VAR_8;
 struct buf *VAR_9;
 int VAR_10;

 FUNC_0(VAR_6);
 FUNC_3((VAR_7 & VAR_2) == 0 || (VAR_6->bo_flag & VAR_0) == 0,
     ("dead bo %p", VAR_6));
 FUNC_3((VAR_5->b_xflags & (VAR_2|VAR_1)) == 0,
     ("buf_vlist_add: Buf %p has existing xflags %d", VAR_5, VAR_5->b_xflags));
 VAR_5->b_xflags |= VAR_7;
 if (VAR_7 & VAR_2)
  VAR_8 = &VAR_6->bo_dirty;
 else
  VAR_8 = &VAR_6->bo_clean;






 if (VAR_8->bv_cnt == 0 ||
     VAR_5->b_lblkno > FUNC_7(&VAR_8->bv_hd, VAR_4)->b_lblkno)
  FUNC_6(&VAR_8->bv_hd, VAR_5, VAR_3);
 else if ((VAR_9 = FUNC_2(&VAR_8->bv_root, VAR_5->b_lblkno)) == ((void*)0))
  FUNC_5(&VAR_8->bv_hd, VAR_5, VAR_3);
 else
  FUNC_4(&VAR_8->bv_hd, VAR_9, VAR_5, VAR_3);
 VAR_10 = FUNC_1(&VAR_8->bv_root, VAR_5);
 if (VAR_10)
  FUNC_8("buf_vlist_add:  Preallocated nodes insufficient.");
 VAR_8->bv_cnt++;
}
