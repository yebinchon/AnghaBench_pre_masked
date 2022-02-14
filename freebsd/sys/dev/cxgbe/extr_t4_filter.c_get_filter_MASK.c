
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; } ;
struct t4_filter {TYPE_1__ fs; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct t4_filter*) ;
 int FUNC_1 (struct adapter*,struct t4_filter*) ;

int
FUNC_2(struct adapter *VAR_0, struct t4_filter *VAR_1)
{
 if (VAR_1->fs.hash)
  return (FUNC_0(VAR_0, VAR_1));
 else
  return (FUNC_1(VAR_0, VAR_1));
}
