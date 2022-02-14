
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_entry {scalar_t__ dev; scalar_t__ ino; struct tree_entry* parent; } ;
struct tree {TYPE_1__* current; } ;
struct stat {scalar_t__ st_ino; scalar_t__ st_dev; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {struct tree_entry* parent; } ;



__attribute__((used)) static int
FUNC_0(struct tree *VAR_0, const struct stat *VAR_1)
{
 struct tree_entry *VAR_2;

 for (VAR_2 = VAR_0->current->parent; VAR_2 != ((void*)0); VAR_2 = VAR_2->parent) {
  if (VAR_2->dev == (int64_t)VAR_1->st_dev &&
      VAR_2->ino == (int64_t)VAR_1->st_ino)
   return (1);
 }
 return (0);
}
