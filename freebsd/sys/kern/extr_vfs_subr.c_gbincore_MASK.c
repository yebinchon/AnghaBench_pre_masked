
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bv_root; } ;
struct TYPE_3__ {int bv_root; } ;
struct bufobj {TYPE_2__ bo_dirty; TYPE_1__ bo_clean; } ;
struct buf {int dummy; } ;
typedef int daddr_t ;


 int FUNC_0 (struct bufobj*) ;
 struct buf* FUNC_1 (int *,int ) ;

struct buf *
FUNC_2(struct bufobj *VAR_0, daddr_t VAR_1)
{
 struct buf *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_1(&VAR_0->bo_clean.bv_root, VAR_1);
 if (VAR_2 != ((void*)0))
  return (VAR_2);
 return FUNC_1(&VAR_0->bo_dirty.bv_root, VAR_1);
}
