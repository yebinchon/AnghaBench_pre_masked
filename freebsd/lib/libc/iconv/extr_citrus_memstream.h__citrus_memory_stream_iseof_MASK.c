
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_memory_stream {scalar_t__ ms_pos; int ms_region; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_memory_stream *VAR_0)
{

 return (VAR_0->ms_pos >= FUNC_0(&VAR_0->ms_region));
}
