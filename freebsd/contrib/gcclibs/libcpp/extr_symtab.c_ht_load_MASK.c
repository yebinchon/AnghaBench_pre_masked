
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hashnode ;
struct TYPE_3__ {int entries_owned; unsigned int nslots; unsigned int nelements; int * entries; } ;
typedef TYPE_1__ hash_table ;


 int FUNC_0 (int *) ;

void
FUNC_1 (hash_table *VAR_0, hashnode *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3,
  bool VAR_4)
{
  if (VAR_0->entries_owned)
    FUNC_0 (VAR_0->entries);
  VAR_0->entries = VAR_1;
  VAR_0->nslots = VAR_2;
  VAR_0->nelements = VAR_3;
  VAR_0->entries_owned = VAR_4;
}
