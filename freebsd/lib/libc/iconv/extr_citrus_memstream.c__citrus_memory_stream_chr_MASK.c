
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_region {int dummy; } ;
struct _citrus_memory_stream {scalar_t__ ms_pos; int ms_region; } ;


 size_t FUNC_0 (struct _citrus_memory_stream*) ;
 int FUNC_1 (struct _citrus_region*,void*,size_t) ;
 void* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 void* FUNC_4 (void*,char,size_t) ;

void *
FUNC_5(struct _citrus_memory_stream *VAR_0,
    struct _citrus_region *VAR_1, char VAR_2)
{
 void *VAR_3, *VAR_4;
 size_t VAR_5;

 if (VAR_0->ms_pos >= FUNC_3(&VAR_0->ms_region))
  return (((void*)0));

 VAR_4 = FUNC_2(&VAR_0->ms_region, VAR_0->ms_pos);
 VAR_3 = FUNC_4(VAR_4, VAR_2, FUNC_0(VAR_0));
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_1, VAR_4, FUNC_0(VAR_0));
  VAR_0->ms_pos = FUNC_3(&VAR_0->ms_region);
  return (((void*)0));
 }
 VAR_5 = (char *)VAR_3 - (char *)VAR_4;

 FUNC_1(VAR_1, VAR_4, VAR_5);
 VAR_0->ms_pos += VAR_5 + 1;

 return (VAR_3);
}
