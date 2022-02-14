
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_cache {int num_quar; int * quar; } ;
typedef int alloc_special_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct alloc_cache* VAR_1)
{
 alloc_special_type* VAR_2;
 int VAR_3;
 for(VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  if(!(VAR_2 = (alloc_special_type*)FUNC_3(
   sizeof(alloc_special_type)))) {
   FUNC_2("prealloc: out of memory");
   return;
  }
  FUNC_1(VAR_2);
  FUNC_0(VAR_2, VAR_1->quar);
  VAR_1->quar = VAR_2;
  VAR_1->num_quar++;
 }
}
