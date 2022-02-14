
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct hsearch_data {struct __hsearch* __hsearch; } ;
struct __hsearch {size_t index_mask; int entries_used; int offset_basis; TYPE_1__* entries; } ;
struct TYPE_7__ {int * key; } ;
typedef TYPE_1__ ENTRY ;
typedef scalar_t__ ACTION ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (size_t,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (struct __hsearch*,size_t) ;
 scalar_t__ FUNC_4 (int *,int *) ;

int
FUNC_5(ENTRY VAR_3, ACTION VAR_4, ENTRY **VAR_5, struct hsearch_data *VAR_6)
{
 struct __hsearch *VAR_7;
 ENTRY *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_7 = VAR_6->__hsearch;
 VAR_11 = FUNC_2(VAR_7->offset_basis, VAR_3.key);





 for (VAR_12 = VAR_11, VAR_13 = 0;; VAR_12 += ++VAR_13) {
  VAR_8 = &VAR_7->entries[VAR_12 & VAR_7->index_mask];
  if (VAR_8->key == ((void*)0))
   break;
  if (FUNC_4(VAR_8->key, VAR_3.key) == 0) {
   *VAR_5 = VAR_8;
   return (1);
  }
 }


 if (VAR_4 == VAR_1) {
  VAR_2 = VAR_0;
  return (0);
 }

 if (VAR_7->entries_used * 2 >= VAR_7->index_mask) {

  VAR_15 = VAR_7->index_mask + 1;
  VAR_9 = VAR_7->entries;







  VAR_16 = (VAR_7->index_mask + 1) * 2;
  VAR_10 = FUNC_0(VAR_16, sizeof(ENTRY));
  if (VAR_10 == ((void*)0))
   return (0);
  VAR_7->entries = VAR_10;
  VAR_7->index_mask = VAR_16 - 1;


  for (VAR_13 = 0; VAR_13 < VAR_15; ++VAR_13) {
   VAR_8 = &VAR_9[VAR_13];
   if (VAR_8->key != ((void*)0)) {
    VAR_14 = FUNC_2(VAR_7->offset_basis,
        VAR_8->key);
    *FUNC_3(VAR_7, VAR_14) =
        *VAR_8;
   }
  }


  FUNC_1(VAR_9);





  VAR_7 = VAR_6->__hsearch;
  VAR_8 = FUNC_3(VAR_7, VAR_11);
 }


 *VAR_8 = VAR_3;
 ++VAR_7->entries_used;
 *VAR_5 = VAR_8;
 return (1);
}
