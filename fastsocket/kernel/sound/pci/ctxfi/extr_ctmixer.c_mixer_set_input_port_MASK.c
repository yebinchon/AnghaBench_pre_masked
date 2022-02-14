
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsc {int dummy; } ;
struct amixer {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* commit_write ) (struct amixer*) ;int (* set_input ) (struct amixer*,struct rsc*) ;} ;


 int FUNC_0 (struct amixer*,struct rsc*) ;
 int FUNC_1 (struct amixer*) ;

__attribute__((used)) static int FUNC_2(struct amixer *VAR_0, struct rsc *VAR_1)
{
 VAR_0->ops->set_input(VAR_0, VAR_1);
 VAR_0->ops->commit_write(VAR_0);

 return 0;
}
