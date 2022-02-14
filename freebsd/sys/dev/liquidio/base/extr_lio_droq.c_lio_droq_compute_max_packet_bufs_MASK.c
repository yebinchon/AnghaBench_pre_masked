
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lio_droq {scalar_t__ max_empty_descs; scalar_t__ max_count; scalar_t__ buffer_size; } ;



__attribute__((used)) static void
FUNC_0(struct lio_droq *VAR_0)
{
 uint32_t VAR_1 = 0;







 VAR_0->max_empty_descs = 0;

 do {
  VAR_0->max_empty_descs++;
  VAR_1 += VAR_0->buffer_size;
 } while (VAR_1 < (64 * 1024));

 VAR_0->max_empty_descs = VAR_0->max_count - VAR_0->max_empty_descs;
}
