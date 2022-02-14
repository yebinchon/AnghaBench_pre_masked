
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_local_alloc {scalar_t__* la_bitmap; int la_size; scalar_t__ la_bm_off; } ;
struct TYPE_3__ {scalar_t__ i_used; scalar_t__ i_total; } ;
struct TYPE_4__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;


 struct ocfs2_local_alloc* FUNC_0 (struct ocfs2_dinode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct ocfs2_dinode *VAR_0)
{
 struct ocfs2_local_alloc *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;
 FUNC_2();

 VAR_0->id1.bitmap1.i_total = 0;
 VAR_0->id1.bitmap1.i_used = 0;
 VAR_1->la_bm_off = 0;
 for(VAR_2 = 0; VAR_2 < FUNC_1(VAR_1->la_size); VAR_2++)
  VAR_1->la_bitmap[VAR_2] = 0;

 FUNC_3();
}
