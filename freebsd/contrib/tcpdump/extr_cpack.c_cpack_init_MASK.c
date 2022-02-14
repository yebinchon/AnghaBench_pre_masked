
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cpack_state {size_t c_len; int const* c_buf; int const* c_next; } ;


 int FUNC_0 (struct cpack_state*,int ,int) ;

int
FUNC_1(struct cpack_state *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->c_buf = VAR_1;
 VAR_0->c_len = VAR_2;
 VAR_0->c_next = VAR_0->c_buf;

 return 0;
}
