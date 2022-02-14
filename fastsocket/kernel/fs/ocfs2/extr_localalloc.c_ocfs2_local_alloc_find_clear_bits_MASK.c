
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct TYPE_4__ {int i_total; } ;
struct TYPE_5__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;
struct TYPE_6__ {void* la_bitmap; } ;


 TYPE_3__* FUNC_0 (struct ocfs2_dinode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*,int,int) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_0,
          struct ocfs2_dinode *VAR_1,
          u32 VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 void *VAR_8 = ((void*)0);

 FUNC_3("(numbits wanted = %u)\n", VAR_2);

 if (!VAR_1->id1.bitmap1.i_total) {
  FUNC_2(0, "No bits in my window!\n");
  VAR_4 = -1;
  goto bail;
 }

 VAR_8 = FUNC_0(VAR_1)->la_bitmap;

 VAR_3 = VAR_4 = VAR_6 = 0;
 VAR_7 = -1;
 VAR_5 = FUNC_1(VAR_1->id1.bitmap1.i_total);
 while ((VAR_4 = FUNC_5(VAR_8, VAR_5, VAR_6)) != -1) {
  if (VAR_4 == VAR_5) {

   break;
  }





  if (VAR_4 == VAR_6) {

   VAR_3++;
   VAR_6++;
  } else {

   VAR_3 = 1;
   VAR_6 = VAR_4+1;
  }

  if (VAR_3 == VAR_2) {

   break;
  }
 }

 FUNC_2(0, "Exiting loop, bitoff = %d, numfound = %d\n", VAR_4,
      VAR_3);

 if (VAR_3 == VAR_2)
  VAR_4 = VAR_6 - VAR_3;
 else
  VAR_4 = -1;

bail:
 FUNC_4(VAR_4);
 return VAR_4;
}
