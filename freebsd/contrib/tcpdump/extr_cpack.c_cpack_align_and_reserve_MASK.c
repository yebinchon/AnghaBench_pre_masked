
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cpack_state {int c_len; int const* c_buf; int c_next; } ;


 int * FUNC_0 (int const*,int ,size_t) ;

const uint8_t *
FUNC_1(struct cpack_state *VAR_0, size_t VAR_1)
{
 const uint8_t *VAR_2;


 VAR_2 = FUNC_0(VAR_0->c_buf, VAR_0->c_next, VAR_1);


 if (VAR_2 - VAR_0->c_buf + VAR_1 > VAR_0->c_len)
  return ((void*)0);

 return VAR_2;
}
