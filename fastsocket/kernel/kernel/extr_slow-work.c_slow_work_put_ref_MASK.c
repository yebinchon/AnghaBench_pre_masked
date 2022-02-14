
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slow_work {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* put_ref ) (struct slow_work*) ;} ;


 int FUNC_0 (struct slow_work*) ;

__attribute__((used)) static inline void FUNC_1(struct slow_work *VAR_0)
{
 if (VAR_0->ops->put_ref)
  VAR_0->ops->put_ref(VAR_0);
}
