
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_memory_stream {scalar_t__ ms_pos; } ;


 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_0(struct _citrus_memory_stream *VAR_1, int VAR_2)
{

 if (VAR_2 != VAR_0 && VAR_1->ms_pos > 0)
  VAR_1->ms_pos--;
}
