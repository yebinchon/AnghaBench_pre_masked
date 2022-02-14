
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_boolean_t ;
struct TYPE_4__ {int mem_target; unsigned int quota; size_t total; size_t basic_table_count; size_t basic_table_size; unsigned char** (* memalloc ) (int ,unsigned int) ;unsigned char** basic_table; unsigned char* lowest; unsigned char* highest; void* basic_blocks; int memalloc_failures; int arg; int (* memfree ) (int ,unsigned char**) ;} ;
typedef TYPE_1__ isc__mem_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ element ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (unsigned char**,unsigned char**,int) ;
 unsigned char** FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned char**) ;
 unsigned char** FUNC_4 (int ,int) ;

__attribute__((used)) static inline isc_boolean_t
FUNC_5(isc__mem_t *VAR_4) {
 void *VAR_5;
 unsigned char *VAR_6, *VAR_7;
 unsigned char *VAR_8, *VAR_9;
 unsigned char **VAR_10;
 unsigned int VAR_11;
 size_t VAR_12;
 int VAR_13;






 VAR_12 = VAR_2 * VAR_4->mem_target;
 if (VAR_4->quota != 0U && VAR_4->total + VAR_12 > VAR_4->quota)
  return (VAR_0);

 FUNC_0(VAR_4->basic_table_count <= VAR_4->basic_table_size);
 if (VAR_4->basic_table_count == VAR_4->basic_table_size) {
  VAR_11 = VAR_4->basic_table_size + VAR_3;
  VAR_10 = (VAR_4->memalloc)(VAR_4->arg,
     VAR_11 * sizeof(unsigned char *));
  if (VAR_10 == ((void*)0)) {
   VAR_4->memalloc_failures++;
   return (VAR_0);
  }
  if (VAR_4->basic_table_size != 0) {
   FUNC_1(VAR_10, VAR_4->basic_table,
          VAR_4->basic_table_size *
          sizeof(unsigned char *));
   (VAR_4->memfree)(VAR_4->arg, VAR_4->basic_table);
  }
  VAR_4->basic_table = VAR_10;
  VAR_4->basic_table_size = VAR_11;
 }

 VAR_5 = (VAR_4->memalloc)(VAR_4->arg, VAR_2 * VAR_4->mem_target);
 if (VAR_5 == ((void*)0)) {
  VAR_4->memalloc_failures++;
  return (VAR_0);
 }
 VAR_4->total += VAR_12;
 VAR_4->basic_table[VAR_4->basic_table_count] = VAR_5;
 VAR_4->basic_table_count++;

 VAR_6 = VAR_5;
 VAR_7 = VAR_6 + VAR_4->mem_target;
 for (VAR_13 = 0; VAR_13 < (VAR_2 - 1); VAR_13++) {
  ((element *)VAR_6)->next = (element *)VAR_7;
  VAR_6 = VAR_7;
  VAR_7 += VAR_4->mem_target;
 }




 ((element *)VAR_6)->next = ((void*)0);
 VAR_8 = VAR_5;
 VAR_9 = VAR_8 + VAR_2 * VAR_4->mem_target - 1;
 if (VAR_8 < VAR_4->lowest || VAR_4->lowest == ((void*)0))
  VAR_4->lowest = VAR_8;
 if (VAR_9 > VAR_4->highest)
  VAR_4->highest = VAR_9;
 VAR_4->basic_blocks = VAR_5;

 return (VAR_1);
}
