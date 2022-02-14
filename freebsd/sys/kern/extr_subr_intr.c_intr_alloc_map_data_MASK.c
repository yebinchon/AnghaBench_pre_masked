
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_map_data {int type; size_t len; } ;
typedef enum intr_map_data_type { ____Placeholder_intr_map_data_type } intr_map_data_type ;


 int VAR_0 ;
 struct intr_map_data* FUNC_0 (size_t,int ,int) ;

struct intr_map_data *
FUNC_1(enum intr_map_data_type VAR_1, size_t VAR_2, int VAR_3)
{
 struct intr_map_data *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_3);
 VAR_4->type = VAR_1;
 VAR_4->len = VAR_2;
 return (VAR_4);
}
