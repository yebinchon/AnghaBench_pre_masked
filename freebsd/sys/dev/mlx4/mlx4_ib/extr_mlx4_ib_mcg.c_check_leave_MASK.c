
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mcast_group {TYPE_1__* func; } ;
struct TYPE_2__ {scalar_t__ state; int join_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mcast_group *VAR_2, int VAR_3, u8 VAR_4)
{
 if (VAR_2->func[VAR_3].state != VAR_1)
  return VAR_0;


 if (~VAR_2->func[VAR_3].join_state & VAR_4)
  return VAR_0;

 if (!VAR_4)
  return VAR_0;

 return 0;
}
