
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct intr_map_data {int dummy; } ;
struct TYPE_2__ {struct intr_map_data* map_data; } ;


 TYPE_1__** VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static struct intr_map_data *
FUNC_3(u_int VAR_3)
{
 struct intr_map_data *VAR_4;

 VAR_4 = ((void*)0);
 FUNC_0(&VAR_2);
 if (VAR_3 >= VAR_1 || VAR_0[VAR_3] == ((void*)0))
  FUNC_2("Attempt to copy invalid resource id: %u\n", VAR_3);
 VAR_4 = VAR_0[VAR_3]->map_data;
 FUNC_1(&VAR_2);

 return (VAR_4);
}
