
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int tb_sb; struct buffer_head** thrown; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head**) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct tree_balance *VAR_0, struct buffer_head *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_1))
  FUNC_3(VAR_0->tb_sb, "reiserfs-12320",
     "called with dirty buffer");
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->thrown); VAR_2++)
  if (!VAR_0->thrown[VAR_2]) {
   VAR_0->thrown[VAR_2] = VAR_1;
   FUNC_2(VAR_1);
   return;
  }
 FUNC_3(VAR_0->tb_sb, "reiserfs-12321",
    "too many thrown buffers");
}
