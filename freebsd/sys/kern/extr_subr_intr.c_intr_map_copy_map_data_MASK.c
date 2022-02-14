
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct intr_map_data {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {intptr_t xref; int dev; TYPE_1__* map_data; } ;
struct TYPE_3__ {size_t len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct intr_map_data* FUNC_0 (size_t,int ,int) ;
 int FUNC_1 (struct intr_map_data*,TYPE_1__*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static void
FUNC_5(u_int VAR_6, device_t *VAR_7, intptr_t *VAR_8,
    struct intr_map_data **VAR_9)
{
 size_t VAR_10;

 VAR_10 = 0;
 FUNC_2(&VAR_5);
 if (VAR_6 >= VAR_4 || VAR_3[VAR_6] == ((void*)0))
  FUNC_4("Attempt to copy invalid resource id: %u\n", VAR_6);
 if (VAR_3[VAR_6]->map_data != ((void*)0))
  VAR_10 = VAR_3[VAR_6]->map_data->len;
 FUNC_3(&VAR_5);

 if (VAR_10 == 0)
  *VAR_9 = ((void*)0);
 else
  *VAR_9 = FUNC_0(VAR_10, VAR_0, VAR_1 | VAR_2);
 FUNC_2(&VAR_5);
 if (VAR_3[VAR_6] == ((void*)0))
  FUNC_4("Attempt to copy invalid resource id: %u\n", VAR_6);
 if (VAR_10 != 0) {
  if (VAR_10 != VAR_3[VAR_6]->map_data->len)
   FUNC_4("Resource id: %u has changed.\n", VAR_6);
  FUNC_1(*VAR_9, VAR_3[VAR_6]->map_data, VAR_10);
 }
 *VAR_7 = VAR_3[VAR_6]->dev;
 *VAR_8 = VAR_3[VAR_6]->xref;
 FUNC_3(&VAR_5);
}
