
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct src_head {int dummy; } ;
struct src_entry {struct src_entry* se_name; int se_df; } ;


 struct src_entry* FUNC_0 (struct src_head*) ;
 int FUNC_1 (struct src_head*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct src_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct src_head *VAR_1)
{
 struct src_entry *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_0);
  FUNC_2(VAR_2->se_df);
  FUNC_3(VAR_2->se_name);
  FUNC_3(VAR_2);
 }
}
