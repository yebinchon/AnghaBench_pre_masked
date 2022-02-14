
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_hashlimit_htable {scalar_t__ family; TYPE_1__* pde; int timer; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct xt_hashlimit_htable*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct xt_hashlimit_htable*) ;

__attribute__((used)) static void FUNC_4(struct xt_hashlimit_htable *VAR_4)
{
 FUNC_0(&VAR_4->timer);


 FUNC_2(VAR_4->pde->name,
     VAR_4->family == VAR_0 ? VAR_1 :
           VAR_2);
 FUNC_1(VAR_4, VAR_3);
 FUNC_3(VAR_4);
}
