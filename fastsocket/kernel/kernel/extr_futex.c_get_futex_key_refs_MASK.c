
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* mm; } ;
struct TYPE_8__ {TYPE_2__* inode; } ;
struct TYPE_6__ {int offset; int ptr; } ;
union futex_key {TYPE_5__ private; TYPE_3__ shared; TYPE_1__ both; } ;
struct TYPE_9__ {int mm_count; } ;
struct TYPE_7__ {int i_count; } ;




 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(union futex_key *VAR_0)
{
 if (!VAR_0->both.ptr)
  return;

 switch (VAR_0->both.offset & (129|128)) {
 case 129:
  FUNC_0(&VAR_0->shared.inode->i_count);
  break;
 case 128:
  FUNC_0(&VAR_0->private.mm->mm_count);
  break;
 }
}
