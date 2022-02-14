
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_region {int dummy; } ;
struct _citrus_memory_stream {scalar_t__ ms_pos; int ms_region; } ;


 int FUNC_0 (struct _citrus_region*,void*,size_t) ;
 void* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static __inline void *
FUNC_3(struct _citrus_memory_stream *VAR_0,
    struct _citrus_region *VAR_1, size_t VAR_2)
{
 void *VAR_3;

 if (VAR_0->ms_pos + VAR_2 > FUNC_2(&VAR_0->ms_region))
  return (((void*)0));

 VAR_3 = FUNC_1(&VAR_0->ms_region, VAR_0->ms_pos);
 VAR_0->ms_pos += VAR_2;
 if (VAR_1)
  FUNC_0(VAR_1, VAR_3, VAR_2);

 return (VAR_3);
}
