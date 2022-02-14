
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct via_info {int dummy; } ;
struct via_chinfo {scalar_t__ active; int blksz; int blkcnt; int ptr; int prevptr; scalar_t__ rbase; struct via_info* parent; int * channel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct via_info*,scalar_t__,int) ;

__attribute__((used)) static __inline int
FUNC_1(struct via_chinfo *VAR_1)
{
 struct via_info *VAR_2;
 uint32_t VAR_3, VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;
 int VAR_8;

 if (VAR_1 == ((void*)0) || VAR_1->channel == ((void*)0) || VAR_1->active == 0)
  return (0);

 VAR_2 = VAR_1->parent;
 VAR_3 = VAR_1->blksz * VAR_1->blkcnt;
 VAR_5 = FUNC_0(VAR_2, VAR_1->rbase + VAR_0, 4);
 VAR_6 = VAR_5 >> 24;
 VAR_7 = VAR_5 & 0x00ffffff;
 VAR_8 = ((VAR_6 + 1) * VAR_1->blksz) - VAR_7;
 VAR_8 %= VAR_3;
 VAR_8 &= ~(VAR_1->blksz - 1);
 VAR_1->ptr = VAR_8;
 VAR_4 = (VAR_3 + VAR_8 - VAR_1->prevptr) % VAR_3;

 if (VAR_4 < VAR_1->blksz)
  return (0);

 VAR_1->prevptr = VAR_8;

 return (1);
}
