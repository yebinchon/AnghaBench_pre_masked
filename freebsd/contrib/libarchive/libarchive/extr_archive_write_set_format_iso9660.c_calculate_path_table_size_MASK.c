
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdd {int max_depth; int path_table_size; int path_table_block; struct path_table* pathtbl; } ;
struct path_table {int cnt; struct isoent** sorted; } ;
struct isoent {int id_len; int * identifier; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct vdd *VAR_2)
{
 int VAR_3, VAR_4;
 struct path_table *VAR_5;

 VAR_5 = VAR_2->pathtbl;
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->max_depth; VAR_3++) {
  struct isoent **VAR_6;
  int VAR_7, VAR_8;

  if ((VAR_8 = VAR_5[VAR_3].cnt) == 0)
   break;

  VAR_6 = VAR_5[VAR_3].sorted;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   int VAR_9;

   if (VAR_6[VAR_7]->identifier == ((void*)0))
    VAR_9 = 1;
   else
    VAR_9 = VAR_6[VAR_7]->id_len;
   if (VAR_9 & 0x01)
    VAR_9++;
   VAR_4 += 8 + VAR_9;
  }
 }
 VAR_2->path_table_size = VAR_4;
 VAR_2->path_table_block =
     ((VAR_4 + VAR_1 -1) /
     VAR_1) *
     (VAR_1 / VAR_0);
}
