
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
struct ocfs2_super {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct page*,int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int ,unsigned int) ;
 int FUNC_3 (struct ocfs2_super*,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_1,
         struct ocfs2_super *VAR_2, u32 VAR_3,
         unsigned VAR_4, unsigned VAR_5)
{
 void *VAR_6;
 unsigned int VAR_7, VAR_8;

 FUNC_3(VAR_2, VAR_3, &VAR_7, &VAR_8);

 VAR_6 = FUNC_0(VAR_1, VAR_0);

 if (VAR_4 || VAR_5) {
  if (VAR_4 > VAR_7)
   FUNC_2(VAR_6 + VAR_7, 0, VAR_4 - VAR_7);
  if (VAR_5 < VAR_8)
   FUNC_2(VAR_6 + VAR_5, 0, VAR_8 - VAR_5);
 } else {
  FUNC_2(VAR_6 + VAR_7, 0, VAR_8 - VAR_7);
 }

 FUNC_1(VAR_6, VAR_0);
}
