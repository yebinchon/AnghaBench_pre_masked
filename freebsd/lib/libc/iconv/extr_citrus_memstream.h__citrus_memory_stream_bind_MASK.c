
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_region {int dummy; } ;
struct _citrus_memory_stream {scalar_t__ ms_pos; struct _citrus_region ms_region; } ;



__attribute__((used)) static __inline void
FUNC_0(struct _citrus_memory_stream * __restrict VAR_0,
    const struct _citrus_region * __restrict VAR_1)
{

 VAR_0->ms_region = *VAR_1;
 VAR_0->ms_pos = 0;
}
