
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_memory_stream {size_t ms_pos; int ms_region; } ;


 size_t FUNC_0 (int *) ;

__attribute__((used)) static __inline size_t
FUNC_1(struct _citrus_memory_stream *VAR_0)
{
 size_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->ms_region);
 if (VAR_0->ms_pos>VAR_1)
  return (0);
 return (VAR_1-VAR_0->ms_pos);
}
