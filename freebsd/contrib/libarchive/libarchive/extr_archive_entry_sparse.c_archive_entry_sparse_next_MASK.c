
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_entry {TYPE_1__* sparse_p; } ;
typedef scalar_t__ la_int64_t ;
struct TYPE_2__ {struct TYPE_2__* next; scalar_t__ length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct archive_entry * VAR_2,
 la_int64_t *VAR_3, la_int64_t *VAR_4)
{
 if (VAR_2->sparse_p) {
  *VAR_3 = VAR_2->sparse_p->offset;
  *VAR_4 = VAR_2->sparse_p->length;

  VAR_2->sparse_p = VAR_2->sparse_p->next;

  return (VAR_0);
 } else {
  *VAR_3 = 0;
  *VAR_4 = 0;
  return (VAR_1);
 }
}
