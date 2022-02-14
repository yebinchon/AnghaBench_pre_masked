
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct _citrus_memory_stream {scalar_t__ ms_pos; int ms_region; } ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

const char *
FUNC_3(struct _citrus_memory_stream * __restrict VAR_0,
    size_t * __restrict VAR_1)
{
 const uint8_t *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;

 if (VAR_0->ms_pos>=FUNC_2(&VAR_0->ms_region))
  return (((void*)0));

 VAR_2 = VAR_3 = (uint8_t *)FUNC_1(&VAR_0->ms_region, VAR_0->ms_pos);
 VAR_5 = 0;
 for (VAR_4 = FUNC_2(&VAR_0->ms_region) - VAR_0->ms_pos; VAR_4 > 0; VAR_4--) {
  VAR_5++;
  if (FUNC_0(*VAR_3))
   break;
  VAR_3++;
 }

 VAR_0->ms_pos += VAR_5;
 *VAR_1 = VAR_5;
 return ((const char *)VAR_2);
}
