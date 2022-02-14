
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pqisrc_softstate_t ;
struct TYPE_3__ {int max_elem; int lockcreated; int lock; int * elem_array; } ;
typedef TYPE_1__ pqi_taglist_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(pqisrc_softstate_t *VAR_0, pqi_taglist_t *VAR_1)
{
 FUNC_0("IN\n");
 FUNC_1(VAR_0, (char *)VAR_1->elem_array,
  (VAR_1->max_elem * sizeof(uint32_t)));
 VAR_1->elem_array = ((void*)0);

     if(VAR_1->lockcreated==1){
         FUNC_2(&VAR_1->lock);
         VAR_1->lockcreated = 0;
     }

 FUNC_0("OUT\n");
}
