
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct column_data {unsigned int column_id; } ;
typedef TYPE_1__* rtbl_t ;
struct TYPE_3__ {size_t num_columns; struct column_data** columns; } ;



__attribute__((used)) static struct column_data *
FUNC_0 (rtbl_t VAR_0, unsigned int VAR_1)
{
    size_t VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_0->num_columns; VAR_2++)
 if(VAR_0->columns[VAR_2]->column_id == VAR_1)
     return VAR_0->columns[VAR_2];
    return ((void*)0);
}
