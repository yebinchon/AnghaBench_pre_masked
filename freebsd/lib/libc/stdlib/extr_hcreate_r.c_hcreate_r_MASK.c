
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsearch_data {struct __hsearch* __hsearch; } ;
struct __hsearch {int index_mask; scalar_t__ entries_used; int offset_basis; int * entries; } ;
typedef int ENTRY ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (struct __hsearch*) ;
 struct __hsearch* FUNC_3 (int) ;

int
FUNC_4(size_t VAR_0, struct hsearch_data *VAR_1)
{
 struct __hsearch *VAR_2;







 VAR_2 = FUNC_3(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return 0;
 VAR_2->entries = FUNC_1(16, sizeof(ENTRY));
 if (VAR_2->entries == ((void*)0)) {
  FUNC_2(VAR_2);
  return 0;
 }





 FUNC_0(&VAR_2->offset_basis, sizeof(VAR_2->offset_basis));
 VAR_2->index_mask = 0xf;
 VAR_2->entries_used = 0;
 VAR_1->__hsearch = VAR_2;
 return 1;
}
