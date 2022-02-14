
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_memory_stream {int ms_pos; int ms_region; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct _citrus_memory_stream*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static __inline int
FUNC_2(struct _citrus_memory_stream *VAR_1)
{

 if (FUNC_0(VAR_1))
  return (VAR_0);
 return (FUNC_1(&VAR_1->ms_region, VAR_1->ms_pos++));
}
