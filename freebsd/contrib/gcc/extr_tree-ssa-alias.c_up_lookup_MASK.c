
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * used_part_t ;
struct used_part_map {unsigned int uid; int * to; } ;


 scalar_t__ FUNC_0 (int ,struct used_part_map*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static used_part_t
FUNC_1 (unsigned int VAR_1)
{
  struct used_part_map *VAR_2, VAR_3;
  VAR_3.uid = VAR_1;
  VAR_2 = (struct used_part_map *) FUNC_0 (VAR_0, &VAR_3, VAR_1);
  if (!VAR_2)
    return ((void*)0);
  return VAR_2->to;
}
