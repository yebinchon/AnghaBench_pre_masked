
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct unwind_state {void* pc; void* fp; void* sp; } ;


 int FUNC_0 (void*) ;

int
FUNC_1(struct unwind_state *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = VAR_0->fp;
 if (!FUNC_0(VAR_1))
  return (-1);

 VAR_0->sp = VAR_1 + 0x10;

 VAR_0->fp = *(uint64_t *)(VAR_1);

 VAR_0->pc = *(uint64_t *)(VAR_1 + 8) - 4;

 return (0);
}
