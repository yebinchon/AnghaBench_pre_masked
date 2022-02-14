
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* release ) (struct socket*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;

__attribute__((used)) static inline void FUNC_3(struct socket *VAR_1)
{
 if (VAR_1->ops) {
  FUNC_0(VAR_0, "Release inode socket 0x%p\n", FUNC_1(VAR_1));
  VAR_1->ops->release(VAR_1);
  VAR_1->ops = ((void*)0);
 }
}
