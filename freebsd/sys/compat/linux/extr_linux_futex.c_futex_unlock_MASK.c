
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shared; } ;
struct futex {TYPE_1__ f_key; int f_refcount; int f_uaddr; } ;


 int FUNC_0 (struct futex*) ;
 int FUNC_1 (struct futex*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_3(struct futex *VAR_1)
{

 FUNC_2(VAR_0, "futex_unlock uaddr %p ref %d shared %d",
     VAR_1->f_uaddr, VAR_1->f_refcount, VAR_1->f_key.shared);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
