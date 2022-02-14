
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ (* ht_cb ) (int ,scalar_t__,void const*) ;
typedef scalar_t__ hashnode ;
struct TYPE_3__ {int nslots; int pfile; scalar_t__* entries; } ;
typedef TYPE_1__ hash_table ;


 scalar_t__ FUNC_0 (int ,scalar_t__,void const*) ;

void
FUNC_1 (hash_table *VAR_0, ht_cb VAR_1, const void *VAR_2)
{
  hashnode *VAR_3, *VAR_4;

  VAR_3 = VAR_0->entries;
  VAR_4 = VAR_3 + VAR_0->nslots;
  do
    if (*VAR_3)
      {
 if ((*VAR_1) (VAR_0->pfile, *VAR_3, VAR_2) == 0)
   break;
      }
  while (++VAR_3 < VAR_4);
}
