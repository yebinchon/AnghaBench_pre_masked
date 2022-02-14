
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {struct iort_map_entry* mappings; } ;
struct iort_node {int nentries; TYPE_1__ entries; } ;
struct iort_map_entry {scalar_t__ base; scalar_t__ end; int flags; scalar_t__ outbase; struct iort_node* out_node; } ;


 int VAR_0 ;

__attribute__((used)) static struct iort_node *
FUNC_0(struct iort_node *VAR_1, u_int VAR_2, u_int *VAR_3)
{
 struct iort_map_entry *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->entries.mappings;
 for (VAR_5 = 0; VAR_5 < VAR_1->nentries; VAR_5++, VAR_4++) {
  if (VAR_4->base <= VAR_2 && VAR_2 <= VAR_4->end)
   break;
 }
 if (VAR_5 == VAR_1->nentries)
  return (((void*)0));
 if ((VAR_4->flags & VAR_0) == 0)
  *VAR_3 = VAR_4->outbase + (VAR_2 - VAR_4->base);
 else
  *VAR_3 = VAR_4->outbase;
 return (VAR_4->out_node);
}
