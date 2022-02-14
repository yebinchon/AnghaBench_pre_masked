
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct work_atoms {int nb_atoms; int total_lat; } ;



__attribute__((used)) static int FUNC_0(struct work_atoms *VAR_0, struct work_atoms *VAR_1)
{
 u64 VAR_2, VAR_3;

 if (!VAR_0->nb_atoms)
  return -1;

 if (!VAR_1->nb_atoms)
  return 1;

 VAR_2 = VAR_0->total_lat / VAR_0->nb_atoms;
 VAR_3 = VAR_1->total_lat / VAR_1->nb_atoms;

 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;

 return 0;
}
