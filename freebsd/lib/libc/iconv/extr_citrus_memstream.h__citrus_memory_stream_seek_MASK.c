
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_memory_stream {size_t ms_pos; int ms_region; } ;
typedef size_t ssize_t ;





 size_t FUNC_0 (int *) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_memory_stream *VAR_0, size_t VAR_1, int VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_0(&VAR_0->ms_region);

 switch (VAR_2) {
 case 128:
  if (VAR_1 >= VAR_3)
   return (-1);
  VAR_0->ms_pos = VAR_1;
  break;
 case 130:
  VAR_1 += (ssize_t)VAR_0->ms_pos;
  if (VAR_1 >= VAR_3)
   return (-1);
  VAR_0->ms_pos = VAR_1;
  break;
 case 129:
  if (VAR_3 < VAR_1)
   return (-1);
  VAR_0->ms_pos = VAR_3 - VAR_1;
  break;
 }
 return (0);
}
