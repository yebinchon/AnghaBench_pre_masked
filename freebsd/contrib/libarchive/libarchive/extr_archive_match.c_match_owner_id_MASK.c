
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_array {scalar_t__* ids; scalar_t__ count; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int
FUNC_0(struct id_array *VAR_0, int64_t VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4;

 VAR_4 = 0;
 VAR_2 = (unsigned)VAR_0->count;
 while (VAR_4 < VAR_2) {
  VAR_3 = (VAR_4 + VAR_2)>>1;
  if (VAR_0->ids[VAR_3] == VAR_1)
   return (1);
  if (VAR_0->ids[VAR_3] < VAR_1)
   VAR_4 = VAR_3 + 1;
  else
   VAR_2 = VAR_3;
 }
 return (0);
}
