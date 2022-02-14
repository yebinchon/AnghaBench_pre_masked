
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_list {int dummy; } ;
struct name_entry {struct name_list nm_sublist; } ;


 struct name_entry* FUNC_0 (struct name_list*) ;
 int FUNC_1 (struct name_entry*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct name_entry*) ;
 int VAR_2 ;

void
FUNC_3(struct name_list *VAR_3)
{
 struct name_entry *VAR_4;

 while ((VAR_4 = FUNC_0(VAR_3)) != ((void*)0)) {
  FUNC_1(VAR_4, VAR_2);
  FUNC_3(&VAR_4->nm_sublist);
  FUNC_2(VAR_4);
 }
 VAR_1 = 0;
 VAR_0 = 0;
}
