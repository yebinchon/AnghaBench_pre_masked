
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_writer {struct mtree_entry* mtree_entry; } ;
struct mtree_entry {scalar_t__ reg_info; } ;
struct archive_write {struct mtree_writer* format_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtree_writer*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1)
{
 struct mtree_writer *VAR_2 = VAR_1->format_data;
 struct mtree_entry *VAR_3;

 if ((VAR_3 = VAR_2->mtree_entry) == ((void*)0))
  return (VAR_0);
 VAR_2->mtree_entry = ((void*)0);

 if (VAR_3->reg_info)
  FUNC_0(VAR_2, VAR_3->reg_info);

 return (VAR_0);
}
