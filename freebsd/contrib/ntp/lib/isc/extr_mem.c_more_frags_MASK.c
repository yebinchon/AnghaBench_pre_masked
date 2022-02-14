
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int isc_boolean_t ;
struct TYPE_9__ {size_t mem_target; TYPE_4__** freelists; TYPE_2__* stats; TYPE_1__* basic_blocks; } ;
typedef TYPE_3__ isc__mem_t ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_4__ element ;
struct TYPE_8__ {scalar_t__ freefrags; int blocks; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static inline isc_boolean_t
FUNC_2(isc__mem_t *VAR_2, size_t VAR_3) {
 int VAR_4, VAR_5;
 size_t VAR_6;
 void *VAR_7;
 unsigned char *VAR_8, *VAR_9;





 if (VAR_2->basic_blocks == ((void*)0)) {
  if (!FUNC_0(VAR_2)) {







   return (VAR_0);
  }
 }

 VAR_6 = VAR_2->mem_target;
 VAR_7 = VAR_2->basic_blocks;
 VAR_2->basic_blocks = VAR_2->basic_blocks->next;
 VAR_5 = VAR_6 / VAR_3;
 VAR_2->stats[VAR_3].blocks++;
 VAR_2->stats[VAR_3].freefrags += VAR_5;




 VAR_8 = VAR_7;
 VAR_9 = VAR_8 + VAR_3;
 VAR_6 -= VAR_3;
 for (VAR_4 = 0; VAR_4 < (VAR_5 - 1); VAR_4++) {
  ((element *)VAR_8)->next = (element *)VAR_9;
  VAR_8 = VAR_9;
  VAR_9 += VAR_3;
  VAR_6 -= VAR_3;
 }



 VAR_6 = FUNC_1(VAR_6);
 if (VAR_6 > 0U) {
  ((element *)VAR_9)->next = VAR_2->freelists[VAR_6];
  VAR_2->freelists[VAR_6] = (element *)VAR_9;
  VAR_2->stats[VAR_6].freefrags++;
 }




 ((element *)VAR_8)->next = ((void*)0);
 VAR_2->freelists[VAR_3] = VAR_7;

 return (VAR_1);
}
