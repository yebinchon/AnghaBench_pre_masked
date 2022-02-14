
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ocfs2_local_alloc {int la_size; int * la_bitmap; } ;
struct ocfs2_dinode {int dummy; } ;


 struct ocfs2_local_alloc* FUNC_0 (struct ocfs2_dinode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(struct ocfs2_dinode *VAR_0)
{
 int VAR_1;
 u8 *VAR_2;
 u32 VAR_3 = 0;
 struct ocfs2_local_alloc *VAR_4 = FUNC_0(VAR_0);

 FUNC_3();

 VAR_2 = VAR_4->la_bitmap;
 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_4->la_size); VAR_1++)
  VAR_3 += FUNC_1(VAR_2[VAR_1]);

 FUNC_4(VAR_3);
 return VAR_3;
}
