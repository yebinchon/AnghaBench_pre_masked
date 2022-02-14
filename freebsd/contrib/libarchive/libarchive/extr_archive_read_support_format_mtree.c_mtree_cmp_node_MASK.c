
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_entry {int name; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const struct archive_rb_node *VAR_0,
    const struct archive_rb_node *VAR_1)
{
 const struct mtree_entry *VAR_2 = (const struct mtree_entry *)VAR_0;
 const struct mtree_entry *VAR_3 = (const struct mtree_entry *)VAR_1;

 return (FUNC_0(VAR_2->name, VAR_3->name));
}
