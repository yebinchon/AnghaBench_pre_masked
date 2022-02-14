
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mq_attr {int dummy; } ;
typedef TYPE_1__* mqd_t ;
struct TYPE_3__ {int oshandle; } ;


 int FUNC_0 (int ,struct mq_attr const*,struct mq_attr*) ;

int
FUNC_1(mqd_t VAR_0, const struct mq_attr *VAR_1, struct mq_attr *VAR_2)
{

 return FUNC_0(VAR_0->oshandle, VAR_1, VAR_2);
}
