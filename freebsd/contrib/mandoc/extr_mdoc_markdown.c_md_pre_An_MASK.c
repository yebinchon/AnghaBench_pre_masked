
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct roff_node {int sec; TYPE_2__* norm; } ;
struct TYPE_3__ {int auth; } ;
struct TYPE_4__ {TYPE_1__ An; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct roff_node *VAR_5)
{
 switch (VAR_5->norm->An.auth) {
 case 128:
  VAR_4 &= ~VAR_0;
  VAR_4 |= VAR_1;
  return 0;
 case 129:
  VAR_4 &= ~VAR_1;
  VAR_4 |= VAR_0;
  return 0;
 default:
  if (VAR_4 & VAR_1)
   VAR_4 |= VAR_2;
  else if (VAR_5->sec == VAR_3 &&
      ! (VAR_4 & VAR_0))
   VAR_4 |= VAR_1;
  return 1;
 }
}
