
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {int p_offset; scalar_t__ p_size; } ;
struct disklabel {int d_npartitions; scalar_t__ d_secperunit; struct partition* d_partitions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct disklabel *VAR_3)
{
 struct partition *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->d_npartitions; VAR_5++) {
  if (VAR_5 == VAR_1)
   continue;
  if (VAR_3->d_partitions[VAR_5].p_size)
   return;
 }

 VAR_4 = &VAR_3->d_partitions[0];
 VAR_4->p_offset = VAR_0 / VAR_2;
 VAR_4->p_size = VAR_3->d_secperunit - VAR_4->p_offset;
}
