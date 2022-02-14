
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct intr_map_entry {intptr_t xref; int * isrc; struct intr_map_data* map_data; int dev; } ;
struct intr_map_data {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intr_map_entry** VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct intr_map_entry* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

u_int
FUNC_4(device_t VAR_7, intptr_t VAR_8, struct intr_map_data *VAR_9)
{
 u_int VAR_10;
 struct intr_map_entry *VAR_11;


 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_0, VAR_1 | VAR_2);

 VAR_11->dev = VAR_7;
 VAR_11->xref = VAR_8;
 VAR_11->map_data = VAR_9;
 VAR_11->isrc = ((void*)0);

 FUNC_1(&VAR_6);
 for (VAR_10 = VAR_5; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_3[VAR_10] == ((void*)0)) {
   VAR_3[VAR_10] = VAR_11;
   VAR_5 = VAR_10 + 1;
   FUNC_2(&VAR_6);
   return (VAR_10);
  }
 }
 FUNC_2(&VAR_6);


 FUNC_3("IRQ mapping table is full.");
}
