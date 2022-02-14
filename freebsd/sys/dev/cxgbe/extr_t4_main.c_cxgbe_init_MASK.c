
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_info {TYPE_1__* pi; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct adapter*,struct vi_info*,int,char*) ;
 int FUNC_1 (struct vi_info*) ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct vi_info *VAR_3 = VAR_2;
 struct adapter *VAR_4 = VAR_3->pi->adapter;

 if (FUNC_0(VAR_4, VAR_3, VAR_1 | VAR_0, "t4init") != 0)
  return;
 FUNC_1(VAR_3);
 FUNC_2(VAR_4, 0);
}
