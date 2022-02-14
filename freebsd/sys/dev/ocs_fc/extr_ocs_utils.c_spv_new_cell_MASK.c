
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef TYPE_1__* sparse_vector_t ;
struct TYPE_3__ {int max_idx; void** array; int os; } ;


 int VAR_0 ;
 void** FUNC_0 (int ,int ) ;

__attribute__((used)) static void
*FUNC_1(sparse_vector_t VAR_1, uint32_t VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4 = (VAR_2 >> 16) & 0xff;
 uint32_t VAR_5 = (VAR_2 >> 8) & 0xff;
 uint32_t VAR_6 = (VAR_2 >> 0) & 0xff;
 void **VAR_7;

 if (VAR_2 >= VAR_1->max_idx) {
  return ((void*)0);
 }

 if (VAR_1->array == ((void*)0)) {
  VAR_1->array = (VAR_3 ? FUNC_0(VAR_1->os, VAR_0) : ((void*)0));
  if (VAR_1->array == ((void*)0)) {
   return ((void*)0);
  }
 }
 VAR_7 = VAR_1->array;
 if (VAR_7[VAR_4] == ((void*)0)) {
  VAR_7[VAR_4] = (VAR_3 ? FUNC_0(VAR_1->os, VAR_0) : ((void*)0));
  if (VAR_7[VAR_4] == ((void*)0)) {
   return ((void*)0);
  }
 }
 VAR_7 = VAR_7[VAR_4];
 if (VAR_7[VAR_5] == ((void*)0)) {
  VAR_7[VAR_5] = (VAR_3 ? FUNC_0(VAR_1->os, VAR_0) : ((void*)0));
  if (VAR_7[VAR_5] == ((void*)0)) {
   return ((void*)0);
  }
 }
 VAR_7 = VAR_7[VAR_5];

 return &VAR_7[VAR_6];
}
