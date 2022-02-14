
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_s {int uma; } ;
struct indir {int* array; scalar_t__ shift; } ;


 int VAR_0 ;
 int FUNC_0 (struct indir*) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void
FUNC_2(struct md_s *VAR_1, struct indir *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_2->array[VAR_3])
   continue;
  if (VAR_2->shift)
   FUNC_2(VAR_1, (struct indir*)(VAR_2->array[VAR_3]));
  else if (VAR_2->array[VAR_3] > 255)
   FUNC_1(VAR_1->uma, (void *)(VAR_2->array[VAR_3]));
 }
 FUNC_0(VAR_2);
}
