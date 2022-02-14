
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct ak4117 {TYPE_1__ timer; scalar_t__ init; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ak4117*,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct ak4117 *VAR_2 = (struct ak4117 *)VAR_1;

 if (VAR_2->init)
  return;
 FUNC_1(VAR_2, 0);
 VAR_2->timer.expires = 1 + VAR_0;
 FUNC_0(&VAR_2->timer);
}
