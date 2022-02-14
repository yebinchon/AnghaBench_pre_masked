
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_item {struct direntry_uarea* vi_uarea; } ;
struct direntry_uarea {int entry_count; } ;



__attribute__((used)) static int FUNC_0(struct virtual_item *VAR_0)
{
 struct direntry_uarea *VAR_1 = VAR_0->vi_uarea;

 return VAR_1->entry_count;
}
