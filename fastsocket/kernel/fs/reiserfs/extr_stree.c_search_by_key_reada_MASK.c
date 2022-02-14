
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int b_blocknr_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int,struct buffer_head**) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1,
    struct buffer_head **VAR_2,
    b_blocknr_t *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_2[VAR_5] = FUNC_3(VAR_1, VAR_3[VAR_5]);
 }
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {




  if (!FUNC_1(VAR_2[VAR_6]))
   FUNC_2(VAR_0, 1, VAR_2 + VAR_6);
  FUNC_0(VAR_2[VAR_6]);
 }
}
