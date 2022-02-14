
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int item; int guid; int * name; } ;
typedef TYPE_1__ name_map_item_t ;
typedef int cl_qmap_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void * VAR_0, uint64_t VAR_1, char * VAR_2)
{
 cl_qmap_t *VAR_3 = VAR_0;
 name_map_item_t *VAR_4;
 name_map_item_t *VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4));
 if (!VAR_4)
  return -1;

 VAR_4->guid = FUNC_0(VAR_1);
 VAR_4->name = ((void*)0);
 VAR_5 = (name_map_item_t *) FUNC_1(VAR_3, VAR_4->guid, &VAR_4->item);
 if (VAR_5 != VAR_4)
                FUNC_2(VAR_4);

 return 0;
}
