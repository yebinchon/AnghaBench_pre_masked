
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct column_entry {int * data; } ;
struct column_data {int num_rows; struct column_entry* rows; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct column_entry* FUNC_1 (struct column_entry*,int) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3 (struct column_data *VAR_1, const char *VAR_2)
{
    struct column_entry VAR_3, *VAR_4;

    VAR_3.data = FUNC_2 (VAR_2);
    if (VAR_3.data == ((void*)0))
 return VAR_0;
    VAR_4 = FUNC_1 (VAR_1->rows, (VAR_1->num_rows + 1) * sizeof (*VAR_4));
    if (VAR_4 == ((void*)0)) {
 FUNC_0 (VAR_3.data);
 return VAR_0;
    }
    VAR_1->rows = VAR_4;
    VAR_1->rows[VAR_1->num_rows++] = VAR_3;
    return 0;
}
