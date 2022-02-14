
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct tty {int dummy; } ;
struct terminal {TYPE_1__* tm_class; } ;
struct TYPE_2__ {int (* tc_mmap ) (struct terminal*,int ,int *,int,int *) ;} ;


 int FUNC_0 (struct terminal*,int ,int *,int,int *) ;
 struct terminal* FUNC_1 (struct tty*) ;

__attribute__((used)) static int
FUNC_2(struct tty *VAR_0, vm_ooffset_t VAR_1, vm_paddr_t * VAR_2,
    int VAR_3, vm_memattr_t *VAR_4)
{
 struct terminal *VAR_5 = FUNC_1(VAR_0);

 return (VAR_5->tm_class->tc_mmap(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4));
}
