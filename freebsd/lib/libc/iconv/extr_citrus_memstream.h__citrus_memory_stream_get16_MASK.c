
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct _citrus_memory_stream {scalar_t__ ms_pos; int ms_region; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static __inline int
FUNC_2(struct _citrus_memory_stream *VAR_0, uint16_t *VAR_1)
{

 if (VAR_0->ms_pos + 2 > FUNC_1(&VAR_0->ms_region))
  return (-1);

 *VAR_1 = FUNC_0(&VAR_0->ms_region, VAR_0->ms_pos);
 VAR_0->ms_pos += 2;

 return (0);
}
