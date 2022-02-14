
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fatEntry {size_t head; size_t next; scalar_t__ length; } ;
struct bootblock {size_t NumClusters; } ;
typedef size_t cl_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void
FUNC_0(struct bootblock *VAR_2, struct fatEntry *VAR_3, cl_t VAR_4)
{
 cl_t VAR_5, VAR_6;

 for (VAR_5 = VAR_4; VAR_5 >= VAR_0 && VAR_5 < VAR_2->NumClusters; VAR_5 = VAR_6) {
  if (VAR_3[VAR_5].head != VAR_4)
   break;
  VAR_6 = VAR_3[VAR_5].next;
  VAR_3[VAR_5].next = VAR_3[VAR_5].head = VAR_1;
  VAR_3[VAR_5].length = 0;
 }
}
