
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int guid; int name; } ;
typedef TYPE_1__ name_map_item_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;


 int FUNC_0 (int *,int ,int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, uint64_t VAR_1, char *VAR_2)
{
 cl_qmap_t *VAR_3 = VAR_0;
 name_map_item_t *VAR_4;

 VAR_2 = FUNC_3(VAR_2, "\"#");
 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (!VAR_4)
  return -1;
 VAR_4->guid = VAR_1;
 VAR_4->name = FUNC_2(VAR_2);
 FUNC_0(VAR_3, VAR_4->guid, (cl_map_item_t *) VAR_4);
 return 0;
}
