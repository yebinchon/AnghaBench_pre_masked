
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct pthread {TYPE_1__* wake_addr; } ;
struct TYPE_2__ {scalar_t__ value; } ;


 int FUNC_0 (scalar_t__*,int ,int,struct timespec const*,int ) ;

int
FUNC_1(struct pthread *VAR_0, int VAR_1,
 const struct timespec *VAR_2)
{

 if (VAR_0->wake_addr->value != 0)
  return (0);

 return FUNC_0(&VAR_0->wake_addr->value, 0,
                 VAR_1, VAR_2, 0);
}
