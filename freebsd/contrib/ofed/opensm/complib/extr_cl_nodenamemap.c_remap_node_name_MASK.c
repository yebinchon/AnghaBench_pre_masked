
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nn_map_t ;
struct TYPE_2__ {int name; } ;
typedef TYPE_1__ name_map_item_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;

char *FUNC_4(nn_map_t * VAR_0, uint64_t VAR_1, char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 name_map_item_t *VAR_4 = ((void*)0);

 if (!VAR_0)
  goto done;

 VAR_4 = (name_map_item_t *) FUNC_1(VAR_0, VAR_1);
 if (VAR_4 != (name_map_item_t *) FUNC_0(VAR_0))
  VAR_3 = FUNC_3(VAR_4->name);

done:
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_3(FUNC_2(VAR_2));
 return (VAR_3);
}
