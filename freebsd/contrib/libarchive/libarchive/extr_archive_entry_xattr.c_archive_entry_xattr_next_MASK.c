
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_entry {TYPE_1__* xattr_p; } ;
struct TYPE_2__ {char* name; void* value; size_t size; struct TYPE_2__* next; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct archive_entry * VAR_2,
 const char **VAR_3, const void **VAR_4, size_t *VAR_5)
{
 if (VAR_2->xattr_p) {
  *VAR_3 = VAR_2->xattr_p->name;
  *VAR_4 = VAR_2->xattr_p->value;
  *VAR_5 = VAR_2->xattr_p->size;

  VAR_2->xattr_p = VAR_2->xattr_p->next;

  return (VAR_0);
 } else {
  *VAR_3 = ((void*)0);
  *VAR_4 = ((void*)0);
  *VAR_5 = (size_t)0;
  return (VAR_1);
 }
}
