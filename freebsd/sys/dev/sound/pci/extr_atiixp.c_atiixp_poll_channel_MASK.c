
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile uint32_t ;
struct atiixp_chinfo {int flags; int blksz; int blkcnt; int ptr; int volatile prevptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct atiixp_chinfo*) ;

__attribute__((used)) static __inline int
FUNC_1(struct atiixp_chinfo *VAR_1)
{
 uint32_t VAR_2, VAR_3;
 volatile uint32_t VAR_4;

 if (!(VAR_1->flags & VAR_0))
  return (0);

 VAR_2 = VAR_1->blksz * VAR_1->blkcnt;
 VAR_4 = FUNC_0(VAR_1);
 VAR_1->ptr = VAR_4;
 VAR_4 %= VAR_2;
 VAR_4 &= ~(VAR_1->blksz - 1);
 VAR_3 = (VAR_2 + VAR_4 - VAR_1->prevptr) % VAR_2;

 if (VAR_3 < VAR_1->blksz)
  return (0);

 VAR_1->prevptr = VAR_4;

 return (1);
}
