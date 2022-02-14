
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct via_info {scalar_t__ polling; int lock; } ;
struct via_chinfo {int ptr; int blksz; int blkcnt; scalar_t__ rbase; struct via_info* parent; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct via_info*,scalar_t__,int) ;

__attribute__((used)) static uint32_t
FUNC_3(kobj_t VAR_1, void *VAR_2)
{
 struct via_chinfo *VAR_3 = VAR_2;
 struct via_info *VAR_4 = VAR_3->parent;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_4->lock);
 if (VAR_4->polling != 0) {
  VAR_8 = VAR_3->ptr;
  FUNC_1(VAR_4->lock);
 } else {
  VAR_5 = FUNC_2(VAR_4, VAR_3->rbase + VAR_0, 4);
  FUNC_1(VAR_4->lock);
  VAR_6 = VAR_5 >> 24;
  VAR_7 = VAR_5 & 0x00ffffff;
  VAR_8 = (VAR_6 + 1) * VAR_3->blksz - VAR_7;
  VAR_8 %= VAR_3->blkcnt * VAR_3->blksz;
 }

 return (VAR_8);
}
