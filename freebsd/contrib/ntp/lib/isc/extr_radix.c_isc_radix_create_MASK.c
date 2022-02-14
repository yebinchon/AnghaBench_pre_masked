
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_4__ {int maxbits; int magic; scalar_t__ num_added_node; scalar_t__ num_active_node; int * head; int * mctx; } ;
typedef TYPE_1__ isc_radix_tree_t ;
typedef int isc_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *,int) ;

isc_result_t
FUNC_3(isc_mem_t *VAR_4, isc_radix_tree_t **VAR_5, int VAR_6) {
 isc_radix_tree_t *VAR_7;

 FUNC_0(VAR_5 != ((void*)0) && *VAR_5 == ((void*)0));

 VAR_7 = FUNC_2(VAR_4, sizeof(isc_radix_tree_t));
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_7->mctx = VAR_4;
 VAR_7->maxbits = VAR_6;
 VAR_7->head = ((void*)0);
 VAR_7->num_active_node = 0;
 VAR_7->num_added_node = 0;
 FUNC_1(VAR_6 <= VAR_2);
 VAR_7->magic = VAR_3;
 *VAR_5 = VAR_7;
 return (VAR_1);
}
