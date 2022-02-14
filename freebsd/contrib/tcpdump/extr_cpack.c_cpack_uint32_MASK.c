
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cpack_state {int const* c_next; } ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (struct cpack_state*,int) ;

int
FUNC_2(struct cpack_state *VAR_0, uint32_t *VAR_1)
{
 const uint8_t *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, sizeof(*VAR_1))) == ((void*)0))
  return -1;

 *VAR_1 = FUNC_0(VAR_2);


 VAR_0->c_next = VAR_2 + sizeof(*VAR_1);
 return 0;
}
