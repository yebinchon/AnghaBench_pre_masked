
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mm; } ;
struct TYPE_5__ {int inode; } ;
struct TYPE_4__ {int offset; int ptr; } ;
union futex_key {TYPE_3__ private; TYPE_2__ shared; TYPE_1__ both; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(union futex_key *VAR_0)
{
 if (!VAR_0->both.ptr) {

  FUNC_0(1);
  return;
 }

 switch (VAR_0->both.offset & (129|128)) {
 case 129:
  FUNC_1(VAR_0->shared.inode);
  break;
 case 128:
  FUNC_2(VAR_0->private.mm);
  break;
 }
}
