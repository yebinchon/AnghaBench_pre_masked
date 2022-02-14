
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int size_tree; } ;
struct size_entry {int rb; } ;
typedef int ino_t ;


 struct size_entry* FUNC_0 (struct ubifs_info*,int ) ;
 int FUNC_1 (struct size_entry*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_0, ino_t VAR_1)
{
 struct size_entry *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  return;
 FUNC_2(&VAR_2->rb, &VAR_0->size_tree);
 FUNC_1(VAR_2);
}
