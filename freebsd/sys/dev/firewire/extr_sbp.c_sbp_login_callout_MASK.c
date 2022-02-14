
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_dev {TYPE_1__* target; } ;
struct TYPE_2__ {int sbp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sbp_dev*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct sbp_dev *VAR_2 = (struct sbp_dev *)VAR_1;
 FUNC_0(VAR_2->target->sbp);
 FUNC_1(VAR_2, VAR_0, ((void*)0));
}
