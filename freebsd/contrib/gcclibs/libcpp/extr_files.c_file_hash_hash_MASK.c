
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dir; TYPE_1__* file; } ;
struct file_hash_entry {TYPE_3__ u; scalar_t__ start_dir; } ;
typedef int hashval_t ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void *VAR_0)
{
  struct file_hash_entry *VAR_1 = (struct file_hash_entry *) VAR_0;
  const char *VAR_2;
  if (VAR_1->start_dir)
    VAR_2 = VAR_1->u.file->name;
  else
    VAR_2 = VAR_1->u.dir->name;

  return FUNC_0 (VAR_2);
}
