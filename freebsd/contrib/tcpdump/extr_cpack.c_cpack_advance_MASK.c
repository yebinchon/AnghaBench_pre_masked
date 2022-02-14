
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpack_state {scalar_t__ c_next; scalar_t__ c_buf; scalar_t__ c_len; } ;



int
FUNC_0(struct cpack_state *VAR_0, const size_t VAR_1)
{

 if (VAR_0->c_next - VAR_0->c_buf + VAR_1 > VAR_0->c_len)
  return -1;
 VAR_0->c_next += VAR_1;
 return 0;
}
