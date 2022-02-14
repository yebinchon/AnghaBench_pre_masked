
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_info {int viid; TYPE_1__* pi; } ;
struct adapter {int pf; int mbox; } ;
typedef int device_t ;
struct TYPE_2__ {struct adapter* adapter; } ;


 int FUNC_0 (struct vi_info*) ;
 struct vi_info* FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,struct vi_info*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct vi_info *VAR_1;
 struct adapter *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = VAR_1->pi->adapter;

 FUNC_2(VAR_2, VAR_1);

 FUNC_0(VAR_1);
 FUNC_4(VAR_2, VAR_2->mbox, VAR_2->pf, 0, VAR_1->viid);

 FUNC_3(VAR_2, 0);

 return (0);
}
