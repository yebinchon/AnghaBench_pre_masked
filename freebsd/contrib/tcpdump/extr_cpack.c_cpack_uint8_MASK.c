
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cpack_state {int c_buf; size_t c_len; int * c_next; } ;



int
FUNC_0(struct cpack_state *VAR_0, uint8_t *VAR_1)
{

 if ((size_t)(VAR_0->c_next - VAR_0->c_buf) >= VAR_0->c_len)
  return -1;

 *VAR_1 = *VAR_0->c_next;


 VAR_0->c_next++;
 return 0;
}
