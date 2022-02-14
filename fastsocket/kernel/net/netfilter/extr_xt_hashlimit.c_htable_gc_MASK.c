
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {int gc_interval; } ;
struct xt_hashlimit_htable {TYPE_2__ timer; TYPE_1__ cfg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct xt_hashlimit_htable*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct xt_hashlimit_htable *VAR_3 = (struct xt_hashlimit_htable *)VAR_2;

 FUNC_1(VAR_3, VAR_1);


 VAR_3->timer.expires = VAR_0 + FUNC_2(VAR_3->cfg.gc_interval);
 FUNC_0(&VAR_3->timer);
}
