
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buf {scalar_t__ b_data; scalar_t__ b_kvabase; int b_vp; TYPE_1__* b_bufobj; } ;
typedef int off_t ;
typedef int daddr_t ;
struct TYPE_2__ {int bo_bsize; } ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int VAR_4 ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 scalar_t__ FUNC_5 (struct buf*,int,int) ;
 int FUNC_6 (int ,int ,int,int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int) ;
 int VAR_5 ;
 int FUNC_9 (char*,struct buf*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(struct buf *VAR_7, daddr_t VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 off_t VAR_15;

 VAR_13 = VAR_7->b_data == VAR_6 &&
     (VAR_10 & VAR_3) == 0;
 VAR_14 = VAR_7->b_kvabase == VAR_6 &&
     VAR_7->b_data == VAR_6 &&
     (VAR_10 & VAR_1) != 0;
 if (!VAR_13 && !VAR_14)
  return;

 FUNC_1(VAR_7);

 if (VAR_13 && VAR_7->b_kvabase != VAR_6) {





  goto has_addr;
 }





 VAR_11 = FUNC_10(VAR_7->b_vp, ((void*)0)) ? VAR_0 : VAR_7->b_bufobj->bo_bsize;
 FUNC_2(VAR_11 != 0, ("bsize == 0, check bo->bo_bsize"));
 VAR_15 = VAR_8 * VAR_11;
 VAR_12 = VAR_9 + (VAR_15 & VAR_4);
 VAR_12 = FUNC_8(VAR_12, VAR_11);

 while (FUNC_5(VAR_7, VAR_12, VAR_10) != 0) {
  if ((VAR_10 & VAR_2) != 0) {




   FUNC_9("GB_NOWAIT_BD and GB_UNMAPPED %p", VAR_7);
  }
  FUNC_7(VAR_5, 1);
  FUNC_6(FUNC_4(VAR_7), VAR_7->b_vp, VAR_10, 0, 0);
 }
has_addr:
 if (VAR_13) {

  VAR_7->b_data = VAR_7->b_kvabase;
  FUNC_0(VAR_7);
  FUNC_3(VAR_7);
 }
}
