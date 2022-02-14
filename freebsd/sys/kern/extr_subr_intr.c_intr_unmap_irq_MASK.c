
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct intr_map_entry {int map_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct intr_map_entry*,int ) ;
 int FUNC_1 (int ) ;
 struct intr_map_entry** VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,size_t) ;

void
FUNC_5(u_int VAR_5)
{
 struct intr_map_entry *VAR_6;

 FUNC_2(&VAR_4);
 if ((VAR_5 >= VAR_2) || (VAR_1[VAR_5] == ((void*)0)))
  FUNC_4("Attempt to unmap invalid resource id: %u\n", VAR_5);
 VAR_6 = VAR_1[VAR_5];
 VAR_1[VAR_5] = ((void*)0);
 VAR_3 = VAR_5;
 FUNC_3(&VAR_4);
 FUNC_1(VAR_6->map_data);
 FUNC_0(VAR_6, VAR_0);
}
